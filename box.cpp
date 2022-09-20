/*
Author: Judy Zhang
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Lab 4 Task A
*/
#include <iostream>

int box(int width, int height){

    std::cout << "Input width: " << width << std::endl;
    std::cout << "Input height: " << height << std::endl;
    std::cout << "Shape:" << std::endl;

    for(int i=0; i<=height; i++){
        for(int n=0; n<width; n++){
            std::cout << "*";
        }
        std::cout << "\n";
    }


    return (width,height);
}