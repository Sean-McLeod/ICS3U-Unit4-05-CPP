// Copyright (c) 2020 Sean McLeod All rights reserved

// Created by Sean McLeod
// Created on December 2020
// This program is the number adding program

#include <iostream>
#include <string>

int main()  {
    // this function tells the user what the total added number is

    std::string stringAdd;
    std::string positiveString;
    int numberAdd;
    int positiveNumber;
    int total = 0;
    int loopCounter = 0;

    // input
    std::cout << "How many numbers are you going to add: " << std::endl;
    std::cin >> stringAdd;

    // process and output
    try {
        numberAdd = std::stoi(stringAdd.c_str());

        if (numberAdd >= 0) {
            for (loopCounter = 0; loopCounter < numberAdd; loopCounter++) {
                // input
                std::cout << "Enter a number to add: " << std::endl;
                std::cin >> positiveString;

                try {
                    positiveNumber = std::stoi(positiveString.c_str());

                    if (positiveNumber > 0) {
                        total = total + positiveNumber;
                    } else {
                        std::cout << "Please enter a positive integer. "
                                  << "This won't be added" <<std::endl;
                        continue;
                    }
                } catch (std::invalid_argument) {
                    std::cout << "This is not a number" << std::endl;
                }
            }

            std::cout << "\n" << "Sum of the numbers above is " << total
                      << std::endl;
        } else {
            std::cout << "This is a negative number" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "This is not a number" << std::endl;
    }
}
