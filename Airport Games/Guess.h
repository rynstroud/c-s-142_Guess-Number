//
//  Guess.h
//  Guess Number
//
//  Created by Camryn Stroud on 12/19/19.
//  Copyright © 2019 Ryn Stroud. All rights reserved.
//

#ifndef Guess_h
#define Guess_h

class Guess {
public:
    void WelcomePrompt();
    int GetHighTehe();
    int GetLowShauty();
    char PromptForYHL(int val);
    void PlayGame(int hVal, int lVal);
    bool CheckIfValid(char userResponse);
};

#endif /* Guess_h */
