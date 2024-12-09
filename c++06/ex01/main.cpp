/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:59:47 by aitaouss          #+#    #+#             */
/*   Updated: 2024/10/04 18:19:22 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

int main()
{
    Data data;

    Data* ptr = &data;

    std::cout << "Original: " << ptr << std::endl;
    uintptr_t raw = Serializer::serialize(ptr);

    std::cout << "Serialized: " << raw << std::endl;
    Data* ptr2 = Serializer::deserialize(raw);
    std::cout << "Deserialized: " << ptr2 << std::endl;
}
