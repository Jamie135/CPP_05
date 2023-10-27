#pragma once

#include <string>
#include <iostream>
#include <stdexcept>
#include "AForm.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string name;
	int	grade;
public:
	Bureaucrat();
	Bureaucrat(const std::string& name, int grade);
	Bureaucrat(Bureaucrat const &copy);
	~Bureaucrat();
	Bureaucrat &operator = (Bureaucrat const &obj);
	const std::string& getName() const;
	int		getGrade() const;
	void	incrementGrade();
	void	decrementGrade();
	void	signForm(Form &form);
	void	executeForm(Form const & form);
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw () {
            return ("Grade is too high");
        }
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw () {
			return ("Grade is too low");
		}
	};
};

std::ostream &operator<< (std::ostream &o, Bureaucrat &obj);