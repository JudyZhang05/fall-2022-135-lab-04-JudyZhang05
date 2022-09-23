/*
Author: Judy Zhang
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Lab 4 Task C
*/
#include <iostream>
#include "shapes.h"

std::string cross(int size){
    std::string result;
    result += "Task C. Cross\n\n";

    result += "Input size: " + std::to_string(size);
    result += "\n\nShape:\n";

    int loop=1;
    for (int row = 0; row < size; row++){
        for (int col = 0; col < size; col++){
            if (col == row){
                result += "*";
            }
            else if (col == size-loop){
                result += "*";
                loop++;
            }
            else{
                result += " ";
            }
        }
        result += "\n";
    }
    result += "\n";
    return(result);
}