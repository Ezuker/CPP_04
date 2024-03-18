/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:46:51 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/17 15:01:51 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
        //Constructor
        Dog();
        Dog(const Dog &rhs);
        virtual ~Dog();

        //Operator
        Dog  &operator=(const Dog &rhs);

        //Public member functions
        virtual void makeSound() const;
        
    private:
        Brain *brain;
};