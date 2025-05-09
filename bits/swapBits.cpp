#include <iostream>
#include <cstdint>

// Function to get the value of a specific bit in the int32_t value
int32_t getBit(int32_t* value, int32_t bitPosition) {
    // Create a mask with a 1 at the specified bit position
    int32_t mask = 1 << bitPosition;
    
    // Check if the bit is set by ANDing with the mask and return 1 or 0
    return (*value & mask) ? 1 : 0;
}

// Function to clear a specific bit in the int32_t value
void clearBit(int32_t* value, int32_t bitPosition) {
    // Create a mask with a 0 at the specified bit position and 1s elsewhere
    int32_t mask = ~(1 << bitPosition);
    
    // Apply the mask to clear the bit
    *value &= mask;
}

// Function to set a specific bit in the int32_t value
void setBit(int32_t* value, int32_t bitPosition) {
    // Create a mask with a 1 at the specified bit position
    int32_t mask = 1 << bitPosition;
    
    // Apply the mask to set the bit
    *value |= mask;
}

// Function to swap two bits in the int32_t value using getBit, setBit, and clearBit
void swapBits(int32_t* value, int32_t firstBitPosition, int32_t secondBitPosition) {
    // Get the values of the bits at the specified positions
    int32_t firstBit = getBit(value, firstBitPosition);
    int32_t secondBit = getBit(value, secondBitPosition);
    
    // If the bits are different, swap them
    if (firstBit != secondBit) {
        if (firstBit == 1) {
            // First bit is 1, second bit is 0
            clearBit(value, firstBitPosition);  // Clear the first bit
            setBit(value, secondBitPosition);   // Set the second bit
        } else {
            // First bit is 0, second bit is 1
            setBit(value, firstBitPosition);    // Set the first bit
            clearBit(value, secondBitPosition); // Clear the second bit
        }
    }
    // If bits are the same, no swap is needed
}

int main() {
    int32_t number;
    int32_t firstBit, secondBit;
    
    std::cout << "Enter a hexadecimal value (e.g., 0xFF): 0x";
    std::cin >> std::hex >> number;
    
    std::cout << "Original value: 0x" << std::hex << number << std::endl;
    
    std::cout << "Enter the first bit position to swap (0-31): ";
    std::cin >> std::dec >> firstBit;
    
    std::cout << "Enter the second bit position to swap (0-31): ";
    std::cin >> std::dec >> secondBit;
    
    if (firstBit >= 0 && firstBit <= 31 && secondBit >= 0 && secondBit <= 31) {
        swapBits(&number, firstBit, secondBit);
        std::cout << "Value after swapping bits " << std::dec << firstBit 
                  << " and " << secondBit << ": 0x" << std::hex << number << std::endl;
    } else {
        std::cout << "Invalid bit positions. Must be between 0 and 31." << std::endl;
    }
    
    return 0;
}