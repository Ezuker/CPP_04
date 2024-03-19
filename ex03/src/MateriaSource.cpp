/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 23:43:46 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/19 01:17:13 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        this->src[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    *this = copy;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->src[i])
            delete this->src[i];
    }
}

AMateria    *MateriaSource::getSrc(int i) const
{
    return (this->src[i]);
}
MateriaSource    &MateriaSource::operator=(const MateriaSource &rhs)
{
    for (int i = 0; i < 4; i++)
    {
        this->src[i] = rhs.getSrc(i);
    }
    return (*this);
}

void    MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->src[i] == NULL)
        {
            this->src[i] = m->clone();
            std::cout << "Materia learned" << std::endl;
            delete m;
            return;
        }
    }
    std::cout << "Not enough space to learn a Materia" << std::endl;
    delete m;
}

AMateria    *MateriaSource::createMateria(std::string const &type)
{
    std::cout << "create Materia " << type << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->src[i]->getType() == type)
        {
            return (this->src[i]->clone());
        }
    }
    return (0);
}