#include<iostream>
using namespace std;

int main()
{
    int length;
    int breadth;
    cout<<"Enter length of rectangle:"<<endl;
    cin>>length;
    cout<<"Enter breadth of rectangle"<<endl;
    cin>>breadth;

    if (length==breadth)
    {
       cout<<"This is a square"<<endl;
    }
    else{
        cout<<"This is not a square"<<endl;
    }
    

    return 0;
}