/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:08:03 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/18 23:31:13 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        //Constructor
        Cure();
        Cure(const Cure &rhs);
        ~Cure();
    
        //Operators
        Cure  &operator=(const Cure &rhs);

        //Member function
        virtual Cure   *clone() const;
};