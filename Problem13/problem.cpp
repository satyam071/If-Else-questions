#include <iostream>
using namespace std;

int main()
{
    char sex, marital;
    int age;
    cout << "Enter your age:";
    cin >> age;
    cout << "Enter your sex (M or F):";
    cin >> sex;
    cout << "Enter your marital status ( Y or N ):";
    cin >> marital;

    if (sex == 'F','f ')
    {
        cout << "You will work in urban areas only";
    }
    else if (sex == 'M', 'm')
    {
        if (age >= 20 && age <= 40)
        {
            cout << "You can work anywhere";
        }
        else if (age > 40 && age <= 60)
        {
            cout << "You will work in urban areas only";
        }
        else{
            cout<<"You are old now and you should retire at this age:)";
        }
    }
    else{
        cout<<"Error input try to answer in (M/F),(Y/N)";
    }
    return 0;
}