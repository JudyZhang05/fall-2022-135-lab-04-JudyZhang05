/*
Author: Judy Zhang
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Lab 4 Task G
*/
#include <iostream>

int check(int width, int height){
    
    std::cout << "Input width: " << width << "\nInput height: " << height << std::endl;

    std::cout << "Shape:" << std::endl;
    
    for (int row = 0; row < 3; row++){
        for (int board = 0; board < width; board++){
            for (int col = 0; col < 3; col++){
                std::cout << "*";
                
            }
            for (int i = 0; i < 3; i++){
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;
    return(width,height);
}
int main(){
    check(16,11);
}