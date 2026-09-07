/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 11:31:00 by marvin            #+#    #+#             */
/*   Updated: 2026/09/06 11:31:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>
# include <iostream>

class   Animal
{
    protected:
        std::string _type;
    public:
        Animal(void);
        Animal(const Animal &src);
        Animal  &operator=(const Animal &src);
        std::string getType(void) const;
        virtual void    makeSound(void) const;
        virtual ~Animal(void);
};

#endif