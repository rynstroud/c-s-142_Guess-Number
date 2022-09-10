//
//  Guess.cpp
//  Guess Number
//
//  Created by Camryn Stroud on 12/19/19.
//  Copyright © 2019 Ryn Stroud. All rights reserved.
//
#include <iostream>
#include "Guess.h"

void Guess::WelcomePrompt() {
    std::cout << "Welcome to my game, guys. Your number is between what two numbers?\n";
    std::cout << "(seriously, bro, i can guess it so fast. i am so cool.)\n";
    std::cout << "((make make the numbers that your number is between as far apart as you want. :) ))\n";
}

int Guess::GetHighTehe() {
    int highVal = 0;
    std::cin >> highVal;
    return highVal;
}

int Guess::GetLowShauty() {
    int lowVal = 0;
    std::cin >> lowVal;
    return lowVal;
}

bool Guess::CheckIfValid(char userResponse) {
    bool isValid = true;
    if (userResponse != 'y') && (userResponse != 'h') && (userResponse != 'l') {
        isValid = false;
    }
    return isValid;
}

char Guess::PromptForYHL(int val) {
    char beepBeep = '0';
    std::cout << "is your number " << val << "?\n";
    std::cout << "enter \"y\" for \"YES! U're so hecking brilliant Ryn!\n\"";
    std::cout << "or \"h\" if your number is higher than my guess";
    std::cout << "or \"l\" if it is lower brah\n";
    std::cin >> beepBeep;
    if (!CheckIfValid(beepBeep)) {
        std::cout << "hey i gave you instructions. now follow them.\n";
        PromptForYHL(val);
    }
    return beepBeep;
}

void Guess::PlayGame(int hVal, int lVal) {
    int mVal = 0;
    char uResponse = '0';
    mVal = (hVal + lVal) / 2;
    uResponse = PromptForYHL(mVal);
    if ((uResponse != 'h') && (uResponse != 'l')) {
        std::cout << "HAH! told you i'd get it fast babeyyyyy\n";
    }
    else {
        if (uResponse == 'h') {
            PlayGame(mVal, hVal);
        }
        else if (uResponse == 'l') {
            PlayGame(lVal, hVal);
        }
        else {
            std::cout << "oopsie! i coded something wrong tehe check PlayGame()\n";
        }
    }
}
