/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:21:40 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/19 00:55:05 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    public:
        //Constructor
        Character();
        Character(std::string name);
        Character(const Character &rhs); //deep copy to do
        virtual ~Character();

        //Operators
        Character  &operator=(const Character &rhs); //deep copy to do

        //Accessors
        virtual std::string const   &getName() const;
        AMateria                    *getInv(int i) const;

        //Member function
        virtual void                equip(AMateria *m);
        virtual void                unequip(int idx);
        virtual void                use(int idx, ICharacter &target);

    private:
        AMateria    *_inventory[4];
        std::string _name;
};