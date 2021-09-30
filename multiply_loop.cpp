// Copyright Lily Liu All rights reserved.
//
// Created by: Lily Liu
// Created on: Sept 2021
// This program takes the number you entered
// multiplies all the previous numbers including the number entered

#include <iostream>
#include <string>


int main() {
    // This program takes the number you entered
    // multiplies all the previous numbers including the number entered
    // Variables are set to 1 or else answer will be zero
    int loopCounter = 1;
    int product = 1;
    int userInput;
    std::string userInputString;

    // input
    std::cout << "Please enter a positive interger : ";
    std::cin >> userInputString;

    // process and output
    try {
        userInput = std::stoi(userInputString);
        if (userInput < 0) {
            std::cout << "You did not enter a positive integer" << std::endl;
        } else {
            do {
                product = product * loopCounter;
                loopCounter += 1;
            } while (loopCounter <= userInput);
            std::cout << userInput << " ! "  << " = " << product << std::endl;
            }
    } catch (std::invalid_argument) {
        std::cout << "Invalid input";
    }

    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
