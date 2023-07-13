#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <iomanip>
#include <limits>
#include <algorithm>
using namespace std;
class Song
{
    friend std::ostream &operator<<(std::ostream &os, const Song &s);
    std::string name;
    std::string artist;
    int rating;

public:
    Song() = default;
    Song(std::string name, std::string artist, int rating)
        : name{name}, artist{artist}, rating{rating} {}
    std::string get_name() const
    {
        return name;
    }
    std::string get_artist() const
    {
        return artist;
    }
    int get_rating() const
    {
        return rating;
    }

    bool operator<(const Song &rhs) const
    {
        return this->name < rhs.name;
    }

    bool operator==(const Song &rhs) const
    {
        return this->name == rhs.name;
    }
};

std::ostream &operator<<(std::ostream &os, const Song &s)
{
    os << std::setw(20) << std::left << s.name
       << std::setw(30) << std::left << s.artist
       << std::setw(2) << std::left << s.rating;
    return os;
}

void display_menu()
{
    std::cout << "\nF - Play First Song" << std::endl;
    std::cout << "N - Play Next song" << std::endl;
    std::cout << "P - Play Previous song" << std::endl;
    std::cout << "A - Add and play a new Song at current location" << std::endl;
    std::cout << "L - List the current playlist" << std::endl;
    std::cout << "===============================================" << std::endl;
    std::cout << "Enter a selection (Q to quit): ";
}

// void display_playlist(const std::list<Song> &playlist);

void play_current_song(const std::list<Song> &playlist, const auto &current_song)
{
    // display_playlist(playlist);
    cout << endl
         << "Playing : " << endl
         << *current_song << endl;
}

void display_playlist(const std::list<Song> &playlist)
{
    for_each(playlist.begin(), playlist.end(), [](Song x)
             { cout << x << endl; });
}
void play_first_song(auto &playlist, auto &current_song)
{
    current_song = playlist.begin();
    play_current_song(playlist, current_song);
}

void play_next_song(list<Song> &playlist, list<Song>::iterator &current_song)
{
    cout << "Playing next song : " << endl;
    current_song++;
    if (current_song == playlist.end())
    {
        std::cout << "Wrapping to start of playlist" << std::endl;
        current_song = playlist.begin();
    }

    play_current_song(playlist, current_song);
}
void play_previos_song(list<Song> &playlist, list<Song>::iterator &current_song)
{
    cout << "Playing previous song : " << endl;
    if (current_song == playlist.begin())
        current_song = playlist.end();
        current_song--;
    play_current_song(playlist, current_song);
}
void add_a_new_song(list<Song> playlist, list<Song>::iterator &current_song)
{
    bool done = false;
    string Name, Artist;
    int Rating;
    cout << "adding a new song : " << endl;
    cout << "Name : ";
    cin.ignore(); // flush buffer  [Remove \n ]
    getline(cin, Name);
    cout << "Artist : ";
    getline(cin, Artist);
    cout << "Rating : ";
    while (!(cin >> Rating)) // cin not get int then it gives bool value false
    {
        cout << "Error Enter Rating : ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    playlist.insert(current_song, Song{Name, Artist, Rating});
    play_previos_song(playlist, current_song);
}

int main()
{
    bool done = false;
    char ch;
    std::list<Song> playlist{
        {"God's Plan", "Drake", 5},
        {"Never Be The Same", "Camila Cabello", 5},
        {"Pray For Me", "The Weekend and K. Lamar", 4},
        {"The Middle", "Zedd, Maren Morris & Grey", 5},
        {"Wait", "Maroone 5", 4},
        {"Whatever It Takes", "Imagine Dragons", 3},
        {"rabba mer kari", "kiran", 5}};

    std::list<Song>::iterator current_song = playlist.begin();
    display_playlist(playlist);

    while (!done)
    {
        display_menu();
        cin >> ch;
        ch = toupper(ch);
        switch (ch)
        {
        case 'F':
            play_first_song(playlist, current_song);
            break;
        case 'N':
            play_next_song(playlist, current_song); // its not work

            break;
        case 'P':
            play_previos_song(playlist, current_song); // its not work

            break;
        case 'A':
            add_a_new_song(playlist, current_song);

            break;
        case 'L':
            display_playlist(playlist);

            break;
        case 'Q':
            done = true;
            break;

        default:
            cout << "Please choose valid choice : " << endl;
        }
    }

    return 0;
}