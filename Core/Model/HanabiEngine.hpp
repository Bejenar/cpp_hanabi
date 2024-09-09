#ifndef HANABI_ENGINE_HPP
#define HANABI_ENGINE_HPP

#include <stack>
#include <vector>
#include "Player.hpp"
#include "Card.hpp"

class HanabiEngine {
private:
    static const int MAX_PLAYERS = 4;
    static const int MAX_HINTS = 8;
    static const int MAX_MISTAKES = 3;

    std::stack<Card> deck;
    std::vector<Card> discardedCards;
    int points[5];

    std::vector<Player*> players;
    int currentPlayerIdx;

    int currentHints;
    int currentMistakes;

    bool cardsDealt;

    void Reset();
    Player* FindPlayer(int playerId);
    Card* DrawCard(Player& currentPlayer, int indexToFill);
    std::pair<int, Card*> DiscardCard(Player& currentPlayer, int id);
    void GameOver();
    void FinishFirework(int colorIdx);
    Card* TryGetCard(int id, Player& player);
    void EndTurn();

public:
    HanabiEngine();
    void AddPlayer(Player& player);
    void DealCards();
    bool IsValidPlayer(int connId);
    void PlayCard(int id);
    void ReplaceCard(int id);
    void MakeHint(int playerId, bool isColorHint, int hintIndex);
};

#endif
