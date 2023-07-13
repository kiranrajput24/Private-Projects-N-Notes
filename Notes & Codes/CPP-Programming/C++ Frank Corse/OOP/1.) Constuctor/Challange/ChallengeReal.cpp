#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Movie
{
private:
    string name;
    string rating;
    int watched;

public:
    Movie(string name, string rating, int watched)
     : name{name}, rating(rating), watched(watched)
    {
    }



    Movie(const Movie &source) : Movie{source.name, source.rating, source.watched}
    {
    }

    ~Movie()
    {
    }

    void set_name(string name) { this->name = name; }
    string get_name() const { return name; }

    void set_rating(string rating) { this->rating = rating; }
    string get_rating() const { return rating; }

    void set_watched(int watched) { this->watched = watched; }
    int get_watched() const { return watched; }

    void increment_watched() { ++watched; }

    void display() const
    {
        cout << "Name : " << name << " rating : " << rating << " Watched Count : " << watched << endl;
    }
};

class Movies
{
private:
    vector<Movie> movies_vec;

public:
    Movies()
    {
    }

    ~Movies()
    {
    }

    bool add_movie(string name, string rating, int watched)
    {
        for (const Movie &movie : movies_vec)
        {
            if (movie.get_name() == name)
                return false;
        }
        Movie temp{name, rating, watched};
        movies_vec.push_back(temp);
        return true;
    }

    bool increment_watched(string name)
    {
        for (Movie &movie : movies_vec)
        {
            if (movie.get_name() == name)
            {
                movie.increment_watched();
                return true;
            }
        }
        return false;
    }

    void display() const
    {
        if (movies_vec.size() == 0)
        {
            cout << "Sorry, no movies to Display\n\n";
        }
        else
        {
            cout << "\n===================================\n";
            for (const auto &movie : movies_vec)
            {
                movie.display();
            }
            cout << "\n====================================\n";
        }
    }
};

// driver fun

int main()
{
    Movies my_movies;
    my_movies.display();
    my_movies.add_movie("big","pg-13",2);
    
    char key;
    string movie_name;
    string movie_rate;
    int watched_count;
    while (1)
    {
        cout << "\nN  for Enter new Movie Name : \nI  for Increment Movie Watched count :\nD  for Display  Movies list :\nQ  for quite : \n\n\nEnter your Choice : ";
        cin >> key;
        key = toupper(key);
        switch (key)
        {
        case 'N':
            cout << "Enter movie name :";
            cin.ignore();
            getline(cin, movie_name);
            cout << "Enter movie rate between (0-6) :";
            cin >> movie_rate;
            cout << "Enter number for how many times you watched movie : ";
            cin >> watched_count;
            my_movies.add_movie(movie_name, movie_rate, watched_count);
            break;

        case 'I':
            cout << "Enter movie name :";
            cin.ignore();
            getline(cin, movie_name);
            my_movies.increment_watched("movie_name");
            break;

        case 'D':
            my_movies.display();
            break;

        case 'Q':
            exit(0);
            break;

        default:
            cout << "\n-------------------------PLease Enter valid Option : -------------------------- \n";
            break;
        }
    }

    return 0;
}