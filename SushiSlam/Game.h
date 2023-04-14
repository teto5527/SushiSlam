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
    card_collection deck;
    int round_count;

    void display_tableau(Player p) const;
    void display_hand(int round) const;
    void display_score(card_collection t) const;
};