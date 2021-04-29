#include <iostream>

class Game
{
private:
    char *container; // This will hold all the moves
public:
    Game()
    {
        container = new char[9];
        for (int i = 0; i < 9; i++)
        {
            std::cout << container[i] << std::endl;
        }
    }
    Game(char *container) // For test purposes.
    {
        this->container = new char[9];
        for (int i = 0; i < 9; i++)
            this->container[i] = container[i];
    }
    int take_input();      // Will take input from user.
    Game &process_input(); // Will process the input.
    int *possible_moves(); // Give return an array of the number of threats.
    /*
    Eg.
    | | | | Here at position 2, there is a threat, so at index 2 of the array
    |O|X| | there will be 1. But if u see, some positions are already occupied
    |X| | | at those positions the value will be -1.
    */
    int best_move();   // using the data from possible_moves, we will calculate the best move.
    int is_finished(); // Will check if the game is finished or not.
    Game start();      // Will start the event loop.
    Game event_loop(); // Will manage the running of the game.
};
Game &Game::process_input()
{
    int inp = take_input();
    if (container[inp] == 'X' || container[inp] == 'O')
    {
        std::cout << "Enter valid num\n";
    }
    else
        container[inp] = 'X';
    return *this;
}