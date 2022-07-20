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
    if (percentage < 75)
    {
        char medical;
        cout << "Do you have medical cause(Y/N):";
        cin >> medical;
        // if (medical=='Y','y')
        // {
        //     cout << "You are allowed to sit in exam";
        // }
        // else if(medical=='N','n')
        // {
        //     cout << "You are not allowed to sit in exam";
        // }
        // else{
        //     cout << "!! Wrong input try to answer in Y/N";
        // }
        switch (medical)
        {
        case 'Y':
            cout << "You are allowed to sit in exam";
            break;
        case 'N':
            cout << "You are not allowed to sit in exam";
            break;

        default:
            cout << "Invalid choice try to answer in Y/N";
            break;
        }
    }
    else
    {
        cout << "You are allowed to sit in exam";
    }
    return 0;
}