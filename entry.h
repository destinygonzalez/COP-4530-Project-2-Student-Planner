//this is the header file for the entry class which is used to store the name and deadline of the entry
//will be used in the linked list to store each entry and will be called in the main function to make a new entry and add it to the list

#ifndef ENTRY_H //guards needed for header files to make sure its only used once in the whole program
#define ENTRY_H

#include <string> //string library to use string data type
using namespace std; 

class Entry{ //entry class to store the name and deadline of each entry

    public: //public beacuse we want other classees to be able access these attributes and functions
        string name;
        string deadline;

        Entry(string n = "", string d = ""){ //intilize name and deadline as default empty string types
            name = n; //name is set to n and deadline is set to d
            deadline = d;
        }

};

#endif //end the header file with its guard

