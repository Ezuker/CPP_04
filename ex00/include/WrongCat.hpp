/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:08:36 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/17 15:25:38 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        //Constructor
        WrongCat();
        WrongCat(const WrongCat &rhs);
        virtual ~WrongCat();

        //Operator
        WrongCat  &operator=(const WrongCat &rhs);

        //Public member functions
        virtual void makeSound() const;
        
        
};