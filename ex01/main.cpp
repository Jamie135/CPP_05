#include "Bureaucrat.hpp"

int	main()
{
	std::cout << "TEST 1 : sign grade at 0" << std::endl;
	{
		try
		{
			Bureaucrat a("John", 50);
			
			Form		form("divorce paper", 0, 0);
			
			std::cout << a << std::endl;
			std::cout << form << std::endl << std::endl;
			a.signForm(form);
		}
		catch (Bureaucrat::GradeTooLowException& e)
		{
			std::cout << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException& e)
		{
			std::cout << e.what() << std::endl;
		}
		catch (Form::GradeTooLowException& e)
		{
			std::cout << "Form : Sign :" << e.what() << std::endl;
		}
		catch (Form::GradeTooHighException& e)
		{
			std::cout << "Form : Sign :" << e.what() << std::endl;
		}
	}
	std::cout << "TEST 2 : sign grade at 151" << std::endl;
	{
		try
		{
			Bureaucrat a("John", 50);
			Form		form("divorce paper", 151, 151);
			
			
			std::cout << a << std::endl;
			std::cout << form << "\n" << std::endl;
			a.signForm(form);
		}
		catch (Bureaucrat::GradeTooLowException& e)
		{
			std::cout << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException& e)
		{
			std::cout << e.what() << std::endl;
		}
		catch (Form::GradeTooLowException& e)
		{
			std::cout << "Form : Sign :" << e.what() << std::endl;
		}
		catch (Form::GradeTooHighException& e)
		{
			std::cout << "Form : Sign :" << e.what() << std::endl;
		}
	}
	std::cout << "TEST 3 : sign grade at 50" << std::endl;
	{
		try
		{
			Bureaucrat a("John", 50);
			Form		form("divorce paper", 50, 50);
			
			std::cout << a << std::endl;
			std::cout << form << "\n" << std::endl;
			a.signForm(form);
			std::cout << form << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException& e)
		{
			std::cout << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException& e)
		{
			std::cout << e.what() << std::endl;
		}
		catch (Form::GradeTooLowException& e)
		{
			std::cout << "Form : Sign :" << e.what() << std::endl;
		}
		catch (Form::GradeTooHighException& e)
		{
			std::cout << "Form : Sign :" << e.what() << std::endl;
		}
	}
	std::cout << "TEST 4 : sign grade at 49" << std::endl;
	{
		try
		{
			Bureaucrat a("John", 50);
			Form		form("divorce paper", 49, 49);
			
			std::cout << a << std::endl;
			std::cout << form << "\n" << std::endl;
			a.signForm(form);
			std::cout << form << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException& e)
		{
			std::cout << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException& e)
		{
			std::cout << e.what() << std::endl;
		}
		catch (Form::GradeTooLowException& e)
		{
			std::cout << "Form : Sign :" << e.what() << std::endl;
		}
		catch (Form::GradeTooHighException& e)
		{
			std::cout << "Form : Sign :" << e.what() << std::endl;
		}
	}
	return (0);
}