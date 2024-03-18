/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:45:00 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/18 13:41:51 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Constructor Animal" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
    std::cout << "Constructor Animal" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    *this = copy;
}

Animal::~Animal()
{
    std::cout << "Destruction Animal" << std::endl;
}

Animal  &Animal::operator=(const Animal &rhs)
{
    this->type = rhs.type;
    return (*this);
}

void    Animal::setType(const std::string type)
{
    this->type = type;
}

std::string Animal::getType() const
{
    return (this->type);
}