/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 22:01:28 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/20 22:26:56 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
    Form a;

    std::cout << a.getName() << std::endl;
    std::cout << a.getGradeToExecute() << std::endl;
    std::cout << a.getGradeToSign() << std::endl;
}