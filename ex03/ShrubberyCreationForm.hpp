#pragma once

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <string>
#include <fstream>
#include <stdexcept>

class Bureaucrat;
class Form;

class ShrubberyCreationForm : public Form
{
private:
	std::string	target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(ShrubberyCreationForm const &copy);
	ShrubberyCreationForm &operator = (ShrubberyCreationForm const &obj);
	~ShrubberyCreationForm();

	virtual	void			execute(Bureaucrat const & exec) const;

	class FileCreation : public std::exception {
		public:
			virtual const char *what() const throw();
	};
};
