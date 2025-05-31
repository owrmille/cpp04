#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "colors.hpp"

void printLine() {
    std::cout << "--------------------------------" << std::endl;
}

void printDoubleLine() {
    std::cout << "=================================" << std::endl;
}

void printTitle(const std::string& title, const std::string& color) {
    printDoubleLine();
    std::cout << color << title << RESET << std::endl;
    printDoubleLine();
}

void basicTestsAnimal() {
    {
        printTitle("Basic Tests Animal", CYAN);

        const Animal* animalDefault = new Animal();
        const Animal* animalCopy = new Animal(*animalDefault);
        Animal* animalAssigned = new Animal();
        *animalAssigned = *animalDefault;
        printLine();
        
        std::cout << animalDefault->getType() << ": ";
        animalDefault->makeSound();  
        std::cout << animalCopy->getType() << " (copy): ";
        animalCopy->makeSound();
        std::cout << animalCopy->getType() << " (assigned): ";
        animalAssigned->makeSound();
        printLine();
        
        delete animalDefault;
        delete animalCopy;
        delete animalAssigned;
    }
}

void basicTestsDog() {
    {
        printTitle("Basic Tests Dog", CYAN);
        
        const Dog* dogDefault = new Dog();
        const Dog* dogCopy = new Dog(*dogDefault);
        Dog* dogAssigned = new Dog();
        *dogAssigned = *dogDefault;    
        printLine();
        
        std::cout << "Default Dog: ";
        dogDefault->makeSound();
        std::cout << dogCopy->getType() << " (copy): ";
        dogCopy->makeSound();
        std::cout << dogCopy->getType() << " (assigned): ";
        dogAssigned->makeSound();
        printLine();
        
        delete dogDefault;
        delete dogCopy;
        delete dogAssigned;
    }
}

void basicTestsCat() {
    {
        printTitle("Basic Tests Cat", CYAN);
        
        const Cat* catDefault = new Cat();
        const Cat* catCopy = new Cat(*catDefault);
        Cat* catAssigned = new Cat();
        *catAssigned = *catDefault;
        printLine();
        
        std::cout << catDefault->getType() << ": "; 
        catDefault->makeSound();
        std::cout << catCopy->getType() << " (copy): ";
        catCopy->makeSound();
        std::cout << catCopy->getType() << " (assigned): ";
        catAssigned->makeSound();
        printLine();

        delete catDefault;
        delete catCopy;
        delete catAssigned;
    }
}

void generalTestsTogether() {
    {
        printTitle("General Tests", CYAN);
        
        const Animal* dog = new Dog();
        const Animal* cat = new Cat();
        const Animal* animal = new Animal();
        printLine();
        
        std::cout << "Dog: ";
        dog->makeSound();
        std::cout << "Cat: ";
        cat->makeSound();
        std::cout << "Animal: ";
        animal->makeSound();
        printLine();

        delete dog;
        delete cat;
        delete animal;
    }
}

void wrongAnimalTestsTogether() {
    {
        printTitle("Wrong Animal and Wrong Cat Tests", CYAN);

        const WrongAnimal* wCat = new WrongCat();
        const WrongAnimal* wAnimal = new WrongAnimal();
        printLine();
        
        std::cout << "WrongCat: ";
        wCat->makeSound();
        std::cout << "WrongAnimal: ";
        wAnimal->makeSound();
        printLine();
        
        delete wCat;
        delete wAnimal;
    }
}

int main() {
    basicTestsAnimal();
    basicTestsDog();
    basicTestsCat();
    generalTestsTogether();
    wrongAnimalTestsTogether();
    return 0;
}