/*
Author: Judy Zhang
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Lab 4 Task G
*/
#include <iostream>
#include "shapes.h"

std::string check(int width, int height){
    std::string result;

    result += "Task G. Checkerboard (3x3)\n\n";
    int outliar = 3;
    int num;
    if (width % 2 == 0){
        num = 1;
    }
    else{
        num = 2;
    }
    
    result += "Input width: " + std::to_string(width);
    result += "\nInput height: " + std::to_string(height);

    result += "\n\nShape:\n";
    
    for (int board=0; board < height; board+=3){
        if (board % 2 == 0){
            for (int groups = 0; groups < 1; groups++){
                if (width % 3 != 0){
                    for (int row = 0; row < 3; row++){
                        for (int col = 0; col < (width - 1)/3; col++){
                            if (col % 2 == 0){
                                for (int star = 0; star < 3; star++){
                                    result += "*";
                                }
                            }
                            else{
                                for (int space = 0; space < 3; space++){
                                    result += " ";
                                }
                            }
                        }
                        result += "\n";
                    }
                }
                else{
                    for (int row = 0; row < 3; row++){
                        for (int col = 0; col < (width)/3; col++){
                            if (col % 2 == 0){
                                for (int star = 0; star < 3; star++){
                                    result += "*";
                                }
                            }
                            else{
                                for (int space = 0; space < 3; space++){
                                    result += " ";
                                }
                            }
                        }
                        result += "\n";
                    }
                }
                result += "\n";
            }
        }
        else{
            for (int groups = 0; groups < 1; groups++){
                if (width % 3 != 0){
                    for (int row = 0; row < 3; row++){
                        for (int col = 0; col < (width/3)+1 ; col++){
                            if (col % 2 == 0){
                                for (int space = 0; space < 3; space++){
                                    result += " ";
                                }
                            }
                            else{
                                if (col == (width/3)){
                                    for (int star = 0; star < num; star++){
                                        result += "*";
                                    }
                                }
                                else{
                                    for (int star = 0; star < outliar ; star++){
                                        result += "*";
                                    }
                                }
                            }
                        }
                        result += "\n";
                    }
                }
                else{
                    for (int row = 0; row < 3; row++){
                        for (int col = 0; col < (width)/3; col++){
                            if (col % 2 == 0){
                                for (int space = 0; space < 3; space++){
                                    result += " ";
                                }
                            }
                            else{
                                for (int star = 0; star < 3; star++){
                                    result += "*";
                                }
                            }
                        }
                        result += "\n";
                    }
                }
                result += "\n";
            }
        }
    }
    
    
    result += "\n";
    return(result);
}