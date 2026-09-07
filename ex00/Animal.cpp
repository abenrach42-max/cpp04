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

Dog::Dog(void)
{
    this->_type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

void    Dog::makeSound(void) const
{
    std::cout << "Woaf Woaf" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
}

Cat::Cat(void)
{
    this->_type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

void    Cat::makeSound(void) const
{
    std::cout << "Miawwwwww" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
}
