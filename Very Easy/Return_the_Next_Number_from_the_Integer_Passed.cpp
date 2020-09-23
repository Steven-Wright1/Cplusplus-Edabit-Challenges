#include <iostream>

int addition(int a) {

return(a + 1);
}

int main()
{
    int a = 2;
    std::cout << addition(a) << '\n';
    a = -9; 
    std::cout << addition(a) << '\n';
    a = 0; 
    std::cout << addition(a) << '\n';
    a = 999; 
    std::cout << addition(a) << '\n';
    a = 73;
    std::cout << addition(a) << '\n';

    return(0);

}