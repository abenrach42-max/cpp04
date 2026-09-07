/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 16:24:30 by abenrach          #+#    #+#             */
/*   Updated: 2026/09/07 17:56:50 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
# include "Brain.hpp"

class   Dog : public Animal
{
    private:
        Brain   *_brain;
    public:
        Dog(void);
        Dog(const Dog &src);
        Dog &operator=(const Dog &src);
        virtual void    makeSound(void) const;
        virtual ~Dog(void);
};

#endif