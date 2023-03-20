#pragma once
#include <iostream>
#include <string>

enum class card_type { tempura, sashimi, nigiri_egg, nigiri_salmon, nigiri_squid, maki_roll_1, maki_roll_2, maki_roll_3, dumpling };

class card_list
{
public:
    int tempura{};
    int sashimi{};
    int nigiri_egg{};
    int nigiri_salmon{};
    int nigiri_squid{};
    int maki_roll_1{};
    int maki_roll_2{};
    int maki_roll_3{};
    int dumpling{};

};