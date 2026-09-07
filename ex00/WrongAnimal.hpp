/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 15:43:30 by abenrach          #+#    #+#             */
/*   Updated: 2026/09/07 15:44:53 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include "Animal.hpp"

class   WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal(void);
        std::string getType(void) const;
        void    makeSound(void) const;
        ~WrongAnimal(void);
};

class   WrongCat : public WrongAnimal
{
    public:
        WrongCat(void);
        void    makeSound(void) const;
        ~WrongCat(void);
};

#endif