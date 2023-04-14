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


int* Card_collection::score(card_collection& tableau_one, card_collection& tableau_two) {
    for (auto c : tableau_one) {
        if (c.get_card() == card_type::tempura) {
            tempura_one++;
        }
        else if (c.get_card() == card_type::sashimi) {
            sashimi_one++;
        }
        else if (c.get_card() == card_type::nigiri_egg) {
            nigiri_egg_one++;
        }
        else if (c.get_card() == card_type::nigiri_salmon) {
            nigiri_salmon_one++;
        }
        else if (c.get_card() == card_type::nigiri_squid) {
            nigiri_squid_one++;
        }
        else if (c.get_card() == card_type::maki_roll_1) {
            maki_roll_one += 1;
        }
        else if (c.get_card() == card_type::maki_roll_2) {
            maki_roll_one += 2;
        }
        else if (c.get_card() == card_type::maki_roll_3) {
            maki_roll_one += 3;
        }
        else if (c.get_card() == card_type::dumpling) {
            dumpling_one++;
        }
        else {
            //do nothing
        }
    }
    int score_one = tempura_one / 2 * 5 + sashimi_one / 3 * 10 + nigiri_egg_one + nigiri_salmon_one * 2 + nigiri_squid_one * 3;

    for (auto c : tableau_two) {
        if (c.get_card() == card_type::tempura) {
            tempura_two++;
        }
        else if (c.get_card() == card_type::sashimi) {
            sashimi_two++;
        }
        else if (c.get_card() == card_type::nigiri_egg) {
            nigiri_egg_two++;
        }
        else if (c.get_card() == card_type::nigiri_salmon) {
            nigiri_salmon_two++;
        }
        else if (c.get_card() == card_type::nigiri_squid) {
            nigiri_squid_two++;
        }
        else if (c.get_card() == card_type::maki_roll_1) {
            maki_roll_two += 1;
        }
        else if (c.get_card() == card_type::maki_roll_2) {
            maki_roll_two += 2;
        }
        else if (c.get_card() == card_type::maki_roll_3) {
            maki_roll_two += 3;
        }
        else if (c.get_card() == card_type::dumpling) {
            dumpling_two++;
        }
        else {
            //do nothing
        }
    }
    int score_two = tempura_two / 2 * 5 + sashimi_two / 3 * 10 + nigiri_egg_two + nigiri_salmon_two * 2 + nigiri_squid_two * 3;

    //add MakiRoll scored
    if (maki_roll_one > maki_roll_two) {
        score_one += 6;
        score_two += 3;
    }
    else if (maki_roll_one < maki_roll_two) {
        score_one += 3;
        score_two += 6;
    }
    else {
        score_one += 3;
        score_two += 3;
    }

    //add Dumpling scored
    if (dumpling_one == 1) {
        score_one += 1;
    }
    else if (dumpling_one == 2) {
        score_one += 3;
    }
    else if (dumpling_one == 3) {
        score_one += 6;
    }
    else if (dumpling_one == 4) {
        score_one += 10;
    }
    else if (dumpling_one >= 5) {
        score_one += 15;
    }

    if (dumpling_two == 1) {
        score_two += 1;
    }
    else if (dumpling_two == 2) {
        score_two += 3;
    }
    else if (dumpling_two == 3) {
        score_two += 6;
    }
    else if (dumpling_two == 4) {
        score_two += 10;
    }
    else if (dumpling_two >= 5) {
        score_two += 15;
    }

    int score[] = { score_one, score_two };
    return score;
};


void Tempura::play(card_collection& cards)
{
    ++cards.tempura;
}

card_type Tempura::get_card() const
{
    return card_type::tempura;
}

void Sashimi::play(card_collection& cards)
{
    ++cards.sashimi;
}

card_type Sashimi::get_card() const
{
    return card_type::sashimi;
}

void Nigiri_egg::play(card_collection& cards)
{
    ++cards.nigiri_egg;
}

card_type Nigiri_egg::get_card() const
{
    return card_type::nigiri_egg;
}

void Nigiri_salmon::play(card_collection& cards)
{
    ++cards.sashimi;
}

card_type Nigiri_salmon::get_card() const
{
    return card_type::nigiri_salmon;
}

void Nigiri_squid::play(card_collection& cards)
{
    ++cards.nigiri_squid;
}

card_type Nigiri_squid::get_card() const
{
    return card_type::nigiri_squid;
}

void Maki_roll_1::play(card_collection& cards)
{
    ++cards.maki_roll_1;
}

card_type Maki_roll_1::get_card() const
{
    return card_type::maki_roll_1;
}
void Maki_roll_2::play(card_collection& cards)
{
    ++cards.maki_roll_2;
}

card_type Maki_roll_2::get_card() const
{
    return card_type::maki_roll_2;
}
void Maki_roll_3::play(card_collection& cards)
{
    ++cards.maki_roll_3;
}

card_type Maki_roll_3::get_card() const
{
    return card_type::maki_roll_3;
}

void Dumpling::play(card_collection& cards)
{
    ++cards.dumpling;
}

card_type Dumpling::get_card() const
{
    return card_type::dumpling;
}