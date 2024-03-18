/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:50:04 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/18 13:43:54 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    // Animal *animal = new Animal();
    // Above is wrong because it's an abstract class
    Animal *dog = new Dog();
    Animal *cat = new Cat();

    // animal->makeSound();
    dog->makeSound();
    cat->makeSound();

    // delete animal;
    delete dog;
    delete cat;
}
