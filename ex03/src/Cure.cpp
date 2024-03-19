/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 23:25:49 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/19 00:35:20 by bcarolle         ###   ########.fr       */
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

void    Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}