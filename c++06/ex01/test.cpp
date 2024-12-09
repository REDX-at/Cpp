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
    // int n = 59;

    // int *b = &n;

    // std::cout << "Original: " << b << std::endl;
    // uintptr_t raw = reinterpret_cast<uintptr_t>(b);
    // std::cout << "Serialized: " << raw << std::endl;
    // int *c = reinterpret_cast<int*>(raw);
    // std::cout << "Deserialized: " << c << std::endl;
    // float i = 10.0f;

    // float *p = &i;
    // int* f = reinterpret_cast<int*>(p);
    // std::cout << f << std::endl;
    // float* g = reinterpret_cast<float*>(f);
    // std::cout << g << std::endl;
    // return 0;
struct Packet {
    char header[4];
    int payload;
};

char buffer[sizeof(Packet)] = {0};
Packet* p = reinterpret_cast<Packet*>(buffer);

std::cout << "Size of Packet: " << sizeof(Packet) << std::endl;

}