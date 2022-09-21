/*
Author: Judy Zhang
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Lab 4 Task B
*/
#include <iostream>
#include "shapes.h"

int checkerboard(int width, int height){
    std::cout << "Task B. Checkerboard\n" << std::endl;

    std::cout << "Input width: " << width << "\nInput height: " << height << "\n" << std::endl;
    
    std::cout << "Shape:" << std::endl;

    for (int row = 0; row < height; row++) {
        if (row % 2 == 0){
            for (int col = 0; col < width; col++) {
                if (col % 2 == 0){
                    std::cout << "*";
                }
                else{
                    std::cout << " ";
                }
            }
            std::cout << std::endl;
        }
        
        else{
        
            for (int col = 0; col < width; col++) {
                if (col % 2 == 0){
                    std::cout << " ";
                }
                else{
                    std::cout << "*";
                }
            }
            std::cout << std::endl;
        }
    }

    std::cout << std::endl;
    return(width,height);
}