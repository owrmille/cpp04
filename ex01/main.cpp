/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iatopchu <iatopchu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 23:13:48 by iatopchu          #+#    #+#             */
/*   Updated: 2025/05/31 23:13:49 by iatopchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
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

void listenToAnimal(Animal& animal) {
    {
        animal.makeSound();
        printLine();
        if (Dog* dog = dynamic_cast<Dog*>(&animal)) {
            std::cout << "Dog's idea: " << dog->getBrain()->getIdea(0) << std::endl;
        } else if (Cat* cat = dynamic_cast<Cat*>(&animal)) {
            std::cout << "Cat's idea: " << cat->getBrain()->getIdea(0) << std::endl;
        } else {
            std::cout << "Unknown animal" << std::endl;
        }
    }
}

void referenceTest() {
    {
        printTitle("Test Reference: Dog", CYAN);
        Dog dog = Dog();
        Dog& dogRef = dog;
        listenToAnimal(dogRef);
    }
    {
        printTitle("Test Reference: Cat", CYAN);
        Cat cat = Cat();    
        Cat& catRef = cat;
        listenToAnimal(catRef);
    }
}

void copyTestDog() {
    {
        printTitle("Copy Test: Dog", CYAN);
        
        Dog* original = new Dog();
        Dog* copy = new Dog(*original);
        printLine();
        
        std::cout << "Original dog's default idea: " << \
            original->getBrain()->getIdea(0) << std::endl;
        std::cout << "Copied dog's default idea: " << \
            copy->getBrain()->getIdea(0) << std::endl;
        printLine();
        
        original->getBrain()->setIdea(0, "Original idea");
        std::cout << "Original dog's idea after modification: " << \
            original->getBrain()->getIdea(0) << std::endl;
        std::cout << "Copied dog's idea (should be unchanged): " << \
            copy->getBrain()->getIdea(0) << std::endl;
        printLine();
        
        Dog* assigned = new Dog();
        *assigned = *original; 
        std::cout << "Original dog's idea: " << \
            original->getBrain()->getIdea(0) << std::endl;
        std::cout << "Assigned dog's idea: " << \
            assigned->getBrain()->getIdea(0) << std::endl;
        printLine();
        
        original->getBrain()->setIdea(0, "New original idea");
        std::cout << "Original dog's idea after second modification: " << \
            original->getBrain()->getIdea(0) << std::endl;
        std::cout << "Assigned dog's idea (should be unchanged): " << \
            assigned->getBrain()->getIdea(0) << std::endl;
        printLine();
        
        delete original;
        delete copy;
        delete assigned;
    }
}

void copyTestCat() {
    {
        printTitle("Copy Test: Cat", CYAN);
        
        Cat* original = new Cat();
        Cat* copy = new Cat(*original);
        printLine();
        
        std::cout << "Original cat's default idea: " << \
            original->getBrain()->getIdea(0) << std::endl;
        std::cout << "Copied cat's default idea: " << \
            copy->getBrain()->getIdea(0) << std::endl;
        printLine();
        
        original->getBrain()->setIdea(0, "Original idea");
        std::cout << "Original cat's idea after modification: " << \
            original->getBrain()->getIdea(0) << std::endl;
        std::cout << "Copied cat's idea (should be unchanged): " << \
            copy->getBrain()->getIdea(0) << std::endl;
        printLine();
        
        Cat* assigned = new Cat();
        *assigned = *original; 
        std::cout << "Original cat's idea: " << \
            original->getBrain()->getIdea(0) << std::endl;
        std::cout << "Assigned cat's idea: " << \
            assigned->getBrain()->getIdea(0) << std::endl;
        printLine();
        
        original->getBrain()->setIdea(0, "New original idea");
        std::cout << "Original cat's idea after second modification: " << \
            original->getBrain()->getIdea(0) << std::endl;
        std::cout << "Assigned cat's idea (should be unchanged): " << \
            assigned->getBrain()->getIdea(0) << std::endl;
        printLine();
        
        delete original;
        delete copy;
        delete assigned;
    }
}

void arrayTest() {
    {
        printTitle("Array Test", CYAN);
        Animal* animals[6];
        for (int i = 0; i < 6; i++) {
            if (i < 3) {
                animals[i] = new Dog();
            } else {
                animals[i] = new Cat();
            }
        }
        printLine();
        for (int i = 0; i < 6; i++) {
            std::cout << "Animal " << i << ": ";
            animals[i]->makeSound();
        }
        printLine();
        for (int i = 0; i < 6; i++) {
            delete animals[i];
        }
    }
}

int main() {
    copyTestDog();
    copyTestCat();
    arrayTest();
    return 0;
}