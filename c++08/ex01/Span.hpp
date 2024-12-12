/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:48:09 by aitaouss          #+#    #+#             */
/*   Updated: 2024/12/12 12:51:44 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Span {
    private: 
        unsigned int _n;
    public: 
        Span();
        ~Span();
        Span(const Span & other);
        Span & operator=(const Span & other);
        Span(unsigned int n);
}