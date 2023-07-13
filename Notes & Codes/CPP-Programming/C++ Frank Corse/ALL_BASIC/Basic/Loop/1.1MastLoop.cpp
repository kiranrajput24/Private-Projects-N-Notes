#include <iostream>
using namespace std;
#include <vector>

int main()
{
    /*     char selection;
        do
        {
            cout<<endl<<"1.DO this"<<endl<<"2.Do that"<<endl<<"3.Do something else"<<endl<<"Q for Quit"<<endl;
            cout<<"Enter your selection : "<<endl;
            cin>>selection;

            if(selection=='1')
            cout<<"You chose 1 - Doing this"<<endl;
            else if (selection=='2')
                cout<<"You chose 2-Doing That"<<endl;
            else if(selection=='3')
                cout<<"You chose 3-Doing something else"<<endl;
            else  if(selection=='Q'||selection=='q')
                cout<<"GoodBye\n";
            else
             cout<<"Unknown Option -- try again.."<<endl;

        }while(selection!='q' && selection!='Q');

    

    for (int num1{20}; num1 <= 30; num1++)
    {
        for (int num2{1}; num2 <= 10; num2++)
        {
            cout << num1 << '*' << num2 << " = " << num1 * num2 << endl;
        }
        cout << endl;
    } */

    int num, value;
    vector<int> data;
    cout << "Enter numbers which you want to insert :";
    cin >> num;

    for (int i{1}; i <= num; i++)
    {
        cout << "Enter num " << i << " data : " << endl;
        cin >> value;
        data.push_back(value);
    }

/* 
cout<<"Displaying Histogram"<<endl<<"_____________________________"<<endl;
    for (auto val : data)
    {
        for (int i{1}; i <= val; i++)
        {
            cout << "-";
        }
        cout << endl;
    } */
}