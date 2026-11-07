/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 18:15:35 by abenrach          #+#    #+#             */
/*   Updated: 2026/09/21 15:31:23 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("Unknow")
{
    for (int i = 0; i < 4; i++)
        this->_inv[i] = NULL;
}

Character::Character(std::string const name) : _name(name)
{
    for (int i = 0; i < 4; i++)
        this->_inv[i] = NULL;
}

Character::Character(const Character &src)
{
    this->_name = src._name;
    for (int i = 0; i < 4; i++)
            this->_inv[i] = NULL;
}

Character   &Character::operator=(const Character &src)
{
    if (this != &src)
    {
        this->_name = src._name;
        for (int i = 0; i < 4; i++)
                this->_inv[i] = NULL;
    }
    return (*this);
}

std::string const   &Character::getName(void) const
{
    return (this->_name);
}

void    Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inv[i] == NULL)
        {
            this->_inv[i] = m;
            std::cout << this->_name << " equips " << m->getType() << std::endl;
            return ;
        }
    }
    std::cout << "Inventory is full" << std::endl;
}

void    Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4)
    {
        std::cout << "Index out of range" << std::endl;
        return ;
    }
    if (this->_inv[idx] == NULL)
    {
        std::cout << "This slot is empty" << std::endl;
        return ;
    }
    std::cout << "unequip " << this->_inv[idx]->getType() << std::endl;
    this->_inv[idx] = NULL;
    return ;
}

void    Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx >= 4)
    {
        std::cout << "Index out of range" << std::endl;
        return ;
    }
    if (this->_inv[idx] == NULL)
    {
        std::cout << "This slot is empty" << std::endl;
        return ;
    }
    this->_inv[idx]->use(target);
}

Character::~Character(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inv[i])
            delete this->_inv[i];
    }
}