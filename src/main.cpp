
#include <iostream>
#include <chrono>
#include <thread>
#include <vector>
using namespace std;
#include "Card.hpp"
#include "Deck.hpp"
#include "Player.hpp"

int main(){
    
    bool play;
    cout<<"Welcome to BlackJack. What is your name?"<<endl;
    string name;
    cin >> name;
    Player mainPlayer(name, 1000);
    cout<<"Hello " << mainPlayer.getName() << "! Type START to play."<<endl;
    Deck mainDeck;
    string begin;
    cin>>begin;
    if(begin == "start"){
        play = true;
    }
    else{
        play = false;
    }
    cout<<"Your balance: "<< mainPlayer.getMoney()<<endl;
    while(play){
        mainPlayer.bet();
        string HitOrStay;
        int playerSum;
        int dealerSum = 0;
        vector<Card> playerHand;
        vector<Card> dealerHand;
        cout<<"Shuffling deck and dealing your cards . . ."<<endl;
        this_thread::sleep_for(chrono::milliseconds(4000));
        playerHand.push_back(mainDeck.dealCard());
        playerHand.push_back(mainDeck.dealCard());
        Card one = playerHand[0];
        Card two = playerHand[1];
        int oneValue = one.getValue();
        int twoValue = two.getValue();
        playerSum = oneValue + twoValue;
        one.displayCard();
        two.displayCard();
        cout<<"Hand Value: "<< playerSum<<endl;
        cout<<endl;
        cout<<"Dealer's Hand:"<<endl;
        dealerHand.push_back(mainDeck.dealCard());
        this_thread::sleep_for(chrono::milliseconds(2000));
        dealerHand[0].displayCard();
        dealerSum += dealerHand[0].getValue();
        cout<<"**2nd Card Hidden**"<<endl;
        cout<<endl;
        bool hit = true;
        int i = 2;
        while(hit){
            cout<<"Would you like to HIT or STAY"<<endl;
            cin>>HitOrStay;
            if(HitOrStay == "hit"){
                playerHand.push_back(mainDeck.dealCard());
                playerHand[i].displayCard();
                playerSum += playerHand[i].getValue();
                cout<<"Hand Value: "<< playerSum<<endl;
                ++i;
                if(playerSum > 21){
                    cout<<"You Lose"<<endl;
                    break; 
                }
            }
            else{
                cout<<"Dealer's turn"<<endl; 
                int j = 1;
                while(dealerSum < playerSum && dealerSum < 17){
                    dealerHand.push_back(mainDeck.dealCard());
                    this_thread::sleep_for(chrono::milliseconds(3000));
                    dealerHand[j].displayCard();
                    dealerSum += dealerHand[j].getValue();
                    cout<<"Hand Value: "<< dealerSum<<endl;
                    j+=1;
                    if(dealerSum > 21){
                        cout<<"You win"<<endl;
                        break; 
                    }
                }
                break;
            }
        }
        mainPlayer.winner(playerSum,dealerSum,name);
        cout<<"Updated balance: "<< mainPlayer.getMoney()<<endl;
        if(mainPlayer.getMoney() == 0){
            cout<<"YOUR BROKE!!!"<<endl;
            break;
        }
        cout<<"Enter to QUIT to end game or AGAIN to play again."<<endl;
        cin>>begin;
        if(begin == "quit"){
            play = false;
        }
        else{
            play = true;
        }

    }

}