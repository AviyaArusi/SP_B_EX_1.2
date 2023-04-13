#include "card.hpp"

namespace ariel{

    Card::Card(int rank, int type )
    {
        this->rank = rank;
        this->type = type;
    }

    int Card::getRank() const
    {
        return rank;
    }
    int Card::getType() const
    {
        return type;
    }

}