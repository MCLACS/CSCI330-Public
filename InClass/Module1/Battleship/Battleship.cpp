#include <iostream>
#include <cstdlib>
#include <ctime>
#include "../../../utilities/UserInput.h"
#include "Battleship.h"

int main()
{
    srand(time(NULL));
    
    // ------------------------------------------------
    // define and setup the ocan array...
    // ------------------------------------------------
    char ocean[ROWS][COLS] = 
    {
        '-', '-', '-', '-', '-',    
        '-', '-', '-', '-', '-',    
        '-', '-', '-', '-', '-',    
        '-', '-', '-', '-', '-',    
        '-', '-', '-', '-', '-'    
    };
    addShips(ocean);
    
    // ------------------------------------------------
    // allow the user to attempt to sink a ship...
    // ------------------------------------------------
    UserInput in;
    int tries(0);
    cout << "Try to sink my battleship." << endl;
    bool hit = false;
    do
    {
        int row = in.readInt("Enter row:");
        int col = in.readInt("Enter column:");
        hit = ocean[row][col] == '*';
        tries++;
    } while (!hit);
   
    // ------------------------------------------------
    // print success and the number of tries and 
    // then print the board...
    // ------------------------------------------------
    cout << "You sunk my battleship in " << tries << " tries." << endl;
    printBoard(ocean);
}

/*
Adds ships to the ocean array which is passed
as a parameter.  A ship is specified using a '*'.
*/
void addShips(char ary[][COLS])
{
    ary[rand() % 5][rand() % 5] = '*';
    ary[rand() % 5][rand() % 5] = '*';
    ary[rand() % 5][rand() % 5] = '*';
    ary[rand() % 5][rand() % 5] = '*';
}

/*
Prints the ocean array that is passed in a tabular
format.
*/
void printBoard(char ary[][COLS])
{
    for (int r(0); r < ROWS; r++)
    {
        for (int c(0); c < COLS; c++)
        {
            cout << ary[r][c] << " ";
        }
        cout << endl;
    }
}