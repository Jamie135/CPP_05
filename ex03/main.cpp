#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	std::cout << "\nTEST 1 : Shrubbery Valid" << std::endl;
	{
		try
		{
			Bureaucrat a("John", 137);
			Form		*shrub = new ShrubberyCreationForm("Garden");
			Bureaucrat b("Doe", 145);

			std::cout << a << std::endl;
			std::cout << b << std::endl;
			b.signForm(*shrub);
			
			a.executeForm(*shrub);
			// delete shrub;
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
			std::cout << e.what() << std::endl;
		}
		catch (Form::GradeTooHighException& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\nTEST 2 : Shrubbery not valid" << std::endl;
	{
		try
		{
			Bureaucrat a("John", 138);
			Form		*shrub = new ShrubberyCreationForm("Garden");

			Bureaucrat b("Doe", 145);

			std::cout << a << std::endl;
			std::cout << b << std::endl;
			b.signForm(*shrub);
			
			a.executeForm(*shrub);
			delete shrub;
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
			std::cout << e.what() << std::endl;
		}
		catch (Form::GradeTooHighException& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\nTEST 3 : Robotomy valid" << std::endl;
	{
		try
		{
			Bureaucrat a("John", 45);
			Form		*robot = new RobotomyRequestForm("Bender");

			Bureaucrat b("Doe", 72);
			
			std::cout << a << std::endl;
			std::cout << b << std::endl;
			b.signForm(*robot);
			
			a.executeForm(*robot);
			delete robot;
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
			std::cout << e.what() << std::endl;
		}
		catch (Form::GradeTooHighException& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\nTEST 4 : Robotomy not valid" << std::endl;
	{
		try
		{
			Bureaucrat a("John", 46);
			Form		*robot = new RobotomyRequestForm("Bender");

			Bureaucrat b("Doe", 72);
		
			std::cout << a << std::endl;
			std::cout << b << std::endl;
			b.signForm(*robot);
			
			a.executeForm(*robot);
			delete robot;
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
			std::cout << e.what() << std::endl;
		}
		catch (Form::GradeTooHighException& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\nTEST 5 : PresidentialPardon valid" << std::endl;
	{
		try
		{
			Bureaucrat a("John", 5);
			Form		*pardon = new PresidentialPardonForm("ಠ_ಠ");

			Bureaucrat b("Doe", 25);
		
			std::cout << a << std::endl;
			std::cout << b << std::endl;
			b.signForm(*pardon);
			
			a.executeForm(*pardon);
			delete pardon;
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
			std::cout << e.what() << std::endl;
		}
		catch (Form::GradeTooHighException& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\nTEST 6 : PresidentialPardon not valid" << std::endl;
	{
		try
		{
			Bureaucrat a("John", 6);
			Form		*pardon = new PresidentialPardonForm("ಠ_ಠ");

			Bureaucrat b("Doe", 25);

			std::cout << a << std::endl;
			std::cout << b << std::endl;
			b.signForm(*pardon);
			
			a.executeForm(*pardon);
			delete pardon;
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
			std::cout << e.what() << std::endl;
		}
		catch (Form::GradeTooHighException& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}