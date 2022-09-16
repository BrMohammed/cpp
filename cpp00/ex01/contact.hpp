/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmohamm <brmohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:57:59 by brmohamm          #+#    #+#             */
/*   Updated: 2022/09/15 22:34:40 by brmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <cstring>
#include <iomanip>
//The contact fields are: first name, last name, nickname, phone number, darkest secret.
class Contact
{
   
    private :
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _phone_number;
    std::string _darkest_secret;
    public : 
        std::string geter_first_name(void) const;
        void seter_first_name(std::string buffer);

        std::string geter_last_name(void) const;
        void seter_last_name(std::string buffer);

        std::string geter_nickname(void) const;
        void seter_nickname(std::string buffer);

        std::string geter_phone_number(void) const;
        void seter_phone_number(std::string buffer);

        std::string geter_darkest_secret(void) const;
        void seter_darkest_secret(std::string buffer);
        void add_data(void);
};

#endif