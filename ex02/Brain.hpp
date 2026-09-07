/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 15:56:58 by abenrach          #+#    #+#             */
/*   Updated: 2026/09/07 17:56:23 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <string>
# include <iostream>

class   Brain
{
    private:
        std::string ideas[100];
    public:
        Brain(void);
        Brain(const Brain &src);
        Brain   &operator=(const Brain &src);
        ~Brain(void);
};

#endif