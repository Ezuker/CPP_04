/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 23:25:49 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/18 23:39:44 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria::AMateria("cure")
{
}

Cure::Cure(const Cure &copy) : AMateria::AMateria(copy)
{
    *this = copy;
}

Cure::~Cure()
{
}

Cure    &Cure::operator=(const Cure &rhs)
{
    this->_type = rhs.getType();
    return (*this);
}

Cure    *Cure::clone() const
{
    Cure *clone = new Cure();
    clone->setType(this->_type);
    return (clone);
}