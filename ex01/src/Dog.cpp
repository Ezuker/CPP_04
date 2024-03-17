/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 21:20:25 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/17 15:21:16 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal::Animal("Dog")
{
    std::cout << "Constructor Dog" << std::endl;
    this->brain = new Brain();
}

Dog::Dog(const Dog &rhs) : Animal::Animal(rhs)
{
    *this = rhs;
}

Dog &Dog::operator=(const Dog &rhs)
{
    this->brain = new Brain();
    (*this->brain) = (*(rhs.brain));
    return *this;
}

Dog::~Dog()
{
    std::cout << "Destructor Dog" << std::endl;
    delete this->brain;
}

void    Dog::makeSound() const
{
    std::cout << "WAF!" << std::endl;
}