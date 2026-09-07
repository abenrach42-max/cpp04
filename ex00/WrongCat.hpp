/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 16:42:51 by abenrach          #+#    #+#             */
/*   Updated: 2026/09/07 16:44:33 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.hpp"

class   WrongCat : public WrongAnimal
{
    public:
        WrongCat(void);
        WrongCat(const WrongCat &src);
        WrongCat &operator=(const WrongCat &src);
        void    makeSound(void) const;
        ~WrongCat(void);
};

#endif