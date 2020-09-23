#include <iostream>


bool reverse(bool boolean) {
	if(boolean == true) boolean = false; 
	else boolean = true; 
	
	return(boolean); 
	
}

int main() 
{

    bool boolean = true; 
    std::cout << reverse(boolean) << '\n';
    boolean = false; 
    std::cout << reverse(boolean) << '\n';

    return(0); 
}