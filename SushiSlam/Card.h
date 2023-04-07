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

class base_card {
public:
    virtual ~base_card() = default;
    virtual void play(card_list& cards) = 0;
    virtual card_type get_card() const = 0;
};

class tempura : public base_card{
public:
    void play(card_list& cards) override;
    card_type get_card() const override;
};

class sashimi : public base_card {
public:
    void play(card_list& cards) override;
    card_type get_card() const override;
};

class nigiri_egg : public base_card {
public:
    void play(card_list& cards) override;
    card_type get_card() const override;
};

class nigiri_salmon : public base_card {
public:
    void play(card_list& cards) override;
    card_type get_card() const override;
};

class nigiri_squid : public base_card {
public:
    void play(card_list& cards) override;
    card_type get_card() const override;
};

class maki_roll_1 : public base_card {
public:
    void play(card_list& cards) override;
    card_type get_card() const override;
};

class maki_roll_2 : public base_card {
public:
    void play(card_list& cards) override;
    card_type get_card() const override;
};

class maki_roll_3 : public base_card {
public:
    void play(card_list& cards) override;
    card_type get_card() const override;
};

class dumpling : public base_card {
public:
    void play(card_list& cards) override;
    card_type get_card() const override;
};