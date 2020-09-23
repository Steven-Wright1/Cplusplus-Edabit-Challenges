#include <iostream>

bool andAnd(bool a, bool b)
{

	if(a&&b == true) return(true);
	else return(false);
	
}

int main()
{
    // Test Case 1
    bool a = true, b = true; 
    std::cout << andAnd(a, b) << '\n';

    // Test Case 2
    a = true, b = false; 
    std::cout << andAnd(a, b) << '\n';

    // Test Case 3
    a = false, b = true; 
    std::cout << andAnd(a, b) << '\n';

    // Test Case 4
    a = false, b = false; 
    std::cout << andAnd(a, b) << '\n';


    return(0);
}