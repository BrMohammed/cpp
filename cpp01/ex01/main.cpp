/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmohamm <brmohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 20:59:10 by brmohamm          #+#    #+#             */
/*   Updated: 2022/09/16 23:16:03 by brmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *n_zombie;
    int number = 5;

    n_zombie = zombieHorde(number,"von");
    for (int i = 0; i < number ; i++)
        n_zombie[i].announce();
    delete [] n_zombie;
    //system("leaks moor_brains");
}