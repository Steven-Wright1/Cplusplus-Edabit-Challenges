#include <iostream>


int nextEdge(int side1, int side2) {
	
	int side3_max = side1 + side2 - 1;

	return(side3_max);
}

int main() 
{
    // Test Case 1
    int side1 = 8, side2 = 10; 
    std::cout << nextEdge(side1, side2) << '\n';

    // Test Case 2
    side1 = 5, side2 = 7; 
    std::cout << nextEdge(side1, side2) << '\n';

    // Test Case 3
    side1 = 9, side2 = 2; 
    std::cout << nextEdge(side1, side2) << '\n';

    return(0);
}