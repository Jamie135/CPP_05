#pragma once

#include <string>
#include <iostream>
#include <stdexcept>

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
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();
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