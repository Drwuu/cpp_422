#pragma once
#include <iostream>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		/* attributes */
		int static const	_signGrade;
		int static const	_execGrade;
		std::ofstream		_write;
		std::string			_fileName;
	public:
		/* constructors */
		ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		ShrubberyCreationForm(std::string target);
		virtual	~ShrubberyCreationForm();

		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &src);

		/* member functions */
		void	execute(Bureaucrat const &executor) const;
};
