/*
* Title: Math Tutor
* Programmer (s): Colton McQueen
* Date: 2025.10.23
* Github: https://github.com/CMcQueen15/MathTutorV2
* Description: An easy math tutor for students to use
                *
*/

#include <iostream>

using namespace std;

int main()
{
    string name;
    int leftn = 5;
    int rightn = 6;
    int answer;

    //   /\  Input any new values here please!
    cout << "*********************************" << endl;
    cout << "__  __       _   _       _____      _              __     ___ \n";
    cout << "|  \\/  | __ _| |_| |__   |_   _|   _| |_ ___  _ __  \\ \\   / / |\n";
    cout << "| |\\/| |/ _` | __| '_ \\    | || | | | __/ _ \\| '__|  \\ \\ / /| |\n";
    cout << "| |  | | (_| | |_| | | |   | || |_| | || (_) | |      \\ V / | |\n";
    cout << "|_|  |_|\\__,_|\\__|_| |_|   |_| \\__,_|\\__\\___/|_|       \\_/  |_|\n";

    cout << endl << "*********************************" << endl;
    cout << "Math is good for your brain." << endl;
    cout << "So lets feed your brain some math!" << endl << endl;

    cout << "What is your name my pupil? :";
    cin >> name;

    cout << "Hello ";
    cout << name << ". Lets learn some math!!!" << endl;
    // This is the introduction of the program before the math. Only one string value used.
    cout << endl << endl;

    cout << "What is " << leftn << " + " << rightn << "?" << endl;
    // Asking the big question
    cin >> answer;
    // Getting an answer for the question
    
    cout << "Thank you for using our beta version of Math Tutor! More is on the way." << endl;


    return 0;
}