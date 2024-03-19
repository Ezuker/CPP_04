/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:36:15 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/19 00:33:41 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string type) : _type(type)
{
}

AMateria::AMateria(const AMateria &copy)
{
    *this = copy;
}

AMateria::~AMateria()
{
}

AMateria    &AMateria::operator=(const AMateria &rhs)
{
    this->_type = rhs.getType();
    return (*this);
}

std::string const   &AMateria::getType() const
{
    return (this->_type);
}

void    AMateria::setType(std::string type)
{
    this->_type = type;
}

void    AMateria::use(ICharacter &target)
{
    (void)target;
    std::cout << "does nothing" << std::endl;
}