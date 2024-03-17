/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 21:20:25 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/17 15:29:35 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal::Animal("Dog")
{
    std::cout << "Constructor Dog" << std::endl;
}

Dog::Dog(const Dog &rhs) : Animal::Animal(rhs)
{
    *this = rhs;
}

Dog &Dog::operator=(const Dog &rhs)
{
    *this = rhs;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Destructor Dog" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "WAF!" << std::endl;
}