#include <iostream>
#include <string>
#include <vector>

enum class card_type { tempura, sashimi, nigiri_egg, nigiri_salmon, nigiri_squid, maki_roll_1, maki_roll_2, maki_roll_3, dumpling };

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

    int* score(card_collection& tableau_one, card_collection& tableau_two) {
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
            else if (c.get_card() == card_type::nigiri_salmon){
                nigiri_salmon_one++;
            }
            else if (c.get_card() == card_type::nigiri_squid) {
				nigiri_squid_one++;
			}
            else if (c.get_card() == card_type::maki_roll_1) {
				maki_roll_one+=1;
			}
            else if (c.get_card() == card_type::maki_roll_2) {
				maki_roll_one+=2;
			}
            else if (c.get_card() == card_type::maki_roll_3) {
				maki_roll_one+=3;
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
        else if (dumpling_one >= 5 ) {
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
};



class Card {
public:
    virtual ~Card() = default;
    virtual void play(card_list& cards) = 0;
    virtual card_type get_card() const = 0;
    virtual string str() const = 0;

}; 

class Tempura : public Card{
public:
    void play(card_list& cards) override;
    card_type get_card() const override;
    string str() const override {
        return "tempura";
    }
};

class Sashimi : public Card {
public:
    void play(card_list& cards) override;
    card_type get_card() const override;
    string str() const override {
        return "sashimi";
    }
};

class Nigiri_egg : public Card {
public:
    void play(card_list& cards) override;
    card_type get_card() const override;
    string str() const override {
        return "nigiri egg";
    }
};

class Nigiri_salmon : public Card {
public:
    void play(card_list& cards) override;
    card_type get_card() const override;
    string str() const override {
		return "nigiri salmon";
	}
};

class Nigiri_squid : public Card {
public:
    void play(card_list& cards) override;
    card_type get_card() const override;
    string str() const override {
        return "nigiri squid";
    }
};

class Maki_roll_1 : public Card {
public:
    void play(card_list& cards) override;
    card_type get_card() const override;
    string str() const override {
		return "one maki roll";
	}
};

class Maki_roll_2 : public Card {
public:
    void play(card_list& cards) override;
    card_type get_card() const override;
    string str() const override {
        return "two maki roll";
    }
};

class Maki_roll_3 : public Card {
public:
    void play(card_list& cards) override;
    card_type get_card() const override;
    string str() const override {
		return "three maki roll";
	}
};

class Dumpling : public Card {
public:
    void play(card_list& cards) override;
    card_type get_card() const override;
    string str() const override {
		return "dumpling";
	}
};