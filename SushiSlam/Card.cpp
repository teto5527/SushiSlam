#include "Card.h"
#include "string"
using namespace std;

/*
string card_list::print() const
{
    string ret{};
    if (tempura)
        ret += "tempura: " + to_string(tempura) + "\n";
    if (maki_roll_1)
        ret += "maki roll 1: " + to_string(maki_roll_1) + "\n";
    if (maki_roll_2)
        ret += "maki roll 2: " + to_string(maki_roll_2) + "\n";
    if (maki_roll_3)
        ret += "maki roll 3: " + to_string(maki_roll_3) + "\n";
    if (sashimi)
        ret += "sashimi: " + to_string(sashimi) + "\n";
    if (nigiri_egg)
        ret += "nigiri 1: " + to_string(nigiri_egg) + "\n";
    if (nigiri_salmon)
        ret += "nigiri 2: " + to_string(nigiri_salmon) + "\n";
    if (nigiri_squid)
        ret += "nigiri 3: " + to_string(nigiri_squid) + "\n";


    if (maki_roll_1)
        ret += "single maki roll: " + to_string(maki_roll_1) + "\n";
    if (maki_roll_2)
        ret += "double maki roll: " + to_string(maki_roll_2) + "\n";
    if (maki_roll_3)
        ret += "triple maki roll: " + to_string(maki_roll_3) + "\n";
    if (dumpling)
        ret += "dumpling: " + to_string(dumpling) + "\n";
    return ret;
}
*/

void Tempura::play(card_list& cards)
{
    ++cards.tempura;
}

card_type Tempura::get_card() const
{
    return card_type::tempura;
}

void Sashimi::play(card_list& cards)
{
    ++cards.sashimi;
}

card_type Sashimi::get_card() const
{
    return card_type::sashimi;
}

void Nigiri_egg::play(card_list& cards)
{
    ++cards.nigiri_egg;
}

card_type Nigiri_egg::get_card() const
{
    return card_type::nigiri_egg;
}

void Nigiri_salmon::play(card_list& cards)
{
    ++cards.sashimi;
}

card_type Nigiri_salmon::get_card() const
{
    return card_type::nigiri_salmon;
}

void Nigiri_squid::play(card_list& cards)
{
    ++cards.nigiri_squid;
}

card_type Nigiri_squid::get_card() const
{
    return card_type::nigiri_squid;
}

void Maki_roll_1::play(card_list& cards)
{
    ++cards.maki_roll_1;
}

card_type Maki_roll_1::get_card() const
{
    return card_type::maki_roll_1;
}
void Maki_roll_2::play(card_list& cards)
{
    ++cards.maki_roll_2;
}

card_type Maki_roll_2::get_card() const
{
    return card_type::maki_roll_2;
}
void Maki_roll_3::play(card_list& cards)
{
    ++cards.maki_roll_3;
}

card_type Maki_roll_3::get_card() const
{
    return card_type::maki_roll_3;
}

void Dumpling::play(card_list& cards)
{
    ++cards.dumpling;
}

card_type Dumpling::get_card() const
{
    return card_type::dumpling;
}