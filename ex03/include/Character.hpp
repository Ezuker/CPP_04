/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:21:40 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/18 23:58:53 by bcarolle         ###   ########.fr       */
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

        //Member function
        virtual std::string const   &getName() const;
        virtual void                equip(AMateria *m);
        virtual void                unequip(int idx);
        virtual void                use(int idx, ICharacter &target);

    private:
        AMateria    *_inventory[4];
        std::string _name;
};