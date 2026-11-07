/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 17:47:13 by abenrach          #+#    #+#             */
/*   Updated: 2026/09/20 21:29:06 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include <iostream>
# include <string>
# include <cstring>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria    *_inv[4];
    public:
        Character(void);
        Character(std::string const name);
        Character(const Character &src);
        Character   &operator=(const Character &src);
        ~Character();
        std::string const &getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif