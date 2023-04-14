#include <iostream>
#include <string>
#include <vector>

enum card_type { tempura, sashimi, nigiri_egg, nigiri_salmon, nigiri_squid, maki_roll_1, maki_roll_2, maki_roll_3, dumpling };


class Card {
public:
    virtual ~Card() = default;
    virtual void play(card_collection& cards) = 0;
    virtual card_type get_card() const = 0;
    virtual string str() const = 0;

};


/*class card_list
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

    string print() const;
};
*/

typedef vector<Card*> card_collection;
class Card_collection {
public:
    int tempura_one = 0;
    int tempura_two = 0;
    int sashimi_one = 0;
    int sashimi_two = 0;
    int nigiri_egg_one = 0;
    int nigiri_egg_two = 0;
    int nigiri_salmon_one = 0;
    int nigiri_salmon_two = 0;
    int nigiri_squid_one = 0;
    int nigiri_squid_two = 0;
    int maki_roll_one = 0;
    int maki_roll_two = 0;
    int dumpling_one = 0;
    int dumpling_two = 0;

    virtual int* score(card_collection& tableau_one, card_collection& tableau_two) = 0;
};




class Tempura : public Card{
public:
    void play(card_collection& cards) override;
    card_type get_card() const override;
    string str() const override {
        return "tempura";
    }
};

class Sashimi : public Card {
public:
    void play(card_collection& cards) override;
    card_type get_card() const override;
    string str() const override {
        return "sashimi";
    }
};

class Nigiri_egg : public Card {
public:
    void play(card_collection& cards) override;
    card_type get_card() const override;
    string str() const override {
        return "nigiri egg";
    }
};

class Nigiri_salmon : public Card {
public:
    void play(card_collection& cards) override;
    card_type get_card() const override;
    string str() const override {
		return "nigiri salmon";
	}
};

class Nigiri_squid : public Card {
public:
    void play(card_collection& cards) override;
    card_type get_card() const override;
    string str() const override {
        return "nigiri squid";
    }
};

class Maki_roll_1 : public Card {
public:
    void play(card_collection& cards) override;
    card_type get_card() const override;
    string str() const override {
		return "one maki roll";
	}
};

class Maki_roll_2 : public Card {
public:
    void play(card_collection& cards) override;
    card_type get_card() const override;
    string str() const override {
        return "two maki roll";
    }
};

class Maki_roll_3 : public Card {
public:
    void play(card_collection& cards) override;
    card_type get_card() const override;
    string str() const override {
		return "three maki roll";
	}
};

class Dumpling : public Card {
public:
    void play(card_collection& cards) override;
    card_type get_card() const override;
    string str() const override {
		return "dumpling";
	}
};