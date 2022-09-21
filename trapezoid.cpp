/*
Author: Judy Zhang
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Lab 4 Task F
*/
#include <iostream>
#include "shapes.h"

int trapezoid(int width, int height){
    std::cout << "Task F. Upside-down trapezoid\n" << std::endl;
    
    std::cout << "Input width: " << width << "\nInput height: " << height << "\n" << std::endl;

    if (width - height <= 5){
        std::cout << "Impossible shape!" << std::endl;
    } 
    else{

        std::cout << "Shape:" << std::endl;

        int stars = width;
        int spaces = 0;

        for (int row = 0; row < height; row++){
            for (int i = 0; i < spaces; i++){
                        std::cout << " ";
                    }
            for (int col = 0; col < stars; col++){
                std::cout << "*";
            }
            stars -= 2;
            spaces += 1;
            std::cout << std::endl;
        }
    }

    std::cout << std::endl;
    return(width,height);
}
