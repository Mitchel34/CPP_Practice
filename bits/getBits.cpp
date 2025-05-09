#include <iostream>
#include <cstdint>

// Function to get the value of a specific bit in the int32_t value
int32_t getBit(int32_t* value, int32_t bitPosition) {
    // Create a mask with a 1 at the specified bit position
    int32_t mask = 1 << bitPosition;
    
    // Check if the bit is set by ANDing with the mask and return 1 or 0
    return (*value & mask) ? 1 : 0;
}

int main() {
    int32_t number;
    int32_t bitPosition;
    
    std::cout << "Enter a hexadecimal value (e.g., 0xFF): 0x";
    std::cin >> std::hex >> number;
    
    std::cout << "Original value: 0x" << std::hex << number << std::endl;
    std::cout << "Enter the bit position to check (0-31): ";
    std::cin >> std::dec >> bitPosition;
    
    if (bitPosition >= 0 && bitPosition <= 31) {
        int32_t bit = getBit(&number, bitPosition);
        std::cout << "Bit " << std::dec << bitPosition << " is: " << bit << std::endl;
    } else {
        std::cout << "Invalid bit position. Must be between 0 and 31." << std::endl;
    }
    
    return 0;
}