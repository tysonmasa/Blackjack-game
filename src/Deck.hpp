#ifndef DECK_HPP
#define DECK_HPP
using namespace std;
#include "Card.hpp"
#include <vector>

class Deck
{
    private:
        vector<Card> deck;
        int remaining = 0;
    public:
        Deck();
        int getSize();
        vector<Card> getDeck();
        Card dealCard();

};

#endif