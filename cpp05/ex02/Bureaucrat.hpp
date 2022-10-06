#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat
{
    const std::string _name;
    int _grade;
    public :
        class GradeTooHighException : public std::exception
        {
            const char * what () const throw ()
            {
                return "Grade Low Than 1";
            }
        };
        class GradeTooLowException : public std::exception
        {
            const char * what () const throw ()
            {
                return "Grade Too Low";
            }
        };
        Bureaucrat();
        Bureaucrat(std::string name,int grade);
        Bureaucrat(Bureaucrat const &  obj);
        ~Bureaucrat();
        Bureaucrat& operator = (Bureaucrat const & rhs);
        std::string getName() const;
        int getGrade() const;
        void signForm(std::string form, bool is_sign) const;
        void executeForm(Form const & form);
};
std::ostream & operator << (std::ostream & left , Bureaucrat const& right);
#endif