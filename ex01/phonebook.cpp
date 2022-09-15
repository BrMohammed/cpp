/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmohamm <brmohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:58:03 by brmohamm          #+#    #+#             */
/*   Updated: 2022/09/15 16:15:29 by brmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
     std::cout << "Hi this is the crappyest awesome phonebook software" << std::endl;
     show_contacts();
    return;
}

void PhoneBook::show_contacts(void)
{ 
    char horezon = '-';
    char vertical = '|';
    int const size_of_case = 12;
        
    // index, first name, last name and nickname.

    std::cout << " " << std::setfill (horezon) << std::setw (12) << horezon ;
    std::cout << " " << std::setfill (horezon) << std::setw (12) << horezon ;
    std::cout << " " << std::setfill (horezon) << std::setw (12) << horezon ;
    std::cout << " " << std::setfill (horezon) << std::setw (12) << horezon << '\n';
    
    std::cout << vertical << " " << "index" << std::setfill (' ') << std::setw (7)<< vertical ;
    std::cout <<  " " << "first name" << std::setfill (' ') << std::setw (2)<< vertical ;
    std::cout <<  " " << "last name" << std::setfill (' ') << std::setw (3)<< vertical ;
    std::cout <<  " " << "nickname" << std::setfill (' ') << std::setw (4)<< vertical << '\n';
    std::cout << " " << std::setfill (horezon) << std::setw (12) << horezon ;
    std::cout << " " << std::setfill (horezon) << std::setw (12) << horezon ;
    std::cout << " " << std::setfill (horezon) << std::setw (12) << horezon ;
    std::cout << " " << std::setfill (horezon) << std::setw (12) << horezon << '\n';
    for (int i = 0;  i < 8; i++)
    {
        std::cout << vertical << " " << i << std::setfill (' ') << std::setw (11)<< vertical ;
        std::cout <<  " " << this->contacts[i].first_name << std::setfill (' ') << std::setw (size_of_case - this->contacts[i].first_name.length()) << vertical ; 
        std::cout <<  " " << this->contacts[i].last_name << std::setfill (' ') << std::setw (size_of_case - this->contacts[i].last_name.length())<< vertical ;
        std::cout <<  " " << this->contacts[i].nickname << std::setfill (' ') << std::setw (size_of_case - this->contacts[i].nickname.length())<< vertical << '\n';
        std::cout << " " << std::setfill (horezon) << std::setw (12) << horezon ;
        std::cout << " " << std::setfill (horezon) << std::setw (12) << horezon ;
        std::cout << " " << std::setfill (horezon) << std::setw (12) << horezon ;
        std::cout << " " << std::setfill (horezon) << std::setw (12) << horezon << '\n';
    }
    std::cout << "plz insert one of this keyword : \n ADD , SEARCH or EXIT" << std::endl;
}