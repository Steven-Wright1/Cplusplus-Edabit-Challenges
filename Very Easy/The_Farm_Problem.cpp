#include <iostream>

int animals(int chickens, int cows, int pigs) {
	
	int nlegs = 2*  chickens + 4 * cows + 4 * pigs;
	return(nlegs);
}


int main()
{

    // Test Case 1
    int chickens = 5, cows = 2, pigs = 8;
    std::cout << animals(chickens, cows, pigs) << '\n';

    // Test Case 2
    chickens = 3, cows = 4, pigs = 7;
    std::cout << animals(chickens, cows, pigs) << '\n';

    // Test Case 2
    chickens = 1, cows = 2, pigs = 3;
    std::cout << animals(chickens, cows, pigs) << '\n';

    // Test Case 2
    chickens = 3, cows = 5, pigs = 2;
    std::cout << animals(chickens, cows, pigs) << '\n';

    return(0);
}