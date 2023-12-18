#include <iostream>
using namespace std;
#include "Player.hpp"


void Player::winner(int pHand, int dHand, string pName) {
    if (pHand > 21) {
        //player looses
        cout << pName << " busts." << endl;
    }
    else if (dHand > 21) {
        //player wins
        cout << "Dealer busts, " << pName << " wins." << endl;
        money = money + pot + pot;
    }
    else if (pHand > dHand) {
        //player wins
        cout << pName << " wins." << endl;
        money = money + pot + pot;
    }
    else if (pHand == dHand) {
        //money returns, no winners
        cout << "It's a draw." << endl;
        money = money + pot;
    }
    else {
        //player loses (dealer value of cards > player's)
        cout << "Dealer wins." << endl;
    }
    
    this->pot = 0; //clears pot
}

Player::Player(string n, int m){
    name = n;
    money = m;
}

int Player::bet()
{
    int bet;
    cout << "Enter the amount you want to bet: ";
    cin >> bet;

    while (bet > this->money)
    {
        cout << "Invalid funds. Bet again." << endl;
        cout << "Enter the amount you want to bet: ";
        cin >> bet;
    }

    money -= bet;
    pot += bet;

    return bet;
}

vector<Card> Player::getHand(){
    return hand;
}

string Player::getName(){
    return name;
}

int Player::getMoney(){
    return money;
}