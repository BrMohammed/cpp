#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
    const std::string _name;
    const int _grade_to_sign;
    const int _grade_to_execute;
    bool _is_signed;
    std::string _target;

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
                return " Your grade Too Low ";
            }
        };
        Form();
        Form(std::string name,int grade_to_sign,int grade_to_execute,std::string target);
        Form(Form const &  obj);
        virtual ~Form();
        Form& operator = (Form const & rhs);
        std::string getName() const;
        std::string get_target() const ;
        bool get_is_signed() const;
        int get_grade_to_sign() const;
        int get_grade_to_execute() const;
        void beSigned(Bureaucrat const & executor);
        virtual void execute(Bureaucrat const & executor) = 0;
};
std::ostream & operator << (std::ostream & left , Form const& right);
#endif