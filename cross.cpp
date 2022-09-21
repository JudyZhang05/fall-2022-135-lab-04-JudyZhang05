/*
Author: Judy Zhang
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Lab 4 Task C
*/
#include <iostream>
#include "shapes.h"

int cross(int size){
    std::cout << "Task C. Cross\n" << std::endl;

    std::cout << "Input size: " << size << "\n" << std::endl;
    std::cout << "Shape:" << std::endl;

    int loop=1;
    for (int row = 0; row < size; row++){
        for (int col = 0; col < size; col++){
            if (col == row){
                std::cout << "*";
            }
            else if (col == size-loop){
                std::cout << "*";
                loop++;
            }
            else{
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    return(size);
}