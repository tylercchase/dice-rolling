//
// Created by tyler on 2/26/19.
//

#ifndef DICEROLLING_GAME_H
#define DICEROLLING_GAME_H


#include "Player.h"

class Game {
private:
    int maxScore;
public:
    //Runs the game
    void run();

    //A round of playing
    void doRound(Player playerOne, Player playerTwo);

    //Called by round function to get the initial dice roll.
    void generateMax();

    //Returns the maximum score to get without losing the round
    int getMax();

    //Sets the maximum score
    void setMax(int input);

    bool playGame{true};
};


#endif //DICEROLLING_GAME_H
