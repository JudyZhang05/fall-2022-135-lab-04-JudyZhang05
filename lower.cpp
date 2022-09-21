/*
Author: Judy Zhang
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Lab 4 Task D
*/
#include <iostream>
#include "shapes.h"

int lower(int length){
    std::cout << "Task D. Lower triangle\n" << std::endl;

    int num = length-1;
    std::cout << "Input side length: " << length << "\n" << std::endl;   

    std::cout << "Shape: " << std::endl;
    for (int row = 0; row < length; row++){
        for (int col = 0; col < length-num; col++){
            std::cout << "*";
        }
        num--;
        std::cout << std::endl;
    }

    std::cout << std::endl;
    return(length);
}