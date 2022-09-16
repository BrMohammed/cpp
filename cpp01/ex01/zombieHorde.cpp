#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if(N > 0)
    { 
        Zombie *nzombies = new Zombie[N] ;
        for(int i = 0; i < N; i++)
        {
            nzombies[i] =  Zombie(name);
        }
        return(nzombies);
    }
    return (NULL);
}
