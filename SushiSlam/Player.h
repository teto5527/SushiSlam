#include "Card.h"
#include <vector>
#include <string>

using namespace std;


typedef unique_ptr<Card> card_type;
typedef unique_ptr<Player> player_type;

class Player {
public:
	//card_collection* hand{};
	card_collection* tableau{};

	virtual ~Player() = default;
	string get_name() const;
	card_collection get_tableau() const;
	string print_tableau(card_collection* tableau);
	void clear_tableau(card_collection *tableau);
	void add_card_to_tableau(card_collection& tableau, int pos, card_collection& hand);
	void add_card_to_hand(Card* card, card_collection* hand);
	int show_score(Player _name) const;




protected:
	string _name;
	card_collection _tableau;
};