#pragma once

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <string>
#include <iostream>

class Intern
{
public:
	Intern();
	Intern(Intern const &intern);
	~Intern();
	Intern& operator=(const Intern &obj);
	Form	*makeForm(std::string name, std::string target);

	class InvalidForm : public std::exception
	{
		public :
			const char *what () const throw ();
	};
};
