#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
void printHeader()
{
    cout << setw(15) << left << "Name" << setw(10) << right << "Score" << endl;
    cout << setfill('-') << setw(30) << " " << setfill(' ') << endl;
}

void printFooter(int total_Score, int student_count)
{
    double Average_score;
    if (student_count > 0)
    {
        Average_score = total_Score / student_count;
    }

    cout << setfill('-') << setw(30) << " " << endl
         << setfill(' ') << setw(25) << Average_score;
}
int countSocre(string answer_key, string key)
{
    int count = 0;
    for (int i = 0; i < answer_key.size(); i++)
    {
        if ((answer_key.at(i)) == (key.at(i)))
            count++;
    }
    return count;
}

int main()
{
    int score = 0, total_Score = 0, student_count = 0;
    string answer_key, name, key;
    ifstream fin;
    string filename;
    cout<<"Enter file name to connect : ";  // Enter file name :: responses.txt
    cin>>filename;  
    fin.open(filename);

    printHeader();
    fin >> answer_key;
    while ((fin >> name >> key))
    {

        student_count++;
        score = countSocre(answer_key, key);
        total_Score += score;
        cout << setw(15) << left << name << setw(10) << right << score << endl;
    }
    printFooter(total_Score, student_count);

    return 0;
}
