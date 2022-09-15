/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmohamm <brmohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:58:09 by brmohamm          #+#    #+#             */
/*   Updated: 2022/09/15 15:54:57 by brmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <cstring>
#include <iomanip>
#include "contact.hpp"

class PhoneBook
{
    Contact contacts[8];
    public:
        PhoneBook(void);
    void show_contacts(void);
};
#endif