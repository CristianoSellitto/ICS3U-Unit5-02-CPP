// Copyright Cristiano 2022
//
// Created by Cristiano Sellitto
// Created in November 2022
// A program that calculates the area of a triangle

#include <iostream>

int baseInteger;
int heightInteger;

void AreaOfATriangle(int base, int height) {
    // Calculates the area of a triangle

    float area;

    area = (base * height) / 2.0;
    std::cout << "The area of this triangle is " << area << " cm²";
    std::cout << std::endl;
}

int main() {
    // Gets input from the user

    std::string baseText;
    std::string heightText;
    try {
        std::cout << "A = (b × h) ÷ 2";
        std::cout << std::endl << std::endl;
        std::cout << "Enter a base integer: ";
        std::cin >> baseText;
        baseInteger = std::stoi(baseText);
        std::cout << "Enter a height integer: ";
        std::cin >> heightText;
        std::cout << std::endl;
        heightInteger = std::stoi(heightText);
        AreaOfATriangle(baseInteger, heightInteger);
    } catch (std::invalid_argument) {
        std::cout << std::endl;
        std::cout << "Error: This isn't an integer.";
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
