#include <iostream>
#include <vector>
#include <string>
#include "Card.h"
#include "Player.h"
#include "Deck.h"

using namespace std;

class Game {
public:
    Game();
    void start();

private:
    vector<Player> m_players;
    card_collection m_deck;
    int round_count;

    void print_round();
};