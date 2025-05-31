#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "🐾 Animal was created" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
    std::cout << "🐾 Animal was created (copied)" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
    if (this != &other) {
        type = other.type;
    }
    std::cout << "🐾 Animal was created (assigned)" << std::endl;
    return *this;
}   

Animal::~Animal() {
    std::cout << "🐾 Animal was destroyed" << std::endl;
}

std::string Animal::getType() const {
    return type;
}

void Animal::makeSound() const {
    std::cout << "🐾 * Some indistinct sound *" << std::endl;
}