#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
struct City
{
    string name;
    long double population;
    double cost;
};

struct Country
{
    string name;
    vector<City> cities;
};

struct Tour
{
    string Title;
    vector<Country> countries;
};

int main()
{
    int i, j, cnum1, cnum2;
    Country country;

    //     Tour tour;
    //    tour.Title = "\n\n=================Advance Tour==================\n\n";

    //    cout << "Enter number of country you want to visit : ";
    //    cin >> setfill('-') >> setw(100) >> cnum1;
    //    for (i = 0; i < cnum1; i++)
    //    {
    //        cout << "\n\nEnter [" << i + 1 << "] country name : ";
    //        cin >> country.name;

    //        cout << "How many cities to visit in this Country : ";
    //        cin >> cnum2;
    //        City city;
    //        for (j = 0; j < cnum2; j++)
    //        {
    //            cout << "\nEnter [" << j + 1 << "] city name : ";
    //            cin >> city.name;
    //            cout << "Enter [" << j + 1 << "] city population : ";
    //            cin >> city.population;
    //            cout << "Enter [" << j + 1 << "] city visit cost : ";
    //            cin >> city.cost;
    //        }
    //        country.cities.push_back(city);
    //    }
    //    tour.countries.push_back(country);

    Tour tour{
        "\n\n=================Advance Tour==================\n\n",
        {
            {
                "India",
                {
                    {"Delhi", 4184219, 11000},
                    {"Faridabad", 54300, 4500},
                },
            },
            {
                "America",
                {{"Brazil", 45343214, 1113242},
                 {"maxico", 1311123, 12321312}},
            },
        },
    };

    cout << tour.Title;
    cout << setw(15) << left << "country";
    cout << setw(15) << left << "City";
    cout << setw(15) << right << "Population";
    cout << setw(15) << setprecision(2) << fixed << right << "cost" << endl;
    cout << "-----------------------------------------------------------" << endl;
    for (auto con : tour.countries)
    {

        for (i = 0; i < con.cities.size(); i++)
        {
            cout << setw(15) << left << ((i == 0) ? con.name : " ");
            cout << setw(15) << left << con.cities.at(i).name;
            cout << setw(15) << right << con.cities.at(i).population;
            cout << setw(15) << right << con.cities.at(i).cost;
            cout << endl
                 << setw(10);
        }
        cout << endl;
    }
}