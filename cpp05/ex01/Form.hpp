#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
    const std::string _name;
    const int _grade_to_sign;
    const int _grade_to_execute;
    bool _is_signed;

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
        Form();
        Form(std::string name,int grade_to_sign,int grade_to_execute);
        Form(Form const &  obj);
        ~Form();
        Form& operator = (Form const & rhs);
        std::string getName() const;
        bool get_is_signed() const;
        int get_grade_to_sign() const;
        int get_grade_to_execute() const;
        void beSigned(Bureaucrat& too_Low);
};
std::ostream & operator << (std::ostream & left , Form const& right);
#endif