/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:12:33 by aitaouss          #+#    #+#             */
/*   Updated: 2024/12/12 17:49:08 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <array>
#include <algorithm>
#include <vector>
#include <climits>
#include <stack>


// template<typename T>
// class MutantStack {
//     private:
//         std::stack<T> s;
//     public :
//         void    pop(){
//             s.pop();
//         }
//         void    push(int n){
//             s.push(n);
//         }
//         int    size(){
//             return s.size();
//         }
// };

int main() {    
    std::deque<int> d;

    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    // d.push_front(4);

    std::cout << d[1] << std::endl;
}