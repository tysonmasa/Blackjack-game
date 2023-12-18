#include <iostream>
using namespace std;
#include "Deck.hpp"
#include <vector>
#include<string>
#include <stdlib.h>
#include <time.h> 
#include "Card.hpp"

Deck::Deck()
{
    remaining = 52;

    vector<string> cardRankToImplementVector = {"Ace", to_string(2), to_string(3), to_string(4), to_string(5), to_string(6), to_string(7), to_string(8), to_string(9), to_string(10), "Jack", "Queen", "King"};

    for(int j = 0; j < 13; j++) // for loop to implement all 52 cards into deck vector
    {
        deck.push_back(Card(cardRankToImplementVector[j], "Spades"));
        deck.push_back(Card(cardRankToImplementVector[j], "Diamonds"));
        deck.push_back(Card(cardRankToImplementVector[j], "Hearts"));
        deck.push_back(Card(cardRankToImplementVector[j], "Clubs"));
    }
}



int Deck::getSize()
{
    return remaining;
}

Card Deck::dealCard()
{
    if(!deck.empty())
    {
        srand(time(0));

        int cardInDeck = rand() % (remaining - 1);

        swap(deck.at(cardInDeck), deck.back());
        Card tempCard = deck.back();
        deck.pop_back();
        remaining--;

        return tempCard;
    }

    cout << "No more cards left in deck";
    exit(0);
}

vector<Card> Deck::getDeck() { 
    return this->deck;
}

