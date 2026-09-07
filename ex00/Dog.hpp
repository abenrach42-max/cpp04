/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 16:24:30 by abenrach          #+#    #+#             */
/*   Updated: 2026/09/07 16:27:48 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class   Dog : public Animal
{
    public:
        Dog(void);
        Dog(const Dog &src);
        Dog &operator=(const Dog &src);
        virtual void    makeSound(void) const;
        virtual ~Dog(void);
};

#endif