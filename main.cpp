#include <iostream>
/*
 * TODO: A dice rolling game
 *  Primary features
 *      /- initial roll of 2 dice by non-player to determine initial number
 *      /- take initial roll and multiply it by three to get max number
 *      - flip a coin(50/50) to determine player turn
 *      /- roll 2 dice for the player and then ask if they want to end
 *      or keep rolling dice( every time rolling 2 at once)
 *      -end conditions
 *          /user input = 'end'
 *          /user score > max score
 *      /-if player 1 ends their turn move to next player repeat game cycle
 *
 */
#include "Game.h"
//This is a test of the username functionality
int main() {
    Game gamer;
    gamer.run();
    return 0;
}