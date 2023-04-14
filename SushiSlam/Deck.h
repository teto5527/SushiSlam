#include "Card.h"
#include <vector>

using namespace std;

class Deck
{
public:
    Deck();
    void shuffle_deck();
    unique_ptr<Card> draw();
    string print();
private:
    card_collection _cards{};
};

