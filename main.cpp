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
    | |O| |
    | | |X|
    */
    cont[2] = 'X';
    cont[4] = 'O';
    cont[8] = 'X';
    Game g(cont);
    auto pm = g.possible_moves();
    for (int i = 0; i < 9; i++)
        cout << pm[i] << endl;
    return 0;
}
