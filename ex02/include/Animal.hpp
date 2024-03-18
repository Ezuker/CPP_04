/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:43:07 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/18 13:41:45 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
    public:
        //Constructor
        Animal();
        Animal(std::string type);
        Animal(const Animal &rhs);
        virtual ~Animal();
    
        //Operators
        Animal  &operator=(const Animal &rhs);
        
        //Public member functions
        virtual void    makeSound() const = 0;

        //Accessors
        std::string getType() const;
        void        setType(const std::string type);

    protected:
        std::string type;
};
