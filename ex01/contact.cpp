/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmohamm <brmohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:57:51 by brmohamm          #+#    #+#             */
/*   Updated: 2022/09/15 22:40:16 by brmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
//The contact fields are: first name, last name, nickname, phone number, darkest secret.
 void Contact::add_data(void)
 {
   std::cin.ignore();
   std::cin.clear();
   std::cout << "add the First Name : " ;
   while (std::getline(std::cin, this->_first_name))
   {
      if(this->_first_name.length() > 0 )
         break;
      std::cout << "add the First Name : " ;
   }
   std::cout << "add the last name : " ;
   while (std::getline(std::cin, this->_last_name))
   {
      if(this->_last_name.length() > 0 )
         break;
      std::cout << "add the last name : " ;
   }
   std::cout << "add the nickname : " ;
   while (std::getline(std::cin, this->_nickname))
   {
      if(this->_nickname.length() > 0 )
         break;
      std::cout << "add the nickname : " ;
   }
   std::cout << "add phone number : ";
   while (std::getline(std::cin, this->_phone_number))
   {
      if(this->_phone_number.length() > 0 )
         break;
      std::cout << "add phone number : ";
   }
   std::cout << "add darkest secret : ";
   while (std::getline(std::cin, this->_darkest_secret))
   {
      if(this->_darkest_secret.length() > 0 )
         break;
      std::cout << "add phone number : ";
   }
 }


std::string Contact::geter_first_name(void) const
{
   return this->_first_name;
}
void Contact::seter_first_name(std::string buffer)
{
        this->_first_name =  buffer;
}



std::string Contact::geter_last_name(void) const
{
   return this->_last_name;
}
void Contact::seter_last_name(std::string buffer)
{
        this->_last_name =  buffer;
}

std::string Contact::geter_nickname(void) const
{
   return this->_nickname;
}
void Contact::seter_nickname(std::string buffer)
{
        this->_nickname =  buffer;
}

std::string Contact::geter_phone_number(void) const
{
   return this->_phone_number;
}
void Contact::seter_phone_number(std::string buffer)
{
        this->_phone_number =  buffer;
}

std::string Contact::geter_darkest_secret(void) const
{
   return this->_darkest_secret;
}
void Contact::seter_darkest_secret(std::string buffer)
{
        this->_darkest_secret =  buffer;
}
