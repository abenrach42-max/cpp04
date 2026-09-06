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
        std::string getType(void) const;
        virtual void    makeSound(void) const;
        virtual ~Animal(void);
};

class   Dog : public Animal
{
    public:
        Dog(void);
        virtual void    makeSound(void) const;
        virtual ~Dog(void);
};

class   Cat : public Animal
{
    public:
        Cat(void);
        virtual void    makeSound(void) const;
        virtual ~Cat(void);
};

#endif