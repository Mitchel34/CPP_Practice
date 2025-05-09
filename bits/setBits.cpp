// Method that takes a int_32t * and an int_32t as an argument
#include <iostream>
#include <cstdint>

// Function to set a specific bit in the int32_t value
void setBit(int32_t* value, int32_t bitPosition) {
    // Create a mask with a 1 at the specified bit position
    int32_t mask = 1 << bitPosition;
    
    // Apply the mask to set the bit
    *value |= mask;
}

int main() {
    int32_t number = 0x0; // 0x0 = 00000000 in binary
    int32_t bitToSet;
    
    std::cout << "Original value: 0x" << std::hex << number << std::endl;
    std::cout << "Enter the bit position to set (0-31): ";
    std::cin >> std::dec >> bitToSet;
    
    if (bitToSet >= 0 && bitToSet <= 31) {
        setBit(&number, bitToSet);
        std::cout << "Value after setting bit " << std::dec << bitToSet << ": 0x" << std::hex << number << std::endl;
    } else {
        std::cout << "Invalid bit position. Must be between 0 and 31." << std::endl;
    }
    
    return 0;
}