/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iatopchu <iatopchu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 23:13:39 by iatopchu          #+#    #+#             */
/*   Updated: 2025/05/31 23:13:40 by iatopchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
    type = "Dog";
    std::cout << "🐶 Dog was created" << std::endl;
    brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other) {
    std::cout << "🐶 Dog was created (copied)" << std::endl;
    brain = new Brain(*other.brain);
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        Animal::operator=(other);
        std::cout << "🐶 Dog was created (assigned)" << std::endl;
        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

Dog::~Dog() {
    delete brain;
    std::cout << "🐶 Dog was destroyed" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "🐶 * Woof! *" << std::endl;
}

Brain* Dog::getBrain() const {
    return brain;
}