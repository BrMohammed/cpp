#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
int main0()
{
    const Animal* j[6];
    for(int i = 0; i < 6; i++)
    {
        if(i < 3)
            j[i] = new Dog();
        else
            j[i] = new Cat();
    }
    for(int i = 0; i < 3 ; i++)
    {
        std::cout << j[i]->getType() << " " << std::endl;
        std::cout << j[i]->getType() << " " << std::endl;
        j[i]->makeSound(); 
        j[i]->makeSound();
    }
    for(int i = 0; i < 6; i++)
    {
       delete j[i];
    }

    std::cout << "\n ---------------\n" << std::endl;
    Cat a("hi");
    Cat b(a);
    
    std::cout << "a Cat: first Brain _  " << a.get_b() << std::endl;
    std::cout << "b Cat: first Brain : " << b.get_b() << std::endl;
    a.set_b("hi2");
    std::cout << "a Cat: first Brain _  " << a.get_b() << std::endl;
    std::cout << "b Cat: first Brain : " << b.get_b() << std::endl;

    return 0;
}

int main()
{
    //main0();
    Cat ce;
    {
       // std::cout << "dd" << std::endl;
        Cat cat = ce;
      //  std::cout << "dd" << std::endl;
    }
    //system("leaks Polymorphism");
    return 0;
}