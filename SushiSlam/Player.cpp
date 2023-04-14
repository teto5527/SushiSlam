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

card_collection Player::get_tableau() const
{
	return *_tableau;
};

string Player::print_tableau(card_collection* tableau)
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
}

void Player::add_card_to_tableau(card_collection& tableau, int pos, card_collection& hand)
{
	hand.push_back(tableau[pos]);
	tableau.erase(tableau.begin() + pos);
};


void Player::add_card_to_hand(Card* card, card_collection* hand)
{
	hand->push_back(card);
};

int Player::show_score(Player _name) const
{
	
};




