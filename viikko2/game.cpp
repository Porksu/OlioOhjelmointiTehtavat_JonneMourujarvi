#include "game.h"

Game::Game(int maxNum)
{
    maxNumber = maxNum;
    cout <<"Game konstruktroi: "
            << "object initialized with "
            << maxNumber
        << " as a maximum value "
            << endl;
}

Game::~Game()
{
    cout <<"Game destruktori: object cleared from stack memory"
         << endl;
}

void Game::play()
{
    srand(time(nullptr));
    randomNumber = rand() % maxNumber;
    cout <<"Give your guess between 1-" << maxNumber << endl;
    while (playerGuess != randomNumber){
        cin >> playerGuess;
        if(playerGuess > randomNumber){
            numOfGuesses++;
            cout << "Number is smaller" << endl;
        } else if (playerGuess < randomNumber){
            numOfGuesses++;
            cout << "Number is bigger" << endl;
        }
    }
    printGameResults();
}

void Game::printGameResults()
{
    cout << "Correct Number was: " << randomNumber << endl;
    cout << "Number of guesses: " << numOfGuesses << endl;
}
