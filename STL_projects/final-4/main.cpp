#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <stdexcept>

using namespace std;

class Bukva {
public:
    char letter;
    bool guessed;

    Bukva(char c) : letter(c), guessed(false) {}
};

class Besilka {
private:
    vector<Bukva> word;
    int guesses;

    void printWord() {
        for (const auto &cg : word) {
            if (cg.guessed) {
                cout << cg.letter << " ";
            } else {
                cout << "- ";
            }
        }
        cout << endl;
    }

public:
    Besilka(const string &wordStr, int numGuesses) : guesses(numGuesses) {
        for (char c : wordStr) {
            word.emplace_back(c);
        }
    }

    void play() {
        while (guesses > 0) {
            printWord();
            cout << "You have " << guesses << " guesses left." << endl;

            string input;
            cout << "Enter your guess: ";
            cin >> input;

            try {
                if (!all_of(input.begin(), input.end(), ::islower)) {
                    throw invalid_argument("Input must contain only lowercase letters.");
                }
            } catch (const invalid_argument &e) {
                cout << e.what() << endl;
                continue;
            }

            bool correctGuess = false;
            for (char c : input) {
                for (auto &cg : word) {
                    if (cg.letter == c && !cg.guessed) {
                        cg.guessed = true;
                        correctGuess = true;
                    }
                }
            }

            if (!correctGuess) {
                guesses--;
            }

            if (all_of(word.begin(), word.end(), [](const Bukva &cg) { return cg.guessed; })) {
                cout << "Congratulations! You guessed the word: ";
                printWord();
                return;
            }
        }

        cout << "Game over! You ran out of guesses." << endl;
        cout << "The word was: ";
        for (const auto &cg : word) {
            cout << cg.letter;
        }
        cout << endl;
    }
};

int main() {
    string word;
    cout << "Enter the word to guess: ";
    cin >> word;

    for (char &c : word) {
        c = tolower(c);
    }

    int numGuesses;
    cout << "Enter the number of guesses allowed: ";
    cin >> numGuesses;

    Besilka game(word, numGuesses);
    game.play();

    return 0;
}
