[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-c66648af7eb3fe8bc4f294546bfd86ef473780cde1dea487d3c4ff354943c9ae.svg)](https://classroom.github.com/online_ide?assignment_repo_id=8880753&assignment_repo_type=AssignmentRepo)

# Blackjack Simulation
 
 > Authors: \<[Sricharan Kathika ](https://github.com/Sricharan24)\> \<[Tyson Sakamoto](https://github.com/tysonmasa)\> \<[Shreyas Deshpande](https://github.com/shreyasjd777)\> \<[Ken Dinh](https://github.com/Kwod2117)\>

## Project Description
 >   * All of our group members have played blackjack and since the rules are quite simple, we thought it would be fun to code it as a simulation so we could play whenever we want or wherever we go. Since we all know C++, it would be ideal to implement it with command line input/output so that we don't have to learn any new languages. This will allow us to complete the project in the given time frame.
 >   * For this project, we plan to utilize C++ and Visual Studio Code.
 >   * The player will input basic text to start a game of blackjack, and will then give simple commands such as hit or stand to play the game. The program will then output text prompting player input or simulating the game by showing the card drawn and the result of the game.
 >   * We would have multiple classes. One would be a deck class, another can be a dealer class, and another can be a player class. The user will play agaisnt the dealer which is a cpu that will already have the cards. The user will start off with placing a bet. Then he will be dealt one card. Then the user will be asked if he would like to hit(get another card) or stay(keep current hand). Once the users turn is done, the dealer will play and see how he stacks up agaisnt the user. If the user wins he gets the amount he betted and adds it to his pot. If the dealer wins, the user loses that money. The cards will be randomly generated and each card will hold a different value based on the card. I.E. 2 = 2, Jack, King, and Queen = 10, and ACE = 1 or 11

## Class Diagram
 >![UML Diagram](https://github.com/cs100/final-project-skath004-sdesh020-kdinh030-tsaka013/blob/1b2af82d6d514ed9b479c4b48d206fe5349e344a/UML.jpg)
 > * Deck Class: We have 2 private variables, One is a the deck variable with the vector<card> data type and another is the remaining variable with data type int. We have 3 public functions. The dealCard function returns a Card type, which basically just deals a card whenever it is called. The getSize returns size of deck. The getDeck returns the whole deck in a vector.
 > * Card Class: We have 3 private variables, One is a the rank variable with a string data type and another is the suit variable with data type string. The last one is the value variable with a data type int. We have 4 public functions. The dealCard function returns a Card type, which basically just deals a card whenever it is called. The getRank returns the rank. The getSuit returns the suit. getValue returns the value. DisplayCard returns the card in this format "'Rank' of 'suit'."
 > * Player Class: Hit and stay functions will do what a standard hit and stay action does in blackjack. getHand will show the hand of the player or dealer. winner() shows who won based on who has a higher value. We have a getMoney to return the private money and getName to return private money.
 > * Main class: This is the main class that runs the game.
 
 ## Screenshots
 > ![Screenshot 1](https://github.com/cs100/final-project-skath004-sdesh020-kdinh030-tsaka013/blob/master/Screen%20Shot%202022-11-29%20at%207.15.52%20PM.png)
 > ![Screenshot 2](https://github.com/cs100/final-project-skath004-sdesh020-kdinh030-tsaka013/blob/master/Screen%20Shot%202022-11-29%20at%207.16.22%20PM.png)
 > ![Screenshot 3](https://github.com/cs100/final-project-skath004-sdesh020-kdinh030-tsaka013/blob/master/Screen%20Shot%202022-11-29%20at%207.16.58%20PM.png)

 ## Installation/Usage
 > Instructions on installing and running your application
 This Blackjack program can be downloaded through the github page. Once downloaded, it can be run on the device console or any ICE with a console. Then run the main function and follow the prompt to play the game! 

 >Run these commands in terminal:

 >cd src

 >g++ main.cpp Player.cpp Deck.cpp Card.cpp

 >./a.out
 ## Testing
 >Run these commands in terminal:

 >cd tests
  
 >cmake .

 >make

 >./runAllTests
 
