#include <iostream>
#include <sstream>
using namespace std;

class Student
{
    int age, standard;
    string first_name, last_name;

public:
    void set_standard(int Std)
    {
        standard = {Std};
    }
    void set_first_name(string Fisrtname)
    {
        first_name = Fisrtname;
    }
    void set_last_name(string Lastname)
    {
        last_name=Lastname;
    }
    void set_age(int Age)
    {
        age = {Age};
    }

    int get_age() { return age; }
    string get_first_name() { return first_name; }
    string get_last_name() { return last_name; }
    int get_standard() { return standard; }

    string to_string()
    {
       stringstream ss;
        string str;
        ss << age << ", " << first_name << ", " << last_name << ", " << standard;
        ss >> str;
        return str;
    }
};

int main()
{
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}