#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main()
{
	Form *form1 = 0;
	Form *form2 = 0;
	Form *form3 = 0;
	try
	{
		Bureaucrat bureaucrat("Me", 2);
		Intern intern;
		form1 = intern.makeForm("ShrubberyCreationForm", "home");
		if (form1)
		{
			bureaucrat.signForm(*form1);
			bureaucrat.executeForm(*form1);
			delete form1;
			form1 = 0;
		}
		form2 = intern.makeForm("RobotomyRequestForm", "home");
		if (form2)
		{
			bureaucrat.signForm(*form2);
			bureaucrat.executeForm(*form2);
			bureaucrat.executeForm(*form2);
			bureaucrat.executeForm(*form2);
			bureaucrat.executeForm(*form2);
			delete form2;
			form2 = 0;
		}
		form3 = intern.makeForm("PresidentialPardonForm", "home");
		if (form3)
		{
			bureaucrat.signForm(*form3);
			bureaucrat.executeForm(*form3);
			delete form3;
			form3 = 0;
		}
	}
	catch (Intern::InvalidForm &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}