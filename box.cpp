/*
Author: Judy Zhang
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Lab 4 Task A
*/
#include <iostream>
#include "shapes.h"

int box(int width, int height){
    std::cout << "Task A. Box\n" << std::endl;

    std::cout << "Input width: " << width << "\nInput height: " << height << "\n" << std::endl;
    
    std::cout << "Shape:" << std::endl;

    for(int i=0; i<=height; i++){
        for(int n=0; n<width; n++){
            std::cout << "*";
        }
        std::cout << "\n";
    }
    
    std::cout << std::endl;
    return (width,height);
}