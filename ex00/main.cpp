#include "Bureaucrat.hpp"

int	main()
{
	std::cout << "TEST 1 : Grade is set at 50" << std::endl;
	{
		try
		{
			Bureaucrat a("John", 50);
			std::cout << a << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException& e)
		{
			std::cout << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "TEST 2 : Grade is set at 151" << std::endl;
	{
		try
		{
			Bureaucrat a("John", 151);
			std::cout << a << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException& e)
		{
			std::cout << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "TEST 3 : Grade is set at 0" << std::endl;
	{
		try
		{
			Bureaucrat a("John", 0);
			std::cout << a << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException& e)
		{
			std::cout << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "TEST 4 : Demotion" << std::endl;
	{
		try
		{
			Bureaucrat a("John", 147);
			std::cout << a << std::endl;
			a.decrementGrade();
			std::cout << a << std::endl;
			a.decrementGrade();
			std::cout << a << std::endl;
			a.decrementGrade();
			std::cout << a << std::endl;
			a.decrementGrade();
			std::cout << a << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException& e)
		{
			std::cout << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "TEST 5 : Promotion" << std::endl;
	{
		try
		{
			Bureaucrat a("John", 3);
			std::cout << a << std::endl;
			a.incrementGrade();
			std::cout << a << std::endl;
			a.incrementGrade();
			std::cout << a << std::endl;
			a.incrementGrade();
			std::cout << a << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException& e)
		{
			std::cout << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}