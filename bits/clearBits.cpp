#include <iostream>
#include <cstdint>

// Function to clear a specific bit in the int32_t value
void clearBit(int32_t* value, int32_t bitPosition) {
    // Create a mask with a 0 at the specified bit position and 1s elsewhere
    int32_t mask = ~(1 << bitPosition);
    
    // Apply the mask to clear the bit
    *value &= mask;
}

int main() {
    int32_t number = 0xFF; // 0xFF = 11111111 in binary
    int32_t bitToClear;
    
    std::cout << "Original value: 0x" << std::hex << number << std::endl;
    std::cout << "Enter the bit position to clear (0-31): ";
    std::cin >> std::dec >> bitToClear;
    
    if (bitToClear >= 0 && bitToClear <= 31) {
        clearBit(&number, bitToClear);
        std::cout << "Value after clearing bit " << std::dec << bitToClear << ": 0x" << std::hex << number << std::endl;
    } else {
        std::cout << "Invalid bit position. Must be between 0 and 31." << std::endl;
    }
    
    return 0;
}