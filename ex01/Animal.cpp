/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 11:30:55 by marvin            #+#    #+#             */
/*   Updated: 2026/09/06 11:30:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Unknow")
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal  &Animal::operator=(const Animal &src)
{
    std::cout << "Animal copy assignement called" << std::endl;
    if (this != &src)
    {
        this->_type = src._type;
    }
    return (*this);
}

void    Animal::makeSound(void) const
{
    std::cout << "..........." << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->_type);
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
}

