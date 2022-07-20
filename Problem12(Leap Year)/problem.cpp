#include <iostream>
using namespace std;

int main()
{    //Logic attached;)(image)
    int year;
    cout << "Enter Year:";
    cin >> year;
    int leapyear;
    leapyear = year % 4;
    
    if (leapyear == 0)
    {
        int first, second, third, a, b, c;
        third = year % 1000;  // 024
        a = third / 100;      // 0
        second = third % 100; // 24
        b = second / 10;      // 2
        first = second % 10;  // 4
        c = first;            // 4
        if (c == 0 && b == 0)
        {
            int leapyear2;
            leapyear2 = year % 400;
            if (leapyear2 == 0)
            {

                cout << "This is leap year";
            }
            else{
                cout << "This is not a leap year";
            }
        }
        else
        {
            cout << "This is leap year";
        }
    }
    else
    {
        cout << "This is not a leap year";
    }
    return 0;
}