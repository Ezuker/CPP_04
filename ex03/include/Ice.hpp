/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:08:00 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/18 23:27:00 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        //Constructor
        Ice();
        Ice(const Ice &rhs);
        ~Ice();
    
        //Operators
        Ice  &operator=(const Ice &rhs);

        //Member function
        Ice *clone() const;
};