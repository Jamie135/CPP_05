#pragma once

#include "Bureaucrat.hpp"
#include "AForm.hpp"
# include <string>
# include <cstdlib>
# include <ctime>

class Bureaucrat;
class Form;

class RobotomyRequestForm : public Form
{
private:
	RobotomyRequestForm();
	std::string	target;
public:
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(RobotomyRequestForm const &copy);
	RobotomyRequestForm &operator = (RobotomyRequestForm const &obj);
	~RobotomyRequestForm();

	virtual	void			execute(Bureaucrat const & exec) const;
};
