/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iatopchu <iatopchu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 23:13:09 by iatopchu          #+#    #+#             */
/*   Updated: 2025/05/31 23:13:10 by iatopchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    std::cout << "🐾 * Silence *" << std::endl;
}