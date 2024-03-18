/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 23:43:46 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/19 00:11:03 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    *this = copy;
}

MateriaSource::~MateriaSource()
{
}

MateriaSource    &MateriaSource::operator=(const MateriaSource &rhs)
{
    (void)rhs;
    return (*this);
}

void    MateriaSource::learnMateria(AMateria *)
{
    std::cout << "learn Materia" << std::endl;
}

AMateria    *MateriaSource::createMateria(std::string const &type)
{
    std::cout << "create Materia " << type << std::endl;
    AMateria *materia = new Cure();
    return (materia);
}