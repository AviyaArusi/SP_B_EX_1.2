#include "player.hpp"

namespace ariel{
    Player::Player()
    {

    }
    Player::Player(string name) // throw exception " "
    {
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