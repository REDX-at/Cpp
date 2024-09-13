/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 15:06:36 by aitaouss          #+#    #+#             */
/*   Updated: 2024/07/26 15:14:43 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        ~Brain();
        Brain(Brain const & src);
        Brain & operator=(Brain const & src);
};
#endif