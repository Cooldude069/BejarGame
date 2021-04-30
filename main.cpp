#include <iostream>
#include "src/Game/Game.hpp"
#include "src/Game/take_input.hpp"
#include "src/Game/possible_moves.hpp"
#include "src/Game/best_move.hpp"
using namespace std;

int main()
{
    char *cont;
    cont = new char[9];
    /*
    |X| | |
    |X|O| |
    |O| |X|
    */
    cont[0]='X';
    cont[3]='X';
    cont[4]='O';
    cont[6]='O';
    cont[8]='X';
    Game g(cont);
    auto pm = g.possible_moves();
    for (int i = 0; i < 9; i++)
        cout << pm[i] << endl;
    int t=g.best_move();
    cout<<"Best move is"<<g.best_move()<<endl;
    return 0;
}