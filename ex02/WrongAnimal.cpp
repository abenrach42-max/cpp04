/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 15:43:14 by abenrach          #+#    #+#             */
/*   Updated: 2026/09/07 16:50:32 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Unknow")
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
    std::cout << "WrongAnimal copy assignement called" << std::endl;
    if (this != &src)
    {
        this->_type = src._type;
    }
    return (*this);
}

std::string WrongAnimal::getType(void) const
{
    return (this->_type);
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "Wrong ..........." << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}
