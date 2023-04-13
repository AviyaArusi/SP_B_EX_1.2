#ifndef EX_1_GAME_H
#define EX_1_GAME_H

#include <vector>
#include <string>
#include <iostream>
#include <cstdlib> // For the random number.
#include "player.hpp"
#include "card.hpp"

using namespace std;
namespace ariel{

    class Game{
    private:
        Player& p1; // The 2 player of the game.
        Player& p2;                 
        vector<pair<Card, Card>> log; // Hold all the non-draw turn one after another.
        vector<Card> card_pack;      // Hold the full pack in the start of the Game.
        bool keep_play;
        int draw_rounds; // Hold the number of draw rounds in all the game.
        int draw_points_counter; // Hold the cuurent draw points.
   
    public:
        Game(Player&, Player&);

        void playTurn();
        void playAll();
        void printLastTurn() const;
        void printWiner() const;
        void printLog() const;
        void printStats() const;

        // Added function
        void reset_pack();
        void shuffle_pack();
        void deal_pack();
        string dictionary(int) const;
        void updadePoints(Card, Card);
    };

}

#endif //EX_1_GAME_H
