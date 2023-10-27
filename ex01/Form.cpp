#include "Form.hpp"

Form::Form() : name(""), gradeSigned(150), gradeRequired(150) {};

Form::Form(const std::string &name, int gradeSigned, int gradeRequired)
	: name(name), signedFlag(false), gradeSigned(gradeSigned), \
	gradeRequired(gradeRequired)
{
	if (gradeSigned < 1)
		throw Form::GradeTooHighException();
	else if (gradeSigned > 150)
		throw Form::GradeTooLowException();
	if (gradeRequired < 1)
		throw Form::GradeTooHighException();
	else if (gradeRequired > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{}

Form::Form(Form &copy)
	:	name(copy.name), signedFlag(copy.signedFlag), gradeSigned(copy.gradeSigned), \
		gradeRequired(copy.gradeRequired)
{}

Form& Form::operator=(const Form &obj)
{
	if (this != &obj)
		signedFlag = obj.signedFlag;
	return (*this);
}

const std::string &Form::getName() const
{
	return (name);
}

bool	Form::getIsSigned() const
{
	return (signedFlag);
}

int		Form::getGradeSign() const
{
	return (gradeSigned);
}

int		Form::getGradeRequire() const
{
	return (gradeRequired);
}

void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= gradeSigned)
		signedFlag = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, const Form &obj)
{
	os << obj.getName() << ", is signed " << obj.getIsSigned()
		<< ", grade to sign " << obj.getGradeSign()
		<< ", grade to require " << obj.getGradeRequire();
	return (os);
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low");
};

const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high");
};
