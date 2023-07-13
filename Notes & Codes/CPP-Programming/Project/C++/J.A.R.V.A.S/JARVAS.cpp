#include <bits/stdc++.h>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include <string.h>
#include <iomanip>
using namespace std;

void greetings()
{
    time_t now = time(0);
    tm *time = localtime(&now);

    if (time->tm_hour < 12)
    {
        cout << " Good morning Master Kiran" << endl;
        string phrase = "Good Morning master Kiran";
        string command = "espeak\"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    else if (time->tm_hour < 16)
    {
        cout << " Good Afternoon Master Kiran" << endl;
        string phrase = "Good Afternoon master Kiran";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    else if (time->tm_hour < 20)
    {
        cout << " Good Evening Master Kiran" << endl;
        string phrase = "Good Evening master Kiran";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    else
    {
        cout << " Good night Master Kiran" << endl;
        string phrase = "Good night master Kiran";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
}

void datetime()
{
    time_t now = time(0);
    char *dt = ctime(&now);
    cout << "\nThe Date and time is" << endl
         << dt << endl;
}

int main()
{

    system("cls");
    cout << right << setfill('#') << setw(15) << "##"
         << "PERSONAL ASSISSTANT" << setw(15) << "##" << endl;
    string password;
    string command;
    while (1)
    {
        cout << setw(30) << setfill('*') << '*' << setw(30) << endl;
        cout << "ENTER THE PASSWORD TO CONFIRM YOU ARE MASTER KIRAN" << endl;
        cout << setw(30) << setfill('*') << '*' << setw(15) << resetiosflags << endl
             << resetiosflags;
        string phrase = "ENTER THE PASSWORD TO CONFIRM YOU ARE MASTER KIRAN";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
        cout << endl;
        cin.clear();
        getline(cin, password);

        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};
        if (password == "k")
        {
            cout << setfill('=') << setw(30) << '=' << endl;
            greetings();
            cout << setfill('=') << setw(30) << '=' << endl
                 << resetiosflags;
            int done = 1;
            while (done != 0)
            {

                cout << endl
                     << "How can i help you Master Kiran";
                string phrase = "How can i help you Master Kiran";
                string command = "espeak\"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);

                cout << endl
                     << endl
                     << "If you want to exit enter exit::";
                cout << endl
                     << "Else" << endl
                     << "Enter Your Question ===>";
                getline(cin, command);
                for (int i = 0; i < command.length(); i++)
                {
                    command[i] = toupper(command[i]);
                }
                cout << endl;
                cout << "Answer to your Question is ===>";

                if (command == "HI" || command == "HELLO")
                {
                    cout << "Hello Master KIran....." << endl;
                    string phrase = "Hello Master kiran";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if (command == "WHAT IS THE TIME")
                {
                    datetime();
                }
                else if (command == "OPEN NOTEPAD")
                {
                    cout << "openining notepad" << endl;
                    string phrase = "opening notepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }
                // else if(command=="OPEN VS CODE")
                // {
                //     cout<<"opening vs code"<<endl;
                //     string phrase ="opening Vs code";
                //     string command="espeak\""+phrase+ "\"";
                //     const char *charCommand=command.c_str();
                //     system(charCommand);
                //     CreateProcess(TEXT(""),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);


                // }
                else if (command == "OPEN YOUTUBE")
                {
                    cout << "openining YouTube" << endl;
                    string phrase = "opening youtube";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }

                else if (command == "EXIT")
                {
                    return 0;
                }
 
                else if (command == "PLAY MUSIC")
                {
                    cout << "Playing music now" << endl;
                    string phrase = "Playing music now";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL, "open", "E:\\Programming\\1Current_Works\\C++\\Project\\C++\\J.A.R.V.A.S\\Lakshya.mp3", NULL, NULL, SW_NORMAL);
                }

                else if (command == "PLAY VIDEO")
                {
                    cout << "Playing video" << endl;
                    string phrase = "Playing video";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL, "open", "E:\\Programming\\1Current_Works\\C++\\Project\\C++\\J.A.R.V.A.S\\Aashayein.mp4", NULL, NULL, SW_NORMAL);
                }
                else if (command == "close chrome browser")
                {
                    cout << "closing chrome browser" << endl;
                    string phrase = "closing chrome browser";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("TASKKILL /IM chrome.exe/F");
                }
                else
                {
                    cout << "Sorry could not undersatnd your command please try again !!!" << endl;
                    string phrase = "Sorry could not understand your command please try again";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
            }
        }
        else
        {
            cout << setfill('*') << setw(30) << '*' << endl;
            cout << "INCORRECT PASSWORD PLEASE ENTER CORRECT PASSWORD MASTER KIRAN" << endl;
            cout << setfill('*') << setw(30) << '*' << endl;
            string phrase = "INCORRECT PASSWORD PLEASE ENTER CORRECT PASSWORD MASTER KIRAN";
            string command = "espeak\"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
        }
    }

    return 0;
}