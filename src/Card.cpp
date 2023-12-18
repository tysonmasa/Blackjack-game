#include <iostream>
using namespace std;
#include "Card.hpp"

string Card::getRank()
{
    return this->rank;
}

string Card::getSuit()
{
    return this->suit;
}

int Card::getValue() {
    return this->value;
    /*
    if (this->rank == "ace") {return 11;}
    if (this->rank == "10" || this->rank == "jack"
    || this->rank == "queen" || this->rank == "king") {return 10;}
    if (this->rank == "9") {return 9;}
    if (this->rank == "8") {return 8;}
    if (this->rank == "7") {return 7;}
    if (this->rank == "6") {return 6;}
    if (this->rank == "5") {return 5;}
    if (this->rank == "4") {return 4;}
    if (this->rank == "3") {return 3;}
    if (this->rank == "2") {return 2;}
    */
}


Card::Card(string r, string s){
    rank = r;
    suit = s;
    if(r == "Ace"){
        value = 11;
    }
    else if(r == "2"){
        value = 2;
    }
    else if(r == "3"){
        value = 3;
    }
    else if(r == "4"){
        value = 4;
    }
    else if(r == "5"){
        value = 5;
    }
    else if(r == "6"){
        value = 6;
    }
    else if(r == "7"){
        value = 7;
    }
    else if(r == "8"){
        value = 8;
    }
    else if(r == "9"){
        value = 9;
    }
    else if(r == "10"){
        value = 10;
    }
    else if(r == "Jack"){
        value = 10;
    }
    else if(r == "Queen"){
        value = 10;
    }
    else if(r == "King"){
        value = 10;
    }
}

void Card::displayCard(){
    cout<< this->rank << " of " << this->suit <<endl;
}

