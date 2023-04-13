#ifndef EX_1_CARD_H
#define EX_1_CARD_H

#include <iostream>

using namespace std;

namespace ariel{

    class Card
    {
    private:
        int rank;
        int type;
    public:
        Card(int, int);
        int getRank() const;
        int getType() const;
    };
}




#endif //EX_1_CARD_H
