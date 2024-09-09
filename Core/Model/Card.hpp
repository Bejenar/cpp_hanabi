#ifndef CARD_HPP
#define CARD_HPP
#include <string>

#include "CardColor.hpp"


class Card {
public:
    int id;
    int rank;
    CardColor color;

    Card(int rank, CardColor color);

    std::string toString() const;

private:
    static int nextId;
    static std::string colorToString(CardColor color);
};


#endif //CARD_HPP
