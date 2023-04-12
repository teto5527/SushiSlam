#include "Card.h"
#include <vector>

using namespace std;

class Deck
{
public:
    Deck();
    unique_ptr<Card> draw();
    string print(Deck deck);
private:
    vector<unique_ptr<Card>> cards{};
};

