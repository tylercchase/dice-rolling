//
// Created by tyler on 2/26/19.
//

#include "Game.h"
#include "Player.h"
#include "Dice.h"
#include <iostream>

using std::cout;
using std::endl;

void Game::run() {

    Player playerOne;
    Player playerTwo;
    while(playGame) {
        doRound(playerOne, playerTwo);
    }

}

void Game::generateMax() {
    Dice dice;
    int preMax = dice.roll(2);
    int finalMax = preMax * 3;
    setMax(finalMax);
}

void Game::doRound(Player playerOne, Player playerTwo) {
    generateMax();
    int max = getMax();
    std::cout << "Don't roll higher than a: " << getMax() << " in order to stay in the game!" << std::endl;
    if (playerOne.startTurn(max)) {
        playerOne.loseSequence(1);
        playerTwo.winSequence(2);
        return;
    }
    if (playerTwo.startTurn(max)) {
        playerOne.winSequence(1);
        playerTwo.loseSequence(2);
        return;
    }
    if (playerOne.getScore() > playerTwo.getScore()) {
        playerTwo.loseSequence(2);
        playerOne.winSequence(1);
    } else if (playerTwo.getScore() > playerOne.getScore()) {
        playerTwo.winSequence(2);
        playerOne.loseSequence(1);
    } else {
        cout << "It's a tie!" << endl;
    }
}

void Game::setMax(int input) {
    maxScore = input;
}

int Game::getMax() {
    return maxScore;
}