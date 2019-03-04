//
// Created by tyler on 2/26/19.
//
#include <cstdlib>
#include <iostream>
#include <random>
#include <functional>
#include <chrono>
#include "Dice.h"

int Dice::roll(int numOfRolls) {
    int totalSum(0);
    for (int c = 0; c < numOfRolls; ++c) {
        std::default_random_engine generator;
        generator.seed(static_cast<unsigned long>(std::chrono::system_clock::now().time_since_epoch().count()));
        std::uniform_int_distribution<int> distribution(1,6);
        auto dice = std::bind ( distribution, generator );
        int tempRoll = dice();
//        std::cout << "Dice Rolled: " << tempRoll << std::endl;
        totalSum += tempRoll;
    }
    std::cout << "Total sum of dice Rolled: " << totalSum << std::endl;
    return totalSum;
}
