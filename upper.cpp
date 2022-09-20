/*
Author: Judy Zhang
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Lab 4 Task E
*/
#include <iostream>

int upper(int length){
    int num = 0;
    std::cout << "Input side length: " << length << std::endl;

    std::cout << "Shape: " << std::endl;

    for (int row = 0; row < length; row++){
        for (int i=0; i < num; i++){
                    std::cout << " ";
                }
        for (int col = 0; col < length-num; col++){
            std::cout << "*";
        }
        num++;
        std::cout << std::endl;
    }

    std::cout << std::endl;
    return(length);
}