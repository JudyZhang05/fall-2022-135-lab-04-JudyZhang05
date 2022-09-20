/*
Author: Judy Zhang
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Lab 4 Task B
*/
#include <iostream>

int checkerboard(int width, int height){
    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            if (row % 2 == 0){
                std::cout << "* ";
            }
            else{
                std::cout << " *";
            }
        }
        std::cout << std::endl;
    }
    return(width,height);
}

int main(){
    checkerboard(11,6);
}