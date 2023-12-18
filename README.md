[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-c66648af7eb3fe8bc4f294546bfd86ef473780cde1dea487d3c4ff354943c9ae.svg)](https://classroom.github.com/online_ide?assignment_repo_id=8880753&assignment_repo_type=AssignmentRepo)
 > As you complete each section you **must** remove the prompt text. Every *turnin* of this project includes points for formatting of this README so keep it clean and keep it up to date. 
 > Prompt text is any lines beginning with "\>"
 > Replace anything between \<...\> with your project specifics and remove angle brackets. For example, you need to name your project and replace the header right below this line with that title (no angle brackets). 
# Blackjack Simulation
 > Your author list below should include links to all members GitHub (remove existing author).
 
 > Authors: \<[Sricharan Kathika ](https://github.com/Sricharan24)\> \<[Tyson Sakamoto](https://github.com/tysonmasa)\> \<[Shreyas Deshpande](https://github.com/shreyasjd777)\> \<[Ken Dinh](https://github.com/Kwod2117)\>

 > You will be forming a group of **FOUR** students and working on an interesting project. The project has 4 phases, each one with specific requirements. A list of proposed project ideas that have been successful in previous quarters is listed in the project specifications document on Canvas. You can select an idea from the list and start thinking about the features you will implement. If you want to propose your own original idea, you will have to contact your instructor to discuss the project and obtain written permission before you submit your project proposal (Phase 1). The project work should be divided almost equally among team members. You can of course help each other, but it needs to be clear who will be responsible for which features. Additionally, you are expected to follow Scrum patterns, specifically the use of a Scrum (Project) board, Sprints, and Scrum meetings.

 > ## Expectations
 > * The backend of your project should be implemented in C++. If you wish to choose anoher programming language (e.g. Java, Python), please discuss with your lab TA to obtain permission.
 > * You can incorporate additional technologies/tools but they must be approved (in writing) by the instructor or the TA.
 > * Each member of the group **must** be committing code regularly and make sure their code is correctly attributed to them. We will be checking attributions to determine if there was equal contribution to the project.
 > * **Each member of the group must actively participate in the Github Project board, writing unit tests, and reviewing commited code.**
> * All project phases are to be submitted to this GitHub repository. You should modify this README file to reflect the different phases of the project. In addition, you should regularly hold sprint meetings with your group. You will need to hold two to three scrum/check-in meetings with your lab TA/reader at different times in addition to the final demo.

## Project Description
 >   * All of our group members have played blackjack and since the rules are quite simple, we thought it would be fun to code it as a simulation so we could play whenever we want or wherever we go. Since we all know C++, it would be ideal to implement it with command line input/output so that we don't have to learn any new languages. This will allow us to complete the project in the given time frame.
 >   * For this project, we plan to utilize C++ and Visual Studio Code.
 >   * The player will input basic text to start a game of blackjack, and will then give simple commands such as hit or stand to play the game. The program will then output text prompting player input or simulating the game by showing the card drawn and the result of the game.
 >   * We would have multiple classes. One would be a deck class, another can be a dealer class, and another can be a player class. The user will play agaisnt the dealer which is a cpu that will already have the cards. The user will start off with placing a bet. Then he will be dealt one card. Then the user will be asked if he would like to hit(get another card) or stay(keep current hand). Once the users turn is done, the dealer will play and see how he stacks up agaisnt the user. If the user wins he gets the amount he betted and adds it to his pot. If the dealer wins, the user loses that money. The cards will be randomly generated and each card will hold a different value based on the card. I.E. 2 = 2, Jack, King, and Queen = 10, and ACE = 1 or 11
 > ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to:
 > * Create an "Epic" (note) for each feature. Place these epics in the `Product Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Break down the "Epics" into smaller actionable user stories (i.e. smaller development tasks). Convert them into issues and assign them to team members. Place these in the `TODO` column.
 >   * These cards should represent roughly 7 days worth of development time for your team. Then, once the sprint is over you should be repeating these steps to plan a new sprint, taking you until your second scrum meeting with the reader in phase III.
 > * Schedule two check-ins using Calendly. You need to pick both time slots during your lab on week 6. Your entire team must be present for both check-ins.
 >   * The first check-in needs to be scheduled with your lab TA. During that meeting, you will discuss your project design/class diagram from phase II.
 >   * The second check-in should be scheduled with a reader. During that meeting you will discuss:
 >     * The tasks you are planning for the first sprint
 >     * How work will be divided between the team members
## Class Diagram
 >![UML Diagram](https://github.com/cs100/final-project-skath004-sdesh020-kdinh030-tsaka013/blob/1b2af82d6d514ed9b479c4b48d206fe5349e344a/UML.jpg)
 > * Deck Class: We have 2 private variables, One is a the deck variable with the vector<card> data type and another is the remaining variable with data type int. We have 3 public functions. The dealCard function returns a Card type, which basically just deals a card whenever it is called. The getSize returns size of deck. The getDeck returns the whole deck in a vector.
 > * Card Class: We have 3 private variables, One is a the rank variable with a string data type and another is the suit variable with data type string. The last one is the value variable with a data type int. We have 4 public functions. The dealCard function returns a Card type, which basically just deals a card whenever it is called. The getRank returns the rank. The getSuit returns the suit. getValue returns the value. DisplayCard returns the card in this format "'Rank' of 'suit'."
 > * Player Class: Hit and stay functions will do what a standard hit and stay action does in blackjack. getHand will show the hand of the player or dealer. winner() shows who won based on who has a higher value. We have a getMoney to return the private money and getName to return private money.
 > * Main class: This is the main class that runs the game.

 
 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on week 8 during lab time.
 > * Before the meeting you should perform a sprint plan like you did in Phase I.
 > * You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
> 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
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
 
