cout << tour.Title;
    for (auto con : tour.countries)
    {
        cout << setw(10) << left << con.name;
        for (auto cit : con.cities)
        {
            cout << setw(10) << left << cit.name;
            cout << setw(10) << right << cit.population;
            cout << setw(10) << right << cit.cost;
        }
    }