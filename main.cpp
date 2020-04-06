#include <iostream>
#include <string>
#include <fstream>
#include "PlayerOne.h"

using namespace std;

void OutPutConsole(int x, int y, char player);
void OutputFile (int x, int y, char player);

int main ()
{
    PlayerOne tic;
    tic.Message[0] = OutPutConsole;
    tic.Message[1] = OutputFile;

    tic.Move(1, 2, 'X');
    tic.Move(1, 1, 'O');

}


void OutPutConsole(int x, int y, char player)
{
     cout << endl;
     cout << "Player " << player << " made a move " << "X - " << x << ", Y - " << x << endl;
     cout << endl;
}

void OutputFile(int x, int y, char player) {
    ofstream file("file.log", ios::app);
    if (file.is_open()) {
        file << "Player " << player << " made a move " << " x - " << x << ", y - " << y << endl;
    }
    file.close();
}
