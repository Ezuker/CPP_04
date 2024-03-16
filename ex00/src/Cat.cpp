/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 21:20:23 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/16 14:16:38 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal::Animal("Cat")
{
    std::cout << "Constructor Cat" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Destructor Cat" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "MIAOU" << std::endl;
}