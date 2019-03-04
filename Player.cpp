//
// Created by tyler on 2/26/19.
//

#include <iostream>
using std::endl;
using std::cout;
using std::cin;
#include "Player.h"

int Player::getScore() const {
    return Player::score;
}

void Player::setScore(int input) {
    Player::score = input;
}

bool Player::startTurn(const int maxScore) {
    std::string userInput;
    while (true) {
        cout << "***Enter yes to continue rolling, or no to end your turn***" << endl;
        cin >> userInput;
        if(userInput == "no")
            break;
        cout << "Previous Score: " << getScore() << endl;
        setScore(getScore() + playerDice.roll(getDICE_ROLLS_PER_TURN()));
        cout << "New Score: " << getScore() << endl;
        if(getScore() > maxScore+1) {
            return true;
        }
    }
    return false;
}
void Player::loseSequence(int player){
    cout << "Player" << player << " loses" << endl;
}
void Player::winSequence(int player){
    cout << "Player" << player << " wins" << endl;
}
int Player::getDICE_ROLLS_PER_TURN() const {
    return DICE_ROLLS_PER_TURN;
}


