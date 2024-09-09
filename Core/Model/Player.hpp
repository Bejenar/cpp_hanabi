#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <string>
#include "Card.hpp"


class Player {
public:
    int id;
    std::string name;
    Card* hand[5];

    explicit Player(const std::string &name);
    ~Player();

    std::string handToString() const;

    static std::string handToString(Card* const hand[5]);

private:
    static int nextId;
    static const int MAX_HAND = 5;
};


#endif //PLAYER_HPP
