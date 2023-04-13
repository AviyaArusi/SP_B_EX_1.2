#include "player.hpp"

namespace ariel{

    Player::Player(string name) 
    {
        if(name.empty()) 
        {
            throw invalid_argument("the name of the Player must be a non empty string!");
        }
        this->name = name;
        points = 0;
        cards_won = 0;
    }

    int Player::stacksize() const
    {
        return card_pack.size();
    }

    int Player::cardesTaken() const
    {
        return points;
    }


    void Player::addCard(Card card)
    {
        card_pack.push_back(card);
    }

    /**
     * @brief this fuction use to set the number of points and cars_won.
     * @param add the number of point to add - can be from winning or from draw.
     * @param is_win if this param is true it is means that we need to ad for cards_won +1.
    */
    void Player::setPoints(int add, bool is_win)
    {
        if(is_win)
            cards_won += 1;
        points += add;
    }

    Card Player::playTurn()
    {
        if(card_pack.size() <= 0) 
        {
            throw runtime_error("There is nothing to play!");
        }
        // Taking the last card from the pack remove it and return it.
        size_t last_index = card_pack.size()-1;
        Card ans = card_pack[last_index];
        card_pack.pop_back();
        return ans;
    }

    string Player::getName() const
    {
        return name;
    }

    int Player::getCardsWon() const
    {
        return cards_won;
    }

}