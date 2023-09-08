#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void func() {
    const A_Animal* j = new Dog();
    const A_Animal* i = new Cat();
    // Animal* arr[10];// = new Animal[10];

    // for (int i = 0; i < 10; i++)
    // {
    //     if (i % 2 == 0)
    //         arr[i] = new Cat();
    //     else if (i % 2)
    //         arr[i] = new Dog();
    // }

    // for (int i = 0; i < 10; i++)
    //     delete arr[i];

    // A_Animal a;

    delete j; //should not create a leak
    delete i;
}

int main()
{
    func();
    system("leaks polymorphism");
}