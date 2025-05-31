#include "Cat.hpp"

Cat::Cat() : Animal() {
    type = "Cat";
    std::cout << "🐱 Cat was created" << std::endl;
    brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << "🐱 Cat was created (copied)" << std::endl;
    brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        Animal::operator=(other);
        std::cout << "🐱 Cat was created (assigned)" << std::endl;
        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

Cat::~Cat() {
    delete brain;
    std::cout << "🐱 Cat was destroyed" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "🐱 * Meow! *" << std::endl;
}

Brain* Cat::getBrain() const {
    return brain;
}
