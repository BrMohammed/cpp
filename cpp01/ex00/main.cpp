/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmohamm <brmohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 19:30:05 by brmohamm          #+#    #+#             */
/*   Updated: 2022/09/17 17:24:41 by brmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *n_zombie;

    n_zombie = newZombie("von");
    randomChump("von");
    delete n_zombie;
    //system("leaks BraiiiiiiinnnzzzZ");
}