#include <iostream>
#include "src/Game/Game.hpp"
#include "src/Game/take_input.hpp"
#include "src/Game/possible_moves.hpp"
#include "src/Game/best_move.hpp"
#include "src/Game/eventloop.hpp"
using namespace std;

int main()
{
    char *cont;
    cont = new char[9];
    for (int i = 0; i < 9; i++)
    {
        cont[i] = (char)NULL;
    }

    /*
    | |O|X|
    | |O| |
    |X|X| |
    */
    cont[6] = 'X';
    cont[4] = 'O';
    cont[2] = 'X';
    cont[1] = 'O';
    cont[7] = 'X';

    Game g;
    // auto pm = g.possible_moves();
    // for (int i = 0; i < 9; i++)
    //     cout << pm[i] << endl;
    // cout << "Best move is " << g.best_move() << endl;
    g.event_loop();
    return 0;
}