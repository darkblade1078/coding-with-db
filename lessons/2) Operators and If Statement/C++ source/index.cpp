#include <iostream>
#include <string>

using namespace std;

int main()
{

    int number1 = 10;
    int number2 = 25;

    // can use the result of an equation as an variable
    int result1 = 10 * 5;

    // can use variables as well
    int result2 = number1 + number2;

    // statement is true since number1 is equal too number1
    if (number1 == number1)
    {
        cout << "it works" << endl;
    }

    // is true because number1 and number2 is equal to 25
    if (number1 + number2 == 35)
    {
        cout << "it's true" << endl;
    }

    // is false because number1 is not equal to 11
    if (number1 == 11)
    {
        cout << "it's not true" << endl;
    }

    // is false because result1 does not equal to 49
    if (result1 == 49)
    {
        cout << "this is the if statement" << endl;
    }
    // since the first statement did not pass, it will run this one
    else
    {
        cout << "this is the else statement" << endl;
    }

    // false because result1 is not equal to 49
    if (result1 == 49)
    {
        cout << "first if" << endl;
    }

    // this will run because if statement 1 failed and result1 and result2 are equal to 35 and 50
    if (result1 == 35 && result2 == 50)
    {
        cout << "second if" << endl;
    }
    // this statement will not run since if statement 2 is true
    else
    {
        cout << "else statement" << endl;
    }
}