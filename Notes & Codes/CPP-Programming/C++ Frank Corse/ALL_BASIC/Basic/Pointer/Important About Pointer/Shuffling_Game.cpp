#include <iostream>
#include <time.h>
using namespace std;
int cash=100;
void play(int bet)
{
    char *c = new char[3];
    c[0] = 'J';
    c[1] = 'Q';
    c[2] = 'K';
    srand(time(nullptr));
    for (int i = 0; i < 5; i++)
    {
        int x = rand() % 3;
        int y = rand() % 3;
        cout<<x<<" "<<y<<" ";
        int temp = c[x];
        c[x] = c[y];
        c[y] = temp;
    }
    int PLAYERGUESS;
    cout << "\nWhat's the position of queen 1,2,3 : ";
    cin >> PLAYERGUESS;
    if (c[PLAYERGUESS - 1] == 'Q')
    {
        cash += bet * 3;
        cout << "You Win ! Result = / " << c[0] << " " << c[1] << " " << c[2] << " "
             << "Total cash = " << cash << endl;
    }
    else
    {
        cash -= bet;
        cout << "You Loose ! Result = / " << c[0] << " " << c[1] << " " << c[2] << " "
             << "Total cash = " << cash << endl;
    }
    free(c);
}
int main()
{
    int bet;
    while (cash > 0)
    {
        cout << "\nWelcome to Virtual Casino \nTotal cash = " << cash << endl;
        cout << "\nEnter your bet amount $ : ";
        cin >> bet;
        if (bet == 0 || bet > cash)
            break;
        play(bet);
    }
}