/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:14:10 by kthierry          #+#    #+#             */
/*   Updated: 2023/01/19 15:35:34 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void toUpper(char *str){
    
    int i;
    
    i = 0;
    while(str[i]){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
        }
        i++;
    }
    
}

int main(int argc, char **argv)
{
    int i;
    if(argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    else{
        i = 1;
        while(argv[i]){
            toUpper(argv[i]);
            std::cout << argv[i];
            i++;
        }
        std::cout << "\n";
    }     
}