#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void func0() {
const Dog* j = new Dog();
{
    Dog tmp;
    tmp = *j;
    // assert(tmp._b != j->_b);
}
delete j;//should not create a leak

}

void func1() {
    const Animal* i = new Cat();
    Animal* arr[10];// = new Animal[10];

    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            arr[i] = new Cat();
        else if (i % 2)
            arr[i] = new Dog();
    }

    for (int i = 0; i < 10; i++)
        arr[i]->makeSound();

    for (int i = 0; i < 10; i++)
        delete arr[i];
    delete i;
}

int main()
{
    func1();
    system("leaks polymorphism");
return 0;
}