#include <iostream>

void swap(int * n, int * m);
int main(){
    int first = 0, second = 7;
    swap(&first, &second);
    std::cout << "first: " << first << ", second: " << second << std::endl;
    std::cout << "Swap again: " << std::endl;
    swap(&first, &second);
    std::cout << "first: " << first << ", second: " << second << std::endl;
}

void swap(int * n, int * m){
    int temp = *n;
    *n = *m;
    *m = temp;
}
// The code above defines a function `swap` that takes two integer pointers as arguments and swaps the values they point to.