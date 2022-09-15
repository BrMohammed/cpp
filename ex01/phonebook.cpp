/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmohamm <brmohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:58:03 by brmohamm          #+#    #+#             */
/*   Updated: 2022/09/15 21:56:34 by brmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
     std::cout << "Welcome to the crappyest awesome phonebook software" << std::endl;
     show_contacts();
    return;
}

std::string PhoneBook::bigh_add(std::string buffer)
{
   if(buffer.length() > 10)
   {
     buffer = buffer.substr(0,10);
     buffer += "."; 
   }
    return(buffer);
}
//The contact fields are: first name, last name, nickname, phone number, darkest secret.
void PhoneBook::show_for_the_index(int searsh)
{
    std::cout << "add the First Name : " << this->contacts[searsh].first_name << std::endl;
    std::cout << "add the last name : " << this->contacts[searsh].last_name << std::endl;
    std::cout << "add the nickname : " << this->contacts[searsh].nickname << std::endl;
    std::cout << "add phone number : " << this->contacts[searsh].phone_number << std::endl;
    std::cout << "add darkest secret : " << this->contacts[searsh].darkest_secret << std::endl;
}
void PhoneBook::show_contacts(void)
{ 
    char horezon = '-';
    char vertical = '|';
    int const size_of_case = 12;
    static int save_new;
    std::string buffer;
        
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
        std::cout <<  " " << bigh_add(this->contacts[i].first_name) << std::setfill (' ') << 
            std::setw (size_of_case - bigh_add(this->contacts[i].first_name).length()) << vertical ; 
        std::cout <<  " " << bigh_add(this->contacts[i].last_name) << std::setfill (' ') << 
            std::setw (size_of_case - bigh_add(this->contacts[i].last_name).length())<< vertical ;
        std::cout <<  " " << bigh_add(this->contacts[i].nickname) << std::setfill (' ') << 
            std::setw (size_of_case - bigh_add(this->contacts[i].nickname).length())<< vertical << '\n';
        std::cout << " " << std::setfill (horezon) << std::setw (12) << horezon ;
        std::cout << " " << std::setfill (horezon) << std::setw (12) << horezon ;
        std::cout << " " << std::setfill (horezon) << std::setw (12) << horezon ;
        std::cout << " " << std::setfill (horezon) << std::setw (12) << horezon << '\n';
    }
    std::cout << "Please insert one of this keyword : \n ADD , SEARCH or EXIT" << std::endl;
    std::cin >> buffer;
    if(std::cin.eof())
            return;
    if (buffer == "ADD")
    {
        this->contacts[save_new].add_data();
        save_new++;
        if (save_new > 7)
            save_new = 0;
        show_contacts();
    }
    else if (buffer == "SEARCH")
    {
        int buufer_search;
        std::cout << "Please select the index : ";
        std::cin >> buufer_search;
        if(std::cin.eof())
            return;
        if (buufer_search <= 8)
        {
            show_for_the_index(buufer_search);
            show_contacts();
        } 
    }
    else if (buffer == "EXIT")
        return ;
    else
        show_contacts();
}