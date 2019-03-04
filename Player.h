//
// Created by tyler on 2/26/19.
//
#include "Dice.h"

#ifndef DICEROLLING_PLAYER_H
#define DICEROLLING_PLAYER_H

//Pass a game object by reference possibly? to get access to maxScore
//Not sure how to do so otherwise
//Can't have it be in Player object as there are 2 players.
class Player {
private:
    const int DICE_ROLLS_PER_TURN = 2;

    int score{0};

    Dice playerDice;
    //A player starts out below the max no matter what
    bool belowMax{true};

public:
    //Gives the current player score
    int getScore() const;
    //Sets the current player score
    void setScore(int input);

    void loseSequence(int player);

    void winSequence(int player);

    int getDICE_ROLLS_PER_TURN() const;

    bool startTurn(int maxScore);
};


#endif //DICEROLLING_PLAYER_H
