#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

class Bureaucrat
{
    const std::string _name;
    int _grade;
    public :
        class GradeTooHighException : public std::exception
        {
            const char * what () const throw ()
            {
                return "Low than 1";
            }
        };
        class GradeTooLowException : public std::exception
        {
            const char * what () const throw ()
            {
                return "High than 150";
            }
        };
        Bureaucrat();
        Bureaucrat(std::string name,int grade);
        Bureaucrat(Bureaucrat const &  obj);
        ~Bureaucrat();
        Bureaucrat& operator = (Bureaucrat const & rhs);
        std::string getName() const;
        int getGrade() const;
        void signForm(std::string form, bool is_sign);
};
std::ostream & operator << (std::ostream & left , Bureaucrat const& right);
#endif