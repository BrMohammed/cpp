#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
int main0()
{
    //const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();

    std::cout << "------------ \n";
    const WrongAnimal* m1 = new WrongCat();
    m1->makeSound();

    std::cout << "------------ \n";

    delete i;
    delete j;
    delete m1;
    return 0;
}
int main()
{
   main0();
   system("leaks Polymorphism");
   // j->hi();
    return 0;
}