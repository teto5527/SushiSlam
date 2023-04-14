#include "Deck.h"
#include "Card.h"
#include <vector>
#include <algorithm>
#include <random>

using namespace std;


Deck::Deck() {
	for (int i{}; i < 14; ++i)
		_cards.emplace_back(std::make_unique<Tempura>());
	for (int i{}; i < 14; ++i)
		_cards.emplace_back(std::make_unique<Sashimi>());
	for (int i{}; i < 5; ++i)
		_cards.emplace_back(std::make_unique<Nigiri_egg>());
	for (int i{}; i < 10; ++i)
		_cards.emplace_back(std::make_unique<Nigiri_salmon>());
	for (int i{}; i < 5; ++i)
		_cards.emplace_back(std::make_unique<Nigiri_squid>());
	for (int i{}; i < 6; ++i)
		_cards.emplace_back(std::make_unique<Maki_roll_1>());
	for (int i{}; i < 12; ++i)
		_cards.emplace_back(std::make_unique<Maki_roll_2>());
	for (int i{}; i < 8; ++i)
		_cards.emplace_back(std::make_unique<Maki_roll_3>());
	for (int i{}; i < 14; ++i)
		_cards.emplace_back(std::make_unique<Dumpling>());
}

void Deck::shuffle_deck() {
	vector<Card*> shuffleDeck{ _cards.begin(), _cards.end() };
	shuffle(shuffleDeck.begin(), shuffleDeck.end(), mt19937{ random_device{}() });
	_cards = card_collection( shuffleDeck.begin(), shuffleDeck.end() );
}



unique_ptr<Card> Deck::draw()
{
	//auto card_deawed = move(_cards[_cards.size() - 1]);
	auto card_deawed = move(_cards.back()); //transfer ownership of the pointer from the vector to the unique_ptr
	_cards.pop_back();

	return card_deawed;
}

string Deck::print()
{
	string ret{};
	for (auto& card : _cards)
		ret += card->str() + "";
};


