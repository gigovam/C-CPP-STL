#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

enum Suit { HEARTS, DIAMONDS, CLUBS, SPADES };

class Card {
private:
    int value;
    Suit suit;

public:
    Card(int v, Suit s) : value(v), suit(s) {}

    int getValue() const {
        return value;
    }

    Suit getSuit() const {
        return suit;
    }

    void print() const {
        cout << value;
        switch (suit) {
        case HEARTS: cout << "H "; break;
        case DIAMONDS: cout << "D "; break;
        case CLUBS: cout << "C "; break;
        case SPADES: cout << "S "; break;
        }
    }
};

class Deck {
private:
    vector<Card> deck;

public:
    Deck() {
        initializeDeck();
    }

    void initializeDeck() {
        for (int v = 1; v <= 13; ++v) {
            for (int s = HEARTS; s <= SPADES; ++s) {
                deck.push_back(Card(v, static_cast<Suit>(s)));
            }
        }

        for (int s = HEARTS; s <= SPADES; ++s) {
            deck.push_back(Card(14, static_cast<Suit>(s)));
        }
    }

    void shuffleDeck() {
        srand(static_cast<unsigned int>(time(0)));
        random_shuffle(deck.begin(), deck.end());
    }

    vector<Card> dealHand(int numCards) {
        vector<Card> hand;
        for (int i = 0; i < numCards; ++i) {
            hand.push_back(deck.back());
            deck.pop_back();
        }
        return hand;
    }

    int remainingCards() const {
        return deck.size();
    }
};

class Player {
private:
    vector<Card> hand;
    int score;

public:
    Player() : score(0) {}

    void receiveCards(vector<Card> cards) {
        hand = cards;
    }

    int calculateScore(bool countHeartsDouble) {
        score = 0;
        for (const Card &card : hand) {
            if (countHeartsDouble && card.getSuit() == HEARTS) {
                score += card.getValue() * 2;
            } else {
                score += card.getValue();
            }
        }
        return score;
    }

    void printHand() const {
        for (const Card &card : hand) {
            card.print();
        }
        cout << endl;
    }

    int getScore() const {
        return score;
    }
};

int main() {
    int numPlayers;
    cout << "Enter the number of players: ";
    cin >> numPlayers;

    if (numPlayers < 1 || numPlayers > 26) {
        cout << "Invalid number of players. Please enter a number between 1 and 26." << endl;
        return 1;
    }

    Deck deck;
    deck.shuffleDeck();

    vector<Player> players(numPlayers);
    int cardsPerPlayer = deck.remainingCards() / numPlayers;

    for (int i = 0; i < numPlayers; ++i) {
        players[i].receiveCards(deck.dealHand(cardsPerPlayer));
    }

    vector<int> scores(numPlayers);
    vector<int> scoresDoubleHearts(numPlayers);

    cout << "Results without counting Hearts double:" << endl;
    for (int i = 0; i < numPlayers; ++i) {
        cout << "Player " << i + 1 << ": ";
        players[i].printHand();
        scores[i] = players[i].calculateScore(false);
        cout << "Sum: " << scores[i] << endl;
    }

    cout << "\nResults with counting Hearts double:" << endl;
    for (int i = 0; i < numPlayers; ++i) {
        cout << "Player " << i + 1 << ": ";
        players[i].printHand();
        scoresDoubleHearts[i] = players[i].calculateScore(true);
        cout << "Sum: " << scoresDoubleHearts[i] << endl;
    }

    auto maxScoreIt = max_element(scores.begin(), scores.end());
    auto maxScoreDoubleHeartsIt = max_element(scoresDoubleHearts.begin(), scoresDoubleHearts.end());

    int winner = distance(scores.begin(), maxScoreIt) + 1;
    int winnerDoubleHearts = distance(scoresDoubleHearts.begin(), maxScoreDoubleHeartsIt) + 1;

    cout << "\nWinner without counting Hearts double: Player " << winner << " with sum " << *maxScoreIt << endl;
    cout << "Winner with counting Hearts double: Player " << winnerDoubleHearts << " with sum " << *maxScoreDoubleHeartsIt << endl;

    return 0;
}

