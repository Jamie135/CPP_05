#pragma once

#include "Bureaucrat.hpp"
#include <string>
#include <stdexcept>
#include <iostream>

class Bureaucrat;

class Form
{
private:
	const std::string	name;
	bool				signedFlag;
	const int			gradeSigned;
	const int			gradeRequired;
public:
	Form();
	Form(const std::string &name, int gradeSigned, int gradeRequired);
	Form(Form &copy);
	Form& operator=(const Form& obj);
	virtual	~Form() = 0;
	const std::string	&getName() const;
	bool				getIsSigned() const;
	int					getGradeSign() const;
	int					getGradeRequire() const;
	void				beSigned(const Bureaucrat &t);
	virtual void		execute(const Bureaucrat& executor) const = 0;

	class GradeTooLowException : public std::exception {
	public:
		virtual const char *what() const throw();
	};

	class GradeTooHighException : public std::exception {
		public:
			virtual const char *what() const throw();
	};
	class GradeIsNotSignedException : public std::exception {
		public:
			virtual const char *what() const throw();
	};
};

std::ostream &operator<< (std::ostream &o, Form const &obj);
