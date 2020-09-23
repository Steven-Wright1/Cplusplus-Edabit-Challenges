#include <iostream>

// Addition Function
int addition(int a, int b) {
	int c = a + b;
	return(c);
}

int main()
{
    // Test Case 1
    int a = 2, b = 3;
    std::cout << addition(a,b) << '\n';
     // Test Case 2
    a = -3, b= -6;
    std::cout << addition(a,b) << '\n';
     // Test Case 3
    a = 7, b = 3;
    std::cout << addition(a,b) << '\n';

   
    return(0);
}