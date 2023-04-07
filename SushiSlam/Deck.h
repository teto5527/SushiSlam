#include "card.h"
#include <vector>

using namespace std;

class Deck
{
public:
    Deck();
    unique_ptr<base_card> draw();
private:
    vector<unique_ptr<base_card>> cards{};
};