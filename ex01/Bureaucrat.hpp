#pragma once

#include <string>
#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	Bureaucrat();
	const std::string name;
	int	grade;
public:
	Bureaucrat(const std::string& name, int grade);
	Bureaucrat(Bureaucrat const &copy);
	~Bureaucrat();
	Bureaucrat &operator = (Bureaucrat const &obj);
	const std::string& getName() const;
	int		getGrade() const;
	void	incrementGrade();
	void	decrementGrade();
	void	signForm(Form &form);
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw ();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw ();
	};
};

std::ostream &operator<< (std::ostream &o, Bureaucrat &obj);