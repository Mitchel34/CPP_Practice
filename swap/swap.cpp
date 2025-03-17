#include <iostream>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {    
    int x = 1, y = 2;
    swap(&x, &y);
    std::cout << "x: " << x << ", y: " << y << std::endl;
    
    std::cout << "Swap again: " << std::endl;
    swap(&x, &y);
    std::cout << "x: " << x << ", y: " << y << std::endl;
    
    return 0;
}