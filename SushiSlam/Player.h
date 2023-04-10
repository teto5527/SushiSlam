#include "Card.h"
#include <vector>

using namespace std;

class base_player;

class base_player {
public:
	virtual ~base_player() = default;
	void play_card();
	int points() const;

};