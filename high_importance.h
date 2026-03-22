//this is the header file for the priority class which is inherited from the entry class 
//it stores the name, deadline, and level of importance for the entry

#ifndef HIGH_IMPORTANCE_H
#define HIGH_IMPORTANCE_H //guards needed for header files to make sure its only used once in the whole program

#include "entry.h" //include entry header file to use the entry class

class highImportance : public Entry { //inherited class from entry class to store the name, deadline, and importance level of each entry
    public:
        int level;
        highImportance(string n = "", string d = "", int l = 1) : Entry(n,d){ //initialize attributes, new and inherited
            level = l; //level is set to l
        }
};

#endif  //end the header file with its guard
