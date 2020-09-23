#include <iostream>

int convert(int minutes) {

    int seconds = minutes * 60; 
    return(seconds);
}

int main()
{

    int minutes = 6;
    std::cout << convert(minutes) << '\n';
    minutes = 4;
    std::cout << convert(minutes) << '\n';
    minutes = 8;
    std::cout << convert(minutes) << '\n';
    minutes = 60;
    std::cout << convert(minutes) << '\n';

    return(0); 

}