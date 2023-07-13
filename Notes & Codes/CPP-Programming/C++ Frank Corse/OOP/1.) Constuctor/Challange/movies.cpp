#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
class movie
{
    string Movie_name;
    string movie_rating=5;
    int watch_count;
    int temp_count;
    static int count;

public:
    void AskMovieDeatis()
    {
        cout << "Enter Movie name : ";
        cin>>Movie_name;
        cout << "Enter Movie Rating between 1-4 :";
        while(movie_rating>4 || movie_rating>0)
        cin >> movie_rating;
        cout << "Enter Movie watch count : ";
        cin >> watch_count;
        temp_count=++count;
    }

    // void printMoviesName(void)
    // {
    //     cout<<"Movies Name \n";
    //     for(auto name:main::movie_vec)
    //     count<<temp_count<<" "<<name[i].name<<endl;

    // }
};

int movie::count = 0;

int main()
{
    int i;
    char option;
    vector<movie> movie_vec;
    while (1)
    {
        cout << "Enter movie Details that you have watched\nIf finshed your movie list then press  : P \nFor  continue press Y " << endl;
        cin >> option;
        if (option == 'Y' || option == 'y')
        {
            movie_vec[i].AskMovieDeatis();
            i++;
        }
        else
            break;
    }

    printMoviesName();
    cout<<"hello, I'm outside of loop";
    return 0;
}