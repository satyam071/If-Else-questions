#include <iostream>
using namespace std;

int main()
{
    float totaldays;
    float attendence;
    cout << "Enter number of classes held:";
    cin >> totaldays;
    cout << "Enter number of classes attended:";
    cin >> attendence;
    int percentage;
    percentage = (attendence / totaldays) * 100;
    if (percentage > 75)
    {
        cout << "You are allowed to sit in exam";
    }
    else
    {
        cout << "You are not allowed to sit in exam";
    }
    return 0;
}