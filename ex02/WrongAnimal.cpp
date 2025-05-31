#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Wrong Animal") {
    std::cout << "❗ 🐾 Wrong Animal was created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
    std::cout << "❗ 🐾 Wrong Animal was created (copied)" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    if (this != &other) {
        type = other.type;
    }
    std::cout << "❗ 🐾 Wrong Animal was created (assigned)" << std::endl;
    return *this;
}   

WrongAnimal::~WrongAnimal() {
    std::cout << "❗ 🐾 Wrong Animal was destroyed" << std::endl;
}

std::string WrongAnimal::getType() const {
    return type;
}

void WrongAnimal::makeSound() const {
    std::cout << "❗ 🐾 * Wrong Animal Silence *" << std::endl;
}