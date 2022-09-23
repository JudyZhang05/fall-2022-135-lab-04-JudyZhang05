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
    std::cout << "\nLab 4. Printing Shapes\n\nExample 1:\n";

    std::cout << box(7,4);
    
    std::cout << "\n------------------\n\nExample 2:\n";
    
    std::cout << box(4,7);
    
    std::cout << "\n------------------\n\nExample 1:\n";
    
    std::cout << checkerboard(11,6);
        
    std::cout << "\n------------------\n\nExample 2:\n";
    
    std::cout << checkerboard(6,11);

    std::cout << "\n------------------\n\nExample 1:\n";

    std::cout << cross(8);
        
    std::cout << "\n------------------\n\nExample 2:\n";

    std::cout << cross(6);

    std::cout << "\n------------------\n\nExample 1:\n";

    std::cout << lower(6);
        
    std::cout << "\n------------------\n\nExample 2:\n";

    std::cout << lower(5);

    std::cout << "\n------------------\n\nExample 1:\n";

    std::cout << upper(5);

    std::cout << "\n------------------\n\nExample 2:\n";

    std::cout << upper(7);

    std::cout << "\n------------------\n\nExample 1:\n";

    std::cout << trapezoid(12,5);

    std::cout << "\n------------------\n\nExample 2:\n";

    std::cout << trapezoid(12,7);

    std::cout << "\n------------------\n\nExample 1:\n";

    std::cout << check(16,11);

    std::cout << "\n------------------\n\nExample 2:\n";

    std::cout << check(27,27);

    return 0;
}