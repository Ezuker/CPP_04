/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 23:32:42 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/18 23:39:56 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria::AMateria("ice")
{
}

Ice::Ice(const Ice &copy) : AMateria::AMateria(copy)
{
    *this = copy;
}

Ice::~Ice()
{
}

Ice    &Ice::operator=(const Ice &rhs)
{
    this->_type = rhs.getType();
    return (*this);
}

Ice    *Ice::clone() const
{
    Ice *clone = new Ice();
    clone->setType(this->_type);
    return (clone);
}