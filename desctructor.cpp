// desctructor in c++ in hindi
/*
when does the desctructor get called?
A desctructor is automatically called when :
1) The program finished execution 
2) When a scope (the ()paranthesis containing local variable ends )
*/

#include <iostream>
using namespace std;

class helloworld {
    public :
    helloworld( ) {
        cout<<"constructor is called "<<endl;
    }
    // desctructor 
    ~helloworld() {
        cout<<"desctructor is called "<<endl;
    }
    // member fuction 
    void display() {
        cout<<"hello world from member function "<<endl;
    }
};

int main () {
    helloworld object; // obect created 
    object.display ();
    
}
