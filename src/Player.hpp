#ifndef Player_HPP
#define Player_HPP
using namespace std;
#include "Card.hpp"
#include "Deck.hpp"
#include <vector>

class Player
{
    private:
        vector<Card> hand;
        string name;
        int valueOfCards;
        int money;
        int pot;
    public:
        Player(string n, int m);
        void winner(int playerHand, int dealerHand, string name);
        vector<Card> getHand();  //originally void getHand();
        void hit();
        int bet();
        string getName();
        int getMoney();

};

#endif