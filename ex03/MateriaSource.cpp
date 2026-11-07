/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 20:07:46 by abenrach          #+#    #+#             */
/*   Updated: 2026/09/21 15:25:42 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _inv()
{
    for (int i = 0; i < 4; i++)
        this->_inv[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
    for (int i = 0; i < 4; i++)
    {
        if (src._inv[i])
            this->_inv[i] = src._inv[i];
        else
            this->_inv[i] = NULL;
    }
}

MateriaSource   &MateriaSource::operator=(const MateriaSource &src)
{
    if (this != &src)
    {
        for (int i = 0; i < 4; i++)
        {
            if (src._inv[i])
                this->_inv[i] = src._inv[i];
            else
                this->_inv[i] = NULL;
        }
    }
    return (*this);
}

void    MateriaSource::learnMateria(AMateria *m)
{
    if (!m)
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (this->_inv[i] == NULL)
        {
            std::cout << m->getType() << " was learned" << std::endl;
            this->_inv[i] = m;
            return ;
        }
    }
    std::cout << "Inventory is full" << std::endl;
    delete m;
    return ;
}

AMateria    *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4 ; i++)
    {
        if (this->_inv[i] != NULL && this->_inv[i]->getType() == type)
            return (this->_inv[i]->clone());
    }
    std::cout << "Not learned" << std::endl;
    return (0);
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inv[i])
            delete this->_inv[i];
    }
}