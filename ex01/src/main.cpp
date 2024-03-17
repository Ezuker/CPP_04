/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:50:04 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/17 15:22:28 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Animal  *animal[100];
    for (int i = 0; i < 50; i++)
        animal[i] = new Dog();
    for (int i = 50; i < 100; i++)
        animal[i] = new Cat();
    for (int i = 0; i < 100; i++)
        delete animal[i];
    return 0;
}
