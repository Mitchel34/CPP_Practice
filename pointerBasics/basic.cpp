#include <iostream>

int main()
{
    //Baic pointer declaration
    int num = 10;
    int *numPtr = &num;
    std::cout << "Value of num: " << num << std::endl;
    std::cout << "Address of num: " << &num << std::endl;
    std::cout << "Value of numPtr: " << numPtr << std::endl;
    std::cout << "Value at address of numPtr: " << *numPtr << std::endl;

    *numPtr = 20;
    std::cout << "New Value of num: " << num << std::endl;
    std::cout << "New Value at address of numPtr: " << *numPtr << std::endl;

    return 0;
}