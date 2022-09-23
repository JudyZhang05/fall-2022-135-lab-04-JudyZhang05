/*
Author: Judy Zhang
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Lab 4 Task B
*/
#include <iostream>
#include "shapes.h"

std::string checkerboard(int width, int height){
    std::string result;
    result += "Task B. Checkerboard\n\n";

    result += "Input width: " + std::to_string(width);
    result += "\nInput height: " + std::to_string(height);
    
    result += "\n\nShape:\n";

    for (int row = 0; row < height; row++) {
        if (row % 2 == 0){
            for (int col = 0; col < width; col++) {
                if (col % 2 == 0){
                    result += "*";
                }
                else{
                    result += " ";
                }
            }
            result += "\n";
        }
        
        else{
        
            for (int col = 0; col < width; col++) {
                if (col % 2 == 0){
                    result += " ";
                }
                else{
                    result += "*";
                }
            }
            result += "\n";
        }
    }

    result += "\n";
    return(result);
}