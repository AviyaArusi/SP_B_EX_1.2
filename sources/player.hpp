#ifndef EX_1_PLAYER_H
#define EX_1_PLAYER_H

#include <iostream>
#include <string>
#include <vector>
#include "card.hpp"


using namespace std;
namespace ariel{

    class Player {
    private:
        string name;
        int points; // Holds the number of points the Player gets in the game.
        int cards_won; // Hold the number of cards that win.
        vector <Card> card_pack; // The player pack.

    public:
        Player(string);
        int stacksize() const;
        int cardesTaken()const;

        // Added function
        void addCard(Card);
        void setPoints(int, bool);
        Card playTurn();
        string getName() const;
        int getCardsWon() const;
    };
}
#endif //EX_1_PLAYER_H
