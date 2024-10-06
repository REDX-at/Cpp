/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 01:14:17 by aitaouss          #+#    #+#             */
/*   Updated: 2024/10/06 19:34:03 by aitaouss         ###   ########.fr       */
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
        unsigned int size;
    public:
        Array() : array(NULL), size(0) {
        }
        Array(unsigned int size) : size(size) {
            if (size > 0) {
                array = new T[size];
                for(unsigned int i = 0; i < size; ++i) {
                    array[i] = T();
                }
            }
            else
                array = NULL;
        }
        unsigned int getsize() {
            return size;
        }
        ~Array() {
            delete[] array;
        }
        Array(const Array &other) : size(other.size){
            if (size > 0) {
                array = new T[size];
                for (unsigned int i = 0; i < size; ++i) {
                    array[i] = other.array[i];
                }
            }
            else {
                array = NULL;
            }
        }
        Array& operator=(const Array& other) {
            if (this == &other)
                return *this;
            delete[] array;
            size = other.size;
            if (size > 0) {
                array = new T[size];
                for (unsigned int i = 0; i < size; ++i) {
                    array[i] = other.array[i];
                }
            }
            else {
                array = NULL;
            }
            return *this;
        }
        T& operator[](unsigned int index) {
            if (index >= size){
                throw std::out_of_range("index out of range");
            }
            return array[index];
        }
        T   sizee(){
            return size;
        }
        void    print_array(T *arr, unsigned int i) {
            for (unsigned int j = 0; j < i; ++j){
                std::cout << arr[j] << std::endl;
            }
        }
        T* getarray() {
            return array;
        }


};