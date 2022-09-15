/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmohamm <brmohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:58:09 by brmohamm          #+#    #+#             */
/*   Updated: 2022/09/15 19:40:03 by brmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <cstring>
#include <iomanip>
#include "contact.hpp"
#include <string>


class PhoneBook
{
    Contact contacts[8];
    public:
        PhoneBook(void);
    void show_contacts(void);
    std::string bigh_add(std::string buffer);
    void show_for_the_index(int searsh);
};
#endif