#include "gtest/gtest.h"
#include "../src/Player.hpp"
#include "../src/Card.hpp"
#include "../src/Deck.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

// Card Tests
TEST(CardTests, constructerTest) {
    EXPECT_NO_THROW(Card testcard("4", "Spades"));
}

TEST(CardTests, getrankTest) {
    Card testcard("4", "Spades");
    EXPECT_EQ(testcard.getValue(), 4);
}

TEST(CardTests, getsuitTest) {
    Card testcard("4", "Spades");
    EXPECT_EQ(testcard.getSuit(), "Spades");
}

TEST(CardTests, getvalueTest) {
    Card testcard("4", "Spades");
    EXPECT_EQ(testcard.getValue(), 4);
}

// Player Tests
TEST(PlayerTests, ableToBetFiveTest) // not sure how to make a test for bet
{
  string Ian = "Ian";
  Player tester(Ian, 10000);
  cout << "Enter 5 to see if you can bet 5" << endl;
  EXPECT_EQ(tester.bet(), 5);
}

TEST(PlayerTests, getmoney)
{
  Player testPlayer("Bob", 1000);
  EXPECT_EQ(testPlayer.getMoney(), 1000);
}

TEST(PlayerTests, getname)
{
  Player testPlayer("Bob", 1000);
  EXPECT_EQ(testPlayer.getName(), "Bob");
}

TEST(PlayerTests, winnerFunctLooseTestWorks) {
  Player testPlayer("me", 1000);
  //(phand, dhand, name)
  EXPECT_NO_THROW(testPlayer.winner(22, 19, "me"));
}

TEST(PlayerTests, winnerFunctLooseTest) {
  Player testPlayer("me", 1000);
  testPlayer.bet(); //put 100
  testPlayer.winner(22, 19, "me"); //(phand, dhand, name)
  EXPECT_EQ(testPlayer.getMoney(), 900);
}

TEST(PlayerTests, winnerFunctWinTestWorks) {
  Player testPlayer("me", 1000);
  //(phand, dhand, name)
  EXPECT_NO_THROW(testPlayer.winner(19, 23, "me"));
}

// Deck Tests
TEST(DeckTests, deckConstructorTest)
{
  EXPECT_NO_THROW(Deck testDeck);
}

TEST(DeckTests, deckSizeTest)
{
  Deck testDeck;
  EXPECT_EQ(testDeck.getSize(), 52);
}

TEST(DeckTests, dealOneCardTest)
{
  Deck testDeck;
  testDeck.dealCard();
  EXPECT_EQ(testDeck.getSize(), 51);
}

TEST(DeckTests, dealTillOneCardLeftTest)
{
  Deck testDeck;
  for(int i = 0; i < 51; i++)
  {
    testDeck.dealCard();
  }
  EXPECT_EQ(testDeck.getSize(), 1);
}

TEST(DeckTests, getDeckWorks)
{
  Deck testDeck;
  EXPECT_NO_THROW(testDeck.getDeck());
}

TEST(DeckTests, getDeckFirstValueTest)
{
  Deck testDeck;
  vector<Card> deck2 = testDeck.getDeck();
  string tstrank = deck2.at(0).getRank();
  string tstsuit = deck2.at(0).getSuit();
  EXPECT_EQ(tstrank, "Ace");
  EXPECT_EQ(tstsuit, "Spades");
}