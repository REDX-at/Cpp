/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 01:14:17 by aitaouss          #+#    #+#             */
/*   Updated: 2024/10/06 17:09:52 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template <typename T>
class Array
{
    private:
        T* array;
        unsigned int n;
    public:
        Array() : array(NULL), n(0){
        }
        Array(unsigned int n) : n(n){
            if (n > 0){
                array = new T[n];
                for(unsigned int i = 0; i < n; ++i){
                    array[i] = T();
                }
            }
            else
                array = NULL;
        }
        unsigned int getn(){
            return n;
        }
        ~Array(){
            delete[] array;
        }
        Array(const Array &other) : n(other.n){
            if (n > 0){
                array = new T[n];
                for (unsigned int i = 0; i < n; ++i){
                    array[i] = other.array[i];
                }
            }
            else {
                array = NULL;
            }
        }
        void    print_array(T *arr, unsigned int i){
            for (unsigned int j = 0; j < i; ++j){
                std::cout << arr[i] << std::endl;
            }
        }
        T* getarray(){
            return array;
        }
};