/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:38:44 by aitaouss          #+#    #+#             */
/*   Updated: 2024/07/08 10:29:07 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {

    private:
        std::string _name;
    public:
        Zombie(std::string name);
        Zombie();
        ~Zombie();
        void announce();
        void setName(std::string name);
};

Zombie *newZombie(std::string name);
void    randomChump(std::string name);

#endif