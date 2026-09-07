/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 16:24:19 by abenrach          #+#    #+#             */
/*   Updated: 2026/09/07 16:28:01 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Dog.hpp"

class   Cat : public Animal
{
    public:
        Cat(void);
        Cat(const Cat &src);
        Cat &operator=(const Cat &src);
        virtual void    makeSound(void) const;
        virtual ~Cat(void);
};

#endif