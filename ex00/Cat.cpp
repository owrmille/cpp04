/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iatopchu <iatopchu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 23:12:15 by iatopchu          #+#    #+#             */
/*   Updated: 2025/05/31 23:12:16 by iatopchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
