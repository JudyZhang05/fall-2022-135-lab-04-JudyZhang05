/*
Author: Judy Zhang
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Lab 4 Task E
*/
#include <iostream>
#include "shapes.h"

std::string upper(int length){
    std::string result;
    result += "Task E. Upper triangle\n\n";
    int num = 0;
    result += "Input side length: " + std::to_string(length);

    result += "\n\nShape:\n";

    for (int row = 0; row < length; row++){
        for (int i=0; i < num; i++){
                    result += " ";
                }
        for (int col = 0; col < length-num; col++){
            result += "*";
        }
        num++;
        result += "\n";
    }

    result += "\n";
    return(result);
}