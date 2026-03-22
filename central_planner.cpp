//this is the file with the actual functions that will be called in the main function

#include "planner_logic.h"
#include <iostream>

void plannerLogic:: addEntry(string name, string deadline){ //call function to make new entry and add it to the list

    undoButton.push(entryStack); //pushes the current stack of entries to undo before adding a new entry so that we can undo this action later if needed
    entryStack.push_back(Entry(name, deadline)); //add new entry to the stack

    cout << "Your entry has been added to your planner!" << endl; //check in message
};


void plannerLogic:: deleteEntry(){ //call the function that will delete the most recent entry in the list

    if (entryStack.empty()) {
        cout << "Nothing to delete!" << endl; 
        return; //if stack is empty, cannot delete 
    }

    undoButton.push(entryStack); //push the current stack to undo stack before deleting so we can undo later if needed
    entryStack.pop_back(); //delete the recent most entry

    cout << "Latest entry was deleted from this stack!" << endl; //check in message
}; 


void plannerLogic::undoDelete(){ //call the function that will undo the action of the delete button

    if (undoButton.isEmpty()) {
         cout << "Nothing we can undo!" << endl; 
         return; //if even the undo stack is empty, we cannot undo anything
    }

    entryStack = undoButton.pop(); 
    cout << "Latest delete was undone" << endl; //delete the recent most entry from the undo stack and make it the current stack

};


void plannerLogic::showEntries(){ //call the function that will show all the entries to the user

    if (entryStack.empty()) {
        cout << "No tasks yet, add some and start planning!" << endl; 
        return; //if empty, no tasks to show
    }

    
    cout << "Your tasks are: " << endl;

    for (int i = 0; i < entryStack.size(); i++){ //loop through the stack and output the name and deadline of each entry
        cout << "- " << entryStack[i].name << " due " << entryStack[i].deadline << endl;
    } 
}; 
