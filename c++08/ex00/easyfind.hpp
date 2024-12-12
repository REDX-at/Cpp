/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 22:15:52 by aitaouss          #+#    #+#             */
/*   Updated: 2024/12/12 12:33:48 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include <string>
#include <array>
#include <algorithm>
#include <vector>

class NotFoundExec : public std::exception {
    public: 
        const char* what() const throw() {
            return "No Occurence Found";
        }
};

template<typename T>
typename T::iterator    easyfind(T data, int occ){
    typename T::iterator it = std::find(data.begin(), data.end(), occ);

    if (it == data.end()) {
        throw NotFoundExec();
    }
    else {
        std::cout << "Occurence Find" << std::endl;
        return it;
    }
}