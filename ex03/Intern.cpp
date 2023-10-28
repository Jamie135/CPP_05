#include "Intern.hpp"

Intern::Intern()
{}

Intern::Intern(Intern const &intern)
{
	*this = intern;
}

Intern& Intern::operator=(const Intern &intern)
{
	(void)intern;
	return (*this);
}

Intern::~Intern()
{}

Form*	Intern::makeForm(std::string name, std::string target)
{
	static std::string	keys[3] = {"RobotomyRequestForm", "PresidentialPardonForm", "ShrubberyCreationForm"};
	int					index = -1;

	for (int i = 0; i < 3; i++)
		if (name == keys[i])
			index = i;
	switch (index)
	{
		case 0:
			std::cout << "Intern creates " << name << std::endl;
			return (new RobotomyRequestForm(target));
			break;
		case 1:
			std::cout << "Intern creates " << name << std::endl;
			return (new PresidentialPardonForm(target));
			break;
		case 2:
			std::cout << "Intern creates " << name << std::endl;
			return (new ShrubberyCreationForm(target));
			break;
		default:
			throw InvalidForm();
			return (0);
			break;
	}
}
