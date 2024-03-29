/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmohamm <brmohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:58:03 by brmohamm          #+#    #+#             */
/*   Updated: 2022/09/17 17:15:10 by brmohamm         ###   ########.fr       */
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
    std::cout << "add the First Name : " << this->contacts[searsh].geter_first_name() << std::endl;
    std::cout << "add the last name : " << this->contacts[searsh].geter_last_name() << std::endl;
    std::cout << "add the nickname : " << this->contacts[searsh].geter_nickname() << std::endl;
    std::cout << "add phone number : " << this->contacts[searsh].geter_phone_number() << std::endl;
    std::cout << "add darkest secret : " << this->contacts[searsh].geter_darkest_secret() << std::endl;
}

void PhoneBook::search_meth(void)
{
    std::string buufer_search;
    std::cout << "Please select the index : ";
    std::cin.clear();
    while (std::getline(std::cin, buufer_search))
    {
      if(buufer_search.length() > 0 )
         break;
     std::cout << "Please select the index : ";
    }
    if(std::cin.eof())
        return;
    for(int i = 0;i < (int)buufer_search.length(); i++)
    {
        if(!std::isdigit(buufer_search[i]))
        {
            std::cout << "\n index not valid !! \n" << std::endl;
            return;
        }
    }
    if ((int)buufer_search.length() > 2)
    {
        std::cout << "\n index not valid !! \n" << std::endl;
        return;
    }
    int buufer_search_num = stoi(buufer_search);
    if (buufer_search_num < 8)
    {
         show_for_the_index(buufer_search_num);
         return;
    }
       
    else
    {
        std::cout << "\n index not valid !! \n" << std::endl;
        return;
    }
        
}
void PhoneBook::show_contacts(void)
{ 
    char horezon = '-';
    char vertical = '|';
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
        std::cout << vertical << std::setfill (' ') << " " << std::setw (11) << i << vertical ;
        
        std::cout  << std::setfill (' ') << std::setw (12) <<
            bigh_add(this->contacts[i].geter_first_name()) <<  vertical ; 
             
        std::cout << std::setfill (' ') << std::setw (12) << 
            bigh_add(this->contacts[i].geter_last_name()) << vertical ;
            
        std::cout << std::setfill (' ') << std::setw (12) << 
            bigh_add(this->contacts[i].geter_nickname()) << vertical << '\n';
            
        std::cout << " " << std::setfill (horezon) << std::setw (12) << horezon ;
        std::cout << " " << std::setfill (horezon) << std::setw (12) << horezon ;
        std::cout << " " << std::setfill (horezon) << std::setw (12) << horezon ;
        std::cout << " " << std::setfill (horezon) << std::setw (12) << horezon << '\n';
    }
    std::cout << "Please insert one of this keyword : \n ADD , SEARCH or EXIT" << std::endl;
    std::cin.clear();
    while (std::getline(std::cin, buffer))
   {
      if(buffer.length() > 0 )
         break;
        std::cout << "Please insert one of this keyword : \n ADD , SEARCH or EXIT" << std::endl;
   }
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
        search_meth();
        if(std::cin.eof())
            return;
        show_contacts();
    }
    else if (buffer == "EXIT")
        return ;
    else
        show_contacts();
}