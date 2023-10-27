#pragma once

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <string>
#include <iostream>

class Bureaucrat;
class Form;

class PresidentialPardonForm : public Form
{
private:
	std::string	target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(PresidentialPardonForm const &copy);
	PresidentialPardonForm &operator = (PresidentialPardonForm const &obj);
	~PresidentialPardonForm();

	virtual	void			execute(Bureaucrat const & exec) const;
};
