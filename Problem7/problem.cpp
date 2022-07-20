#include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "Enter any number:";
    cin >> input;
    //Original solution's screenshot attached:)
    if(input<0){
        int output=input * (-1);
        cout<<"You have Entered:"<<output;
    }
    else{
        cout<<"You have entered:"<<input;
    }

    return 0;
}