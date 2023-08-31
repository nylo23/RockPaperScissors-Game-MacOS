#include <iostream>
#include <unistd.h>
#include <cmath>
#include <term.h>

using namespace std;

int main()
{
    int rock = 1;
    int paper = 2;
    int scissors = 3;
    int player1;
    int player2;


    cout << "Player 1, Choose your weapon! [1] Rock [2] Paper [3] Scissors" << endl;

    cin >> player1;
    if (player1 == 1)
    {
        cout << "You Chose Rock\n";
             cout << "Player 2, Choose your weapon! [1] Rock [2] Paper [3] Scissors" << endl;
             cin >> player2;
             if (player2 == 1)
             {
                 cout << "You Chose Rock\n";
                 sleep(1);
                 cout << "The Winner is...\n";
                 sleep(2);
                 cout << "Tie! \n";
                 return 1;
             }
        if (player2 == 2)
        {
            cout << "You Chose Paper\n";
            sleep(1);
            cout << "The Winner is...\n";
            sleep(2);
            cout << "Player 2!\n";
            return 1;
        }
        if (player2 == 3)
        {
            cout << "You Chose Scissors\n";
            sleep(1);
            cout << "The Winner is...\n";
            sleep(2);
            cout << "Player 1!\n";
            return 1;
        }
        if (player2 > 3)
        {
            cout << "Invalid Selection\n";
            return 0;
        }

        if (player2 != 1)
        {
            cout << "Invalid Selection\n";
            return 0;
        }


    }
    if (player1 == 2)
    {
        cout << "You Chose Paper\n";
        cout << "Player 2, Choose your weapon! [1] Rock [2] Paper [3] Scissors" << endl;
        cin >> player2;
        if (player2 == 1)
        {
            cout << "You Chose Rock\n";
            sleep(1);
            cout << "The Winner is...\n";
            sleep(2);
            cout << "Player 1!\n";
            return 1;
        }
        if (player2 == 2)
        {
            cout << "You Chose Paper\n";
            sleep(1);
            cout << "The Winner is...\n";
            sleep(2);
            cout << "Tie!\n";
            return 1;
        }
        if (player2 == 3)
        {
            cout << "You Chose Scissors\n";
            sleep(1);
            cout << "The Winner is...\n";
            sleep(2);
            cout << "Player 2!\n";
            return 1;
        }
        if (player2 > 3)
        {
            cout << "Invalid Selection\n";
            return 0;
        }

        if (player2 != 1)
        {
            cout << "Invalid Selection\n";
            return 0;
        }
    }
    if (player1 == 3)
    {
        cout << "You Chose Scissors\n";

        cout << "Player 2, Choose your weapon! [1] Rock [2] Paper [3] Scissors" << endl;
        cin >> player2;
        if (player2 == 1)
        {
            cout << "You Chose Rock\n";
            sleep(1);
            cout << "The Winner is...\n";
            sleep(2);
            cout << "Player 2!\n";
            return 1;
        }
        if (player2 == 2)
        {
            cout << "You Chose Paper\n";
            sleep(1);
            cout << "The Winner is...\n";
            sleep(2);
            cout << "Player 1!\n";
            return 1;
        }
        if (player2 == 3)
        {
            cout << "You Chose Scissors\n";
            sleep(1);
            cout << "The Winner is... \n";
            sleep(2);
            cout << "Tie!\n";
            return 1;
        }
        if (player2 > 3)
        {
            cout << "Invalid Selection\n";
            return 0;
        }

        if (player2 != 1)
        {
            cout << "Invalid Selection\n";
            return 0;
        }
    }
    if (player1 > 3)
    {
        cout << "Invalid Selection\n";
        return 0;
    }

    if (player1 != 1)
    {
        cout << "Invalid Selection\n";
        return 0;
    }
    return 0;

}