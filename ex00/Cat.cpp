/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 16:24:27 by abenrach          #+#    #+#             */
/*   Updated: 2026/09/07 16:57:59 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
    this->_type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src)
{
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
    std::cout << "Cat copy assignement called" << std::endl;
    if (this != &src)
    {
        this->_type = src._type;
    }
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "Miawwwwww" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
}
