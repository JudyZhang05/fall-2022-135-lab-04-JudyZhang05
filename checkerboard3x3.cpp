/*
Author: Judy Zhang
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Lab 4 Task G
*/
#include <iostream>
#include "shapes.h"

int check(int width, int height){
    std::cout << "Task G. Checkerboard (3x3)\n" << std::endl;
    int outliar = 3;
    int num;
    if (width % 2 == 0){
        num = 1;
    }
    else{
        num = 2;
    }
    
    std::cout << "Input width: " << width << "\nInput height: " << height << "\n" << std::endl;

    std::cout << "Shape:" << std::endl;
    
    for (int board=0; board < height; board+=3){
        if (board % 2 == 0){
            for (int groups = 0; groups < 1; groups++){
                if (width % 3 != 0){
                    for (int row = 0; row < 3; row++){
                        for (int col = 0; col < (width - 1)/3; col++){
                            if (col % 2 == 0){
                                for (int star = 0; star < 3; star++){
                                    std::cout << "*";
                                }
                            }
                            else{
                                for (int space = 0; space < 3; space++){
                                    std::cout << " ";
                                }
                            }
                        }
                        std::cout << std::endl;
                    }
                }
                else{
                    for (int row = 0; row < 3; row++){
                        for (int col = 0; col < (width)/3; col++){
                            if (col % 2 == 0){
                                for (int star = 0; star < 3; star++){
                                    std::cout << "*";
                                }
                            }
                            else{
                                for (int space = 0; space < 3; space++){
                                    std::cout << " ";
                                }
                            }
                        }
                        std::cout << std::endl;
                    }
                }
                std::cout << std::endl;
            }
        }
        else{
            for (int groups = 0; groups < 1; groups++){
                if (width % 3 != 0){
                    for (int row = 0; row < 3; row++){
                        for (int col = 0; col < (width/3)+1 ; col++){
                            if (col % 2 == 0){
                                for (int space = 0; space < 3; space++){
                                    std::cout << " ";
                                }
                            }
                            else{
                                if (col == (width/3)){
                                    for (int star = 0; star < num; star++){
                                        std::cout << "*";
                                    }
                                }
                                else{
                                    for (int star = 0; star < outliar ; star++){
                                        std::cout << "*";
                                    }
                                }
                            }
                        }
                        std::cout << std::endl;
                    }
                }
                else{
                    for (int row = 0; row < 3; row++){
                        for (int col = 0; col < (width)/3; col++){
                            if (col % 2 == 0){
                                for (int space = 0; space < 3; space++){
                                    std::cout << " ";
                                }
                            }
                            else{
                                for (int star = 0; star < 3; star++){
                                    std::cout << "*";
                                }
                            }
                        }
                        std::cout << std::endl;
                    }
                }
                std::cout << std::endl;
            }
        }
    }
    
    
    std::cout << std::endl;
    return(width,height);
}