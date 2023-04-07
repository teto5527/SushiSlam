#include "Deck.h"
#include "Card.h"
#include <vector>

using namespace std;

class Deck {
public:
	deck();
	unique_ptr<base_card> draw();
private:
	vector<unique_ptr<base_card>> cards{};


};