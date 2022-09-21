#include <iostream>
#include "box.cpp"
#include "checkerboard.cpp"
#include "cross.cpp"
#include "lower.cpp"
#include "upper.cpp"
#include "trapezoid.cpp"
#include "checkerboard3x3.cpp"

int main(){

    box(7,4);
    checkerboard(11,6);
    cross(8);
    lower(6);
    upper(5);
    trapezoid(12,5);
    check(16,11);

    return 0;
}