/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmohamm <brmohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:34:09 by brmohamm          #+#    #+#             */
/*   Updated: 2022/09/14 11:34:09 by brmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int argc, char** argv)
{   
    if(argc > 1 )
    {
        for(int i = 1 ; i < argc ; i++)
        {
            for (int x = 0; x < (int)strlen(argv[i]); x++)
                    putchar(toupper(argv[i][x]));
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" ;
    std::cout << "\n";
    //system("leaks megaphone");
    return(0);
}
