#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *arrPtr = arr;
    for (int i = 0; i < 5; i++) {
        std::cout << "Value at address of arrPtr: " << *arrPtr << std::endl;
        arrPtr++;
    }
    return 0;
}