/*
Author: Judy Zhang
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Lab 4 Task D
*/
#include <iostream>
#include "shapes.h"

std::string lower(int length){
    std::string result;
    result +=  "Task D. Lower triangle\n\n";

    int num = length-1;
    result +=  "Input side length: " + std::to_string(length);   

    result +=  "\n\nShape:\n";
    for (int row = 0; row < length; row++){
        for (int col = 0; col < length-num; col++){
            result +=  "*";
        }
        num--;
        result +=  "\n";
    }

    result +=  "\n";
    return(result);
}