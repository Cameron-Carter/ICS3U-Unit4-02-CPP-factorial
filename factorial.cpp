// Copyright (c) Cameron Carter All rights reserved
//
// Created by: Cameron Carter
// Created on: May 2021
// This program loops to find factorial of a number

#include <iostream>
#include <string>

int main() {
    // This program loops to get the factorial of a number
    std::string inputAsString;
    int inputAsInteger;
    int total = 1;
    int loopCounter = 0;

    // Input
    std::cout << "Enter a positive integer: ";
    std::cin >> inputAsString;

    // Process and Output
    try {
        inputAsInteger = std::stoi(inputAsString);
        if (inputAsInteger >= 0) {
            do {
                loopCounter = loopCounter + 1;
                total = total * loopCounter;
            } while (loopCounter < inputAsInteger);

            std::cout << "\n" << inputAsString << "! = " << total << std::endl;
        } else {
            std::cout << "\n" << inputAsString << " is not a positive integer";
        }
    } catch (std::invalid_argument) {
        std::cout << "\n" << inputAsString
        << " is not a positive integer" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
