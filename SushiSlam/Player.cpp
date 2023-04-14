#include "Player.h";
#include <iostream>;
#include <vector>;

using namespace std;




Player::Player()
{
	string names[] = { "Sam", "Billy", "Jen", "Bob", "Sally", "Joe", "Sue", "Sasha", "Tina", "Marge" };
	string _name = names[rand() % 10];
};

string Player::get_name() const
{
	return _name;
};

string Player::print_tableau(card_collection* tableau) const
{
	string ret{};
	for (auto c : *tableau) {
		ret += c.str();
	}
	return ret;
};

void Player::clear_tableau(card_collection* tableau)
{
	for (auto c : *tableau) {
		delete c;
	}
	tableau->clear();
};

void Player::add_card_to_hand(Card* card, card_collection* hand)
{
	hand->push_back(card);
};

int Player::show_score(Player _name) const
{
	
};




