#include <iostream>

int findPerimeter (int length, int width)
{
   int Perimeter = 2 * (length + width); 

    return(Perimeter);
}

int main()
{

    // Test Case 1
    int length = 6, width = 7;
    std::cout << findPerimeter(length,width) << '\n';

    // Test Case 2
    length = 20, width = 10;
    std::cout << findPerimeter(length,width) << '\n';

    // Test Case 3
    length = 2, width = 9;
    std::cout << findPerimeter(length,width) << '\n';






    return(0);
}