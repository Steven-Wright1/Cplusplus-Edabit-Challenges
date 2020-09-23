#include <iostream>
#include <string>

// The function in the question is an int function, therefore would return 1 0 1 to indicate true, false and true respectively. I wanted the function to return a string for a bit of fun though 
// so have changed it slightly. 
std::string lessthan100(int a, int b)
{
    if((a + b) < 100) return(std::string{"true"});
    else return(std::string{"false"});
}

int main()
{
    // Test Case 1
    int a = 5, b = 57;
    std::cout << lessthan100(a,b) << '\n';
    // Test Case 2
    a = 77, b = 30;
    std::cout << lessthan100(a,b) << '\n';
    // Test Case 3
    a = 0, b = 59;
    std::cout << lessthan100(a,b) << '\n';


    return(0);
}