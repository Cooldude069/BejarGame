#include <iostream>
#include "src/Game/Game.hpp"
#include "src/Game/take_input.hpp"
#include "src/Game/possible_moves.hpp"
using namespace std;

int main()
{
    char *cont;
    cont = new char[9];
    /*
    | | |X|
    |X| |O|
    |X|O|O|
    */
    cont[2] = 'X';
    cont[3] = 'X';
    cont[5] = 'O';
    cont[6] = 'X';
    cont[7] = 'O';
    cont[8] = 'O';
    Game g(cont);
    auto pm = g.possible_moves();
    for (int i = 0; i < 9; i++)
        cout << pm[i] << endl;
    return 0;
}