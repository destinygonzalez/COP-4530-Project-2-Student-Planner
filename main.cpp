//main function that interacts with the user and calls the planner_logic file to make the planner work

#include <iostream>
#include <string>
#include "planner_logic.h"

using namespace std;

int main(){
    plannerLogic Planner; //make an instance of plannerLogic to call the functions from that file
    char option; //will store the option the user chooses
    string name, deadline;

    cout << "Welcome to our USF Planner!" << endl;

    //welcome message with options for the user
    do{
        cout << "\nPlease select an option by entering the corresponding character:" << endl;
        cout << "Show all the entries (s)" << endl;
        cout << "Add a new entry (a)" << endl;
        cout << "Delete the last entry (d)" << endl;
        cout << "Undo the last action (u)" << endl;
        cout << "Exit the planner (e)" << endl;

        cin >> option; //take in answer and store the option
        cin.ignore(1000, '\n'); //clears the leftover \n after entering letter input

        if (option == 's'){
            Planner.showEntries(); //show all the entries to the user by called the function from another file
        }
        else if (option == 'a') { //add entries to the stack by calling the function from another file
            cout << "Task name: ";
            getline(cin, name);

            cout << "Task Deadline: ";
            getline(cin, deadline); //reads the entire line

            Planner.addEntry(name, deadline); //take in name and deadline as parameters
        }
        else if (option == 'd'){
            Planner.deleteEntry(); //delete the entry by calling the function from another file
        } 
        else if(option == 'u') {
            Planner.undoDelete(); //undo the deleted action by calling the function from the other file
        }
        else if(option == 'e'){
            cout << "Bye Bye! Log back in soon for a lot more progress!" << endl; //exit the planner
        } 
        else{
            cout << "Invalid choice, try again!" << "\n"; //invalid choice
        }

    } while (option != 'e');

    return 0;

}
