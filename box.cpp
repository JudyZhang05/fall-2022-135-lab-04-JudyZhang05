/*
Author: Judy Zhang
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Lab 4 Task A
*/
#include <iostream>
#include "shapes.h"

std::string box(int width, int height){
    std::string result;
    result += "Task A. Box\n";

    result += "Input width: " + std::to_string(width);
    result += "\nInput height: " + std::to_string(height);
    
    result += "\n\nShape:\n";

    for(int i=0; i<=height; i++){
        for(int n=0; n<width; n++){
            result += "*";
        }
        result += "\n";
    }
    
    result += "\n";
    return (result);
}