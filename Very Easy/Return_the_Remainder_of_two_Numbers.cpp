#include <iostream>

int remainder(int x, int y)
{

    return(x % y); 

}

int main() 
{

    // Test Case 1
    int x = 7, y = 2 ;
    std::cout << remainder(x,y) << '\n';

    // Test Case 2
    x = 3, y = 4;
    std::cout << remainder(x,y) << '\n';
 
    // Test Case 3
    x =- 9, y = -45;
    std::cout << remainder(x,y) << '\n';

    // Test Case 4
    x = 5, y = 5;
    std::cout << remainder(x,y) << '\n';



    return (0);
}