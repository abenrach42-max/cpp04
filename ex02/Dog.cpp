/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 16:24:41 by abenrach          #+#    #+#             */
/*   Updated: 2026/09/07 17:58:50 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void) : Animal()
{
    this->_type = "Dog";
    this->_brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &src): Animal(src)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    this->_brain = new Brain(*src._brain);
}

Dog &Dog::operator=(const Dog &src)
{
    std::cout << "Dog Copy assignement called" << std::endl;
    if (this != &src)
    {
        delete this->_brain;
        this->_brain = new Brain(*src._brain);
        this->_type = src._type;
    }
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "Woaf Woaf" << std::endl;
}

Dog::~Dog(void)
{
    delete this->_brain;
    std::cout << "Dog destructor called" << std::endl;
}