/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 11:20:36 by abenrach          #+#    #+#             */
/*   Updated: 2026/09/20 21:36:32 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(const Ice &src) : AMateria(src) {}

Ice &Ice::operator=(const Ice &src)
{
    if (this != &src)
        this->_type = src._type;
    return (*this);
}

Ice *Ice::clone(void) const
{
    Ice *tmp;

    tmp = new Ice(*this);
    return (tmp);
}

void    Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice(void){}