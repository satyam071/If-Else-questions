#include<iostream>
using namespace std;

int main()
{
    int a , first , second , third , fourth;
    cout<<"Enter any 4 digit number:";
    cin>>a;
    fourth=a/1000;
    a=a%1000;
    third=a/100;
    a=a%100;
    second=a/10;
    a=a%10;
    first=a;
    cout<<first<<second<<third<<fourth;

    return 0;
}