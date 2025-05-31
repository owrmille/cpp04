/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iatopchu <iatopchu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 23:12:24 by iatopchu          #+#    #+#             */
/*   Updated: 2025/05/31 23:12:26 by iatopchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
    type = "Dog";
    std::cout << "🐶 Dog was created" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    std::cout << "🐶 Dog was created (copied)" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        Animal::operator=(other);
    }
    std::cout << "🐶 Dog was created (assigned)" << std::endl;
    return *this;
}

Dog::~Dog() {
    std::cout << "🐶 Dog was destroyed" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "🐶 * Woof! *" << std::endl;
}