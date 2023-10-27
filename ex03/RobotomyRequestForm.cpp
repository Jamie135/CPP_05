#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
	: Form("Robotomy Request Form", 72, 45), target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy)
	: Form("RobotomyRequestForm", 72, 45), target(copy.target)
{
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &form)
{
	if (this != &form)
		this->target = form.target;
	return (*this);
}

void	RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	int	random;

	if (!this->getIsSigned())
		throw Form::GradeIsNotSignedException();
	else if (executor.getGrade() > this->getGradeSign())
		throw Form::GradeTooLowException();
	else if (executor.getGrade() > this->getGradeRequire())
		throw Form::GradeTooLowException();
	else
	{
		random = std::rand();
		std::cout << "*Drilling sound*" << std::endl;
		std::cout << "There is 1/2 chance" << std::endl;
		if (random % 2 == 0)
			std::cout << target << " has been robotimized.";
		else
			std::cerr << target << " failed to be robotimized.";
	}

}
