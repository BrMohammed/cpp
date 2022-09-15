/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmohamm <brmohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:57:51 by brmohamm          #+#    #+#             */
/*   Updated: 2022/09/15 15:19:17 by brmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
//The contact fields are: first name, last name, nickname, phone number, darkest secret.
 void Contact::add_data(void)
 {
    std::cout << "add the First Name : " ;
    std::cin >> this->first_name ;
    std::cout << "add the last name : " ;
    std::cin >> this->last_name;
    std::cout << "add the nickname : " ;
    std::cin >> this->nickname;
    std::cout << "add phone number : ";
    std::cin >> this->phone_number;
    std::cout << "add darkest secret : ";
    std::cin >> this->darkest_secret;
 }