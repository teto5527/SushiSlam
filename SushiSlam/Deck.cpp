#include "Deck.h"
#include "Card.h"
#include <vector>
#include <algorithm>
#include <random>

using namespace std;


Deck::Deck() {
	for (int i{}; i < 14; ++i)
		cards.emplace_back(std::make_unique<tempura>());
	for (int i{}; i < 14; ++i)
		cards.emplace_back(std::make_unique<sashimi>());
	for (int i{}; i < 5; ++i)
		cards.emplace_back(std::make_unique<nigiri_egg>());
	for (int i{}; i < 10; ++i)
		cards.emplace_back(std::make_unique<nigiri_salmon>());
	for (int i{}; i < 5; ++i)
		cards.emplace_back(std::make_unique<nigiri_squid>());
	for (int i{}; i < 6; ++i)
		cards.emplace_back(std::make_unique<maki_roll_1>());
	for (int i{}; i < 12; ++i)
		cards.emplace_back(std::make_unique<maki_roll_2>());
	for (int i{}; i < 8; ++i)
		cards.emplace_back(std::make_unique<maki_roll_3>());
	for (int i{}; i < 14; ++i)
		cards.emplace_back(std::make_unique<dumpling>());

	random_device rd; //reference https://en.cppreference.com/w/cpp/algorithm/random_shuffle dont know how to work
	mt19937 g(rd());

	shuffle(cards.begin(), cards.end(), g);
}



unique_ptr<base_card> Deck::draw()
{
	auto card_deawed = move(cards[cards.size() - 1]);
	cards.pop_back();

	return card_deawed;
}
