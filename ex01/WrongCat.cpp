/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iatopchu <iatopchu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 23:14:03 by iatopchu          #+#    #+#             */
/*   Updated: 2025/05/31 23:14:04 by iatopchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
    type = "Wrong Cat";
    std::cout << "❗ 🐱 Wrong Cat was created" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
    std::cout << "❗ 🐱 Wrong Cat was created (copied)" << std::endl;    
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    if (this != &other) {
        WrongAnimal::operator=(other);   
    }
    std::cout << "❗ 🐱 Wrong Cat was created (assigned)" << std::endl;
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "❗ 🐱 Wrong Cat was destroyed" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "❗ 🐱 * Wrong Meow! *" << std::endl;
}

