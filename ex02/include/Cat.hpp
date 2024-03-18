/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:46:49 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/17 15:01:14 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        //Constructor
        Cat();
        Cat(const Cat &rhs);
        virtual ~Cat();

        //Operator
        Cat  &operator=(const Cat &rhs);

        //Public member functions
        void makeSound() const;
        
    private:
        Brain *brain;
};