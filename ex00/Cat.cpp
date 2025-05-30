#include "Cat.hpp"

Cat::Cat() : Animal() {
    type = "Cat";
    std::cout << "🐱 Cat was created" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << "🐱 Cat was created (copied)" << std::endl;    
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        Animal::operator=(other);   
    }
    std::cout << "🐱 Cat was created (assigned)" << std::endl;
    return *this;
}

Cat::~Cat() {
    std::cout << "🐱 Cat was destroyed" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "🐱 * Meow! *" << std::endl;
}
