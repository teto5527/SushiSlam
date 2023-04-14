#include "game.h"

#include <algorithm>
#include <iostream>
#include <random>
#include <stdexcept>

// Constructor
Game::Game() {
    // Initialize players
    Player p1;
    Player p2;

    // Initialize deck
    Deck deck;

    // Shuffle deck
    deck.shuffle_deck();

    cout << "~~~Game Start~~~";
    for (round_count = 0; round_count < 10; round_count++) {
        int position_of_card;
        display_tableau(p1);
        display_hand(round_count);
        cout << "Select a card to add to your tableau:";
        cin >> position_of_card;
        if (position_of_card > 10 - round_count) {
            throw invalid_argument("Invalid card selection");
        }
        p1.add_card_to_tableau(p1.get_tableau(), position_of_card, deck);

        // ask player 2 to select a card and add it to their tableau from hand
        display_tableau(p2);
        display_hand(round_count);
        cout << "Select a card to add to your tableau:";
        cin >> position_of_card;
        if (position_of_card > 10 - round_count) {
            throw invalid_argument("Invalid card selection");
        }
        p2.add_card_to_tableau(p2.get_tableau(), position_of_card, deck);
    }

    //culc result and display
    int* scores = p1.get_tableau().score(p1.get_tableau(), p2.get_tableau());
    int p1_score = scores[0];
    int p2_score = scores[1];
    cout << "~~~end of round scoring ~~~";
    cout<<"PLAYER"<<p1.get_name()<<"SCORE:"<<p1_score;
    cout<<"PLAYER"<<p2.get_name()<<"SCORE:"<<p2_score;



}
void Game::display_tableau(Player p) const {
    // Display player's Tableau
    cout<<"PLAYER" << p.get_name() << " TURN\nTableau:\n";
    //string print_tableau(p.get_tableau());
}

void Game::display_hand(int round) const {
    // Display the current hand
    for (auto c = deck.begin(); c != deck.begin() + (10 - round); c++) {
        int i = 0;
		cout << i <<". "<< c->str() << " ";
        i++;
	}
}


int main() {
    Game();
    return 0;
}