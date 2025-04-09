// Copyright 2025 Mikhail Ibrahim
// Date: April 9, 2025
// Description: A C++ program that determines if a user is tall enough
// to ride a roller coaster. The minimum height requirement is 137 cm.

#include <iostream>

int main() {
    // Display welcome message
    std::cout << "🎢 Welcome to the Roller Coaster Height Checker!"
              << std::endl;

    // Declare variable for height
    int height;

    // Prompt user for input
    std::cout << "Please enter your height in cm: ";
    std::cin >> height;

    // Validate input
    if (std::cin.fail()) {
        std::cout << "⚠️ Invalid input. Please enter a whole number in cm."
                  << std::endl;
    } else {
        // Decision-making structure
        if (height >= 137) {
            std::cout << "✅ You can go on the roller coaster!" << std::endl;
        } else {
            std::cout << "❌ Sorry, you are not tall enough to go on the ride."
                      << std::endl;
        }
    }

    return 0;
}
