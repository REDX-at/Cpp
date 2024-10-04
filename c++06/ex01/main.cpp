/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:59:47 by aitaouss          #+#    #+#             */
/*   Updated: 2024/10/04 16:00:16 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

int main()
{
    Data data;

    Data* ptr = &data;

    uintptr_t raw = Serializer::serialize(ptr);
    std::cout << "Serialized: " << raw << std::endl;
}