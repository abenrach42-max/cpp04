/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 16:42:54 by abenrach          #+#    #+#             */
/*   Updated: 2026/09/07 16:58:22 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    this->_type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat    &WrongCat::operator=(const WrongCat &src)
{
    std::cout << "WrongCat copy assignement constructor called" << std::endl;
    if (this != &src)
    {
        this->_type = src._type;
    }
    return (*this);
}

void    WrongCat::makeSound(void) const
{
    std::cout << "Wrong Miawwwwww" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor called" << std::endl;
}
