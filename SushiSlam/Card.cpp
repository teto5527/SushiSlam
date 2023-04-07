#include "Card.h"
using namespace std;


void tempura::play(card_list& cards)
{
    ++cards.tempura;
}

card_type tempura::get_card() const
{
    return card_type::tempura;
}

void sashimi::play(card_list& cards)
{
    ++cards.sashimi;
}

card_type sashimi::get_card() const
{
    return card_type::sashimi;
}

void nigiri_egg::play(card_list& cards)
{
    ++cards.nigiri_egg;
}

card_type nigiri_egg::get_card() const
{
    return card_type::nigiri_egg;
}

void nigiri_salmon::play(card_list& cards)
{
    ++cards.sashimi;
}

card_type nigiri_salmon::get_card() const
{
    return card_type::nigiri_salmon;
}

void nigiri_squid::play(card_list& cards)
{
    ++cards.nigiri_squid;
}

card_type nigiri_squid::get_card() const
{
    return card_type::nigiri_squid;
}

void maki_roll_1::play(card_list& cards)
{
    ++cards.maki_roll_1;
}

card_type maki_roll_1::get_card() const
{
    return card_type::maki_roll_1;
}
void maki_roll_2::play(card_list& cards)
{
    ++cards.maki_roll_2;
}

card_type maki_roll_2::get_card() const
{
    return card_type::maki_roll_2;
}
void maki_roll_3::play(card_list& cards)
{
    ++cards.maki_roll_3;
}

card_type maki_roll_3::get_card() const
{
    return card_type::maki_roll_3;
}

void dumpling::play(card_list& cards)
{
    ++cards.dumpling;
}

card_type dumpling::get_card() const
{
    return card_type::dumpling;
}