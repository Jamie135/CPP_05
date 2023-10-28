#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main()
{
	{
		try
		{
			Intern someRandomIntern;
			Form* rrf;
			rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
			delete rrf;
			rrf = someRandomIntern.makeForm("PresidentialPardonForm", "Bender");
			delete rrf;
			rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
			delete rrf;
			rrf = someRandomIntern.makeForm("testdsadwqdqwdqwdqwdqww", "Bender");
			delete rrf;
		}
		catch (Intern::InvalidForm &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}