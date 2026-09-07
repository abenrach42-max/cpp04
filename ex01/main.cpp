/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 11:36:10 by marvin            #+#    #+#             */
/*   Updated: 2026/09/06 11:36:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    Dog dogi;
    Cat moulinette;
    Animal  animals[100];

    for (int i = 0; i < 50; i++)
    {
        animals[i] = Dog(dogi);
        std::cout << animals[i].getType() << std::endl;
    }
    for (int i = 50; i < 100; i++)
    {
        animals[i] = Cat(moulinette);
        std::cout << animals[i].getType() << std::endl;
    }
    return (0);
}

// /animal | grep -x "Dog" | wc -l (petite commande pour verifier si y a bien 50 dogiiiiiiiii)