/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 15:56:30 by abenrach          #+#    #+#             */
/*   Updated: 2026/09/07 17:46:49 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &src)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
}

Brain   &Brain::operator=(const Brain &src)
{
    if (this != &src)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = src.ideas[i];
    }
    return (*this);
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor called" << std::endl;
}
