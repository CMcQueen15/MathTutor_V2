/*
* Title: Math Tutor
* Programmer (s): Colton McQueen
* Date: 2025.10.23
* Github: https://github.com/CMcQueen15/MathTutorV2
* Description: An easy math tutor for students to use
                *
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    string name;
    int leftn = 0;
    int rightn = 0;
    int mathType = 0;
    int userAnswer = 0;
    int correctAnswer = 0;
    string userName = "?";
    char mathSymbol = '?';

    // Seed the random number generator
    srand(time(0));
    

    //   /\  Input any new values here please!
    cout << "*********************************" << endl;
    cout << "__  __       _   _       _____      _              \n";
    cout << "|  \\/  | __ _| |_| |__   |_   _|   _| |_ ___  _ __ \n";
    cout << "| |\\/| |/ _` | __| '_ \\    | || | | | __/ _ \\| '__| \n";
    cout << "| |  | | (_| | |_| | | |   | || |_| | || (_) | |      \n";
    cout << "|_|  |_|\\__,_|\\__|_| |_|   |_| \\__,_|\\__\\___/|_|     \n";

    cout << endl << "*********************************" << endl;
    cout << "Math is good for your brain." << endl;
    cout << "So lets feed your brain some math!" << endl << endl;

    cout << "What is your name my pupil? :";
    cin >> name;

    cout << "Hello ";
    cout << name << ". Lets learn some math!!!" << endl;
    // This is the introduction of the program before the math. Only one string value used.
    cout << endl << endl;

    // Generate random numbers
    leftn = rand() % 10 + 1;
    rightn = rand() % 10 + 1;
    mathType = rand() % 4 + 1;

    // Switch based on math type
    switch (mathType) {
        case 1:
            mathSymbol = '+';
            correctAnswer = leftn + rightn;
            break;
        case 2:
            mathSymbol = '-';
            correctAnswer = leftn - rightn;
            break;
        case 3:
            mathSymbol = '*';
            correctAnswer = leftn * rightn;
            break;
        case 4:
            mathSymbol = '/';
            // Avoid divide-by-zero and force integer division
            if (rightn == 0) rightn = 1;
            correctAnswer = leftn / rightn;
            break;
        default:
            cout << "Invalid math type generated!" << endl;
            
            return -1;
    }
    
    cout << "Thank you for using our beta version of Math Tutor! More is on the way." << endl;


    return 0;
}