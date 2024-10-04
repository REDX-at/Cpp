/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 16:20:58 by aitaouss          #+#    #+#             */
/*   Updated: 2024/10/04 17:01:50 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

int main()
{
    int n = 59;

    int *b = &n;

    std::cout << "Original: " << b << std::endl;
    uintptr_t raw = reinterpret_cast<uintptr_t>(b);
    std::cout << "Serialized: " << raw << std::endl;
    int *c = reinterpret_cast<int*>(raw);
    std::cout << "Deserialized: " << c << std::endl;
}