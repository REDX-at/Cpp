/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 01:14:17 by aitaouss          #+#    #+#             */
/*   Updated: 2024/10/07 11:01:21 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <exception>

template <typename T>
class Array
{
    private:
        T* array;
        unsigned int size_e;
    public:
        Array() : array(NULL), size_e(0) {
        }

        Array(unsigned int n) : size_e(n) 
        {
            if (n > 0) 
            {
                array = new T[n];
                for(unsigned int i = 0; i < n; ++i) 
                {
                    array[i] = T();
                }
            }
            else
                array = NULL;
        }

        ~Array()
        {
            delete[] array;
        }
        
        Array(const Array &other) : size_e(other.size_e)
        {
            if (size_e > 0) 
            {
                array = new T[size_e];
                for (unsigned int i = 0; i < size_e; ++i) 
                {
                    array[i] = other.array[i];
                }
            }
            else 
            {
                array = NULL;
            }
        }

        Array& operator=(const Array& other) 
        {
            if (this == &other)
                return *this;
            delete[] array;
            size_e = other.size_e;
            if (size_e > 0) 
            {
                array = new T[size_e];
                for (unsigned int i = 0; i < size_e; ++i) 
                {
                    array[i] = other.array[i];
                }
            }
            else 
            {
                array = NULL;
            }
            return *this;
        }

        T& operator[](unsigned int index) 
        {
            if (index >= size_e)
            {
                throw std::out_of_range("index out of range");
            }
            return array[index];
        }

        unsigned int    size()
        {
            return size_e;
        }

        void    print_array(T *arr, unsigned int i) 
        {
            for (unsigned int j = 0; j < i; ++j)
            {
                std::cout << arr[j] << std::endl;
            }
        }

};