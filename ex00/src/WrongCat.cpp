/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:09:39 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/17 15:30:00 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal::WrongAnimal("WrongCat")
{
    std::cout << "Constructor WrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat &rhs) : WrongAnimal::WrongAnimal(rhs)
{
    *this = rhs;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
    *this = rhs;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor WrongCat" << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "MIAGROUUUUUUU" << std::endl;
}