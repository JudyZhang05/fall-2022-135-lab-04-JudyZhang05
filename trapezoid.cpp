/*
Author: Judy Zhang
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Lab 4 Task F
*/
#include <iostream>
#include "shapes.h"

std::string trapezoid(int width, int height){
    std::string result;
    result +=  "Task F. Upside-down trapezoid\n\n";
    
    result +=  "Input width: " + std::to_string(width);
    result += "\nInput height: " + std::to_string(height);
    result += "\n\n";

    if (width - height <= 5){
        result +=  "Impossible shape!\n";
    } 
    else{

        result +=  "\n\nShape:\n";

        int stars = width;
        int spaces = 0;

        for (int row = 0; row < height; row++){
            for (int i = 0; i < spaces; i++){
                        result +=  " ";
                    }
            for (int col = 0; col < stars; col++){
                result +=  "*";
            }
            stars -= 2;
            spaces += 1;
            result +=  "\n";
        }
    }

    result +=  "\n";
    return(result);
}
