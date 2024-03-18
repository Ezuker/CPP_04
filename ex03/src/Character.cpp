/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 23:40:16 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/19 00:01:32 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
}

Character::Character(std::string name) : _name(name)
{
}

Character::Character(const Character &copy)
{
    *this = copy;
}

Character::~Character()
{
}

Character    &Character::operator=(const Character &rhs)
{
    this->_name = rhs.getName();
    return (*this);
}
    
std::string const   &Character::getName() const
{
    return (this->_name);
}

void    Character::equip(AMateria *m)
{
    std::cout << "equip " << m->getType() << std::endl;
}

void    Character::unequip(int idx)
{
    std::cout << "unequip idx " << idx << std::endl;
}

void    Character::use(int idx, ICharacter &target)
{
    std::cout << "use " << idx << " target " << target.getName() << std::endl;
}