#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
	: Form("Presidential Pardon Form", 25, 5), target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) 
	: Form("Presidential Pardon Form", 25, 5), target(copy.target)
{
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	if (this != &obj)
		this->target = obj.target;
	return (*this);
}

void	PresidentialPardonForm::execute(const Bureaucrat& exec) const
{
	if (!this->getIsSigned())
		throw Form::GradeIsNotSignedException();
	else if (exec.getGrade() > this->getGradeSign())
		throw Form::GradeTooLowException();
	else if (exec.getGrade() > this->getGradeRequire())
		throw Form::GradeTooLowException();
	else
		std::cerr << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
