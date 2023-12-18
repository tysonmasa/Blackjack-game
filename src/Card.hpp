#ifndef CARD_HPP
#define CARD_HPP

using namespace std;

class Card
{
    private:
        string rank;
        string suit;
        int value;
    public:
        Card(string s, string v);
        string getRank();
        void displayCard();
        string getSuit();
        int getValue();
};
#endif