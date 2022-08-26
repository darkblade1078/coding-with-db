//a package that contains a ton of code you use in c++
#include <iostream>

//this allows you to use strings in c++
#include <string>

//the namespace
using namespace std;

//everytime you run your code, it starts here, make sure you put your code in the brackets
//also put ; at the end of everything or it will brick
int main() {

    //whole number
    int number = 1;

    //can have decimals
    float fancy_number1 = 2.6f;

    //like floats, but doesn't need the f
    double fancy_number2 = 2.5;

    //use for really big numbers
    long long_number = 294206942;
    
    //use for single letters
    char letter = 'K';

    //can be equal to true or false
    bool check = true;

    //use for text
    string name = "Bobby J";

    // cout is how you initiate the out put
    // << sets up the code to take in a string, int, variables, and what not
    // you put what you want the cose to out put after the <<
    // endl tells the code to go to a new line
    cout << "Hello, my name is " << name << "!!!!" << endl;
    cout << fancy_number1 << endl;
    cout << fancy_number2 << endl; 
    cout << long_number << endl; 
    cout << letter << endl;  
    cout << check << endl; 

    //always return a 0 or 1
    //returning 0 tells means that the operation was a success
    //returning 1 means an error happened
    return 0;
}