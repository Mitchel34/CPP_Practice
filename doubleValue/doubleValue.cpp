#include <iostream>

void doubleValue(int* ptr) {
    *ptr *= 2;
}

int main() {

    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    int* ptr = &num;

    doubleValue(ptr);
    std::cout << "The number doubled is: " << *ptr <<std::endl;

    return 0;
}