//this is the header file with all the logic for the program, will be used in the main function to call the functions per need

#ifndef PLANNER_LOGIC_H //guards needed for header files to make sure its only used once in the whole program
#define PLANNER_LOGIC_H

#include <vector> //vector library to use the vector data type for the stack

#include "entry.h" //include the entry header file to use for the entry class
#include "high_importance.h" //same but to use the high priority class
#include "Stack.h" //include the stack header file when ready

using namespace std;

class plannerLogic{
    private:
        vector<Entry> entryStack; //vector that will store entries of the planner, will be used as the stack
        Stack<vector<Entry>> undoButton; //vector stack that will store the last states of the entryStack so that we can use it for the undo function
    public:
        void addEntry(string name, string deadline); //call function to make new entry and add it to the list
        void deleteEntry(); //call the function that will delete the most recent entry in the list
        void undoDelete(); //call the function that will undo the action of the delete button
        void showEntries(); //call the function that will show all the entries to the user
};

#endif //end the header file with its guard