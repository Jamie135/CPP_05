#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	: Form("Presidential Pardon Form", 145, 137), target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &form)
	: Form("Presidential Pardon Form", 145, 137), target(form.target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &form)
{
	if (this != &form)
		this->target = form.target;
	return (*this);
}

const char *ShrubberyCreationForm::FileCreation::what() const throw() {
	return ("Couldn't create file");
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	std::ofstream	resFile;

	if (!this->getIsSigned())
		throw Form::GradeIsNotSignedException();
	else if (executor.getGrade() > this->getGradeSign())
		throw Form::GradeTooLowException();
	else if (executor.getGrade() > this->getGradeRequire())
		throw Form::GradeTooLowException();
	else
	{
		std::string	fileName = target + "_shrubbery";
		resFile.open(fileName.c_str());
		if (resFile.is_open())
		{
			resFile << "       _-_" << std::endl;
			resFile << "    /~~   ~~\\" << std::endl;
			resFile << " /~~         ~~\\" << std::endl;
			resFile << "{               }" << std::endl;
			resFile << " \\  _-     -_  /" << std::endl;
			resFile << "   ~  \\ //  ~" << std::endl;
			resFile << "_- -   | | _- _" << std::endl;
			resFile << "  _ -  | |   -_" << std::endl;
			resFile << "  _ -  | |   -_" << std::endl;
			resFile << "      // \\" << std::endl;
			resFile.close();
		}
		else
			throw ShrubberyCreationForm::FileCreation();
	}
}
