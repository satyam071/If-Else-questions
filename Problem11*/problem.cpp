#include<iostream>
using namespace std;

int main()
{
    char alphabet;
    cout<<"Enter any alphabet:";
    cin>>alphabet;
    if(alphabet>='A'&& alphabet<='Z'){
        cout<<"The entered character is in uppercase";
    }
    else if(alphabet>='a'&& alphabet<='z'){
        cout<<"The entered character is in lowercase";
    }
    else{
        cout<<"This is not a character";
    }
    return 0;
}