#include <iostream>
#include "Stack.h"
#include <string>
using namespace std;

int main() {

    //
    Stack<string> noteStack;

    noteStack.push("Finish COP Assignment 3");
    noteStack.push("Start working on Robotics Lab");
    noteStack.push("Finish Stats HW");
    noteStack.push("Go to the gym at 10:00 a.m.");
    noteStack.push("Clock in to work at 5:00 p.m.");

    //Displays the top three notes 
    cout << "Top three most recent note: " << "\n";
    noteStack.peekTopThreeNotes();

    //Pulls the most recent task and displays which will be
    //completed next 
    cout << "\nThe next task to be completed is:\n";
    cout << noteStack.peek() << "\n";

    //Shows that the user has completed the task and pops it 
    //from the stack
    cout << "\nCompleting top task...\n";
    cout << "Popped: " << noteStack.pop() << "\n";

    //Will pull the next task from the list and add it to the
    //remaining two
    cout << "Updated top three tasks:\n";
    noteStack.peekTopThreeNotes();
}
