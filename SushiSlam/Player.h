#include "Card.h"
#include <vector>
#include <string>

using namespace std;


typedef unique_ptr<Card> card_type;
typedef unique_ptr<Player> player_type;

class Player {
public:
	card_collection* hand{};
	card_collection* tableau{};

	virtual ~Player() = default;
	string get_name() const;
	string print_tableau(card_collection* tableau) const;
	void clear_tableau(card_collection *tableau);
	void add_card_to_hand(Card* card, card_collection* hand);
	int show_score(Player _name) const;




protected:
	string _name;
};