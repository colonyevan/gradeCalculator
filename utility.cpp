/*
 * Name: Evan Colony
 * Date: 12/21/2018
 * Purpose: These functions all realte to some sort of header for the calculator. None of these do any math, simply input handeling
 * Dependencies: utility.h
 */

#include "utility.h"

#include <iostream>
#include <string>

using namespace std;

void headerHandler() {
    int userInput;
    int userInput1;
    int userInput2;
    bool continueOuter = true;
    bool continueInner = true;
    
    while (continueOuter) {
        system("CLS");
        userInput = mainHeader();

        if (userInput == 1) {
            while (continueInner) {
                userInput1 = gradeNeededHeader1();
                if (userInput1 == 4) {
                    continueInner = false;
                } else {
                    userInput2 = gradeNeededHeader2();
                    if (userInput2 == 1) {

                    } else if (userInput2 == 2) {

                    } else if (userInput2 == 3) {

                    } else if (userInput2 == 4) {

                    } else {

                    }
                }
                system("CLS");
            }
        } else if (userInput == 2) {
            userInput1 = gradeEarnedHeader1();
        } else if (userInput == 3) {
            cout << "WIP";
        } else {
            continueOuter = false;
            return;
        }
    }
}

int mainHeader() {
    int userInput;
    disclaimer();
    cout << "First, tell me what you want to do, would you like to..." << endl << endl;
    cout << '\t' << "1. Calculate Final Grade Needed" << endl;
    cout << '\t' << "2. Calculate Final Grade Recieved" << endl;
    cout << '\t' << "3. Contact me" << endl;
    cout << '\t' << "4. Quit" << endl << endl;
    cout << "Enter Choice: ";
    cin >> userInput;
    while (userInput < 1 || userInput > 4 || !cin) {
        cout << "You have entered an out of bounds or incorrect value, try again please." << endl;
        if (!cin) {
            cin.clear();
            string s;
            getline(cin, s);
            cin.good();
        }
        cout << "Please enter again, 1-4 remembder: ";
        cin >> userInput;
    }
    return userInput;
}

int gradeNeededHeader1() {
    int userInput;
    cout << "First, what kind of grade assingment system is used in this class? " << endl;
    cout << '\t' << "1. Hard, independent, percentaeg cut-off" << endl;
    cout << '\t' << "2. Ross-like curve" << endl;
    cout << '\t' << "3. Engi-like curve" << endl;
    cout << '\t' << "4. Go Back" << endl << endl;
    cout << "Enter Choice: ";
    cin >> userInput;
    while (userInput < 1 || userInput > 4 || !cin) {
        cout << "You have entered an out of bounds or incorrect value, try again please." << endl;
        if (!cin) {
            cin.clear();
            string s;
            getline(cin, s);
            cin.good();
        }
        cout << "Please enter again, 1-4 remembder: ";
        cin >> userInput;
    }
    return userInput;
}

int gradeNeededHeader2() {
    int userInput;
    cout << "Now, what is the strucutre of your class? " << endl;
    cout << '\t' << "1. Do you know every score and just need to calculate your final score? " << endl;
    cout << '\t' << "2. Are you allowed to drop certian grades grades (like homework)? " << endl;
    cout << '\t' << "3. Are you allowed to replace a grade with another grade? " << endl;
    cout << '\t' << "4. Are you allowed to replace and drop grades? " << endl;
    cout << '\t' << "5. Go back" << endl;
    cout << "Enter Choice: ";
    cin >> userInput;
    while (userInput < 1 || userInput > 5 || !cin) {
        cout << "You have entered an out of bounds or incorrect value, try again please." << endl;
        if (!cin) {
            cin.clear();
            string s;
            getline(cin, s);
            cin.good();
        }
        cout << "Please enter again, 1-4 remembder: ";
        cin >> userInput;
    }
    return userInput;
}

int gradeNeededHeader3() {
    return 0;
}

int gradeEarnedHeader1() {
    return 0;
}

void disclaimer() {
    cout << "This project makes use of applied statistics and theoretical distributions. This is not the grade you will receieve, "
         << "it is simply a grade you might receive if all of the assumption turn out to be somewhat true. This is a guide, "
         << "not gospel. ";
}
