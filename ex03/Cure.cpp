/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 17:33:35 by abenrach          #+#    #+#             */
/*   Updated: 2026/09/20 21:36:20 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(const Cure &src): AMateria(src){}

Cure    &Cure::operator=(const Cure &src)
{
    if (this != &src)
        this->_type = src._type;
    return (*this);
}

Cure    *Cure::clone(void) const
{
    Cure    *tmp;

    tmp = new Cure(*this);
    return (tmp);
}

void    Cure::use(ICharacter &target)
{
    std::cout << "* heals "<< target.getName() <<"’s wounds *" << std::endl;
}

Cure::~Cure(void){}