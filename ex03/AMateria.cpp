/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 21:54:55 by abenrach          #+#    #+#             */
/*   Updated: 2026/09/20 21:38:53 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type) {}

AMateria::AMateria(const AMateria &src) : _type(src._type) {}

AMateria    &AMateria::operator=(const AMateria &src)
{
    if (this != &src)
    {
        this->_type = src._type;
    }
    return (*this);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}

std::string const   &AMateria::getType(void) const
{
    return (this->_type);
}

AMateria::~AMateria(void){}