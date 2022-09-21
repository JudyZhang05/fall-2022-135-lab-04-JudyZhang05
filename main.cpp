#include <iostream>
// #include "box.cpp"
// #include "checkerboard.cpp"
// #include "cross.cpp"
// #include "lower.cpp"
// #include "upper.cpp"
// #include "trapezoid.cpp"
// #include "checkerboard3x3.cpp"
#include "shapes.h"

int main(){
    std::cout << "\nLab 4. Printing Shapes\n";

    box(7,4);
    
    std::cout << "\n------------------\n";
    
    checkerboard(11,6);

    std::cout << "\n------------------\n";

    cross(8);

    std::cout << "\n------------------\n";

    lower(6);

    std::cout << "\n------------------\n";

    upper(5);

    std::cout << "\n------------------\n\nExample 1:\n";

    trapezoid(12,5);

    std::cout << "\n------------------\n\nExample 2:\n";

    trapezoid(12,7);

    std::cout << "\n------------------\n\nExample 1:\n";

    check(16,11);

    std::cout << "\n------------------\n\nExample 2:\n";

    check(27,27);

    return 0;
}