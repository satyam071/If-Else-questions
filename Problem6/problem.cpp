#include<iostream>
using namespace std;

int main()
{
    int age1;
    int age2;
    int age3;
    cout<<"Enter Age of first person:";
    cin>>age1;
    cout<<"Enter Age of second person:";
    cin>>age2;
    cout<<"Enter Age of third person:";
    cin>>age3;

    if(age1<age2 && age1<age3){
        cout<<"Youngest age is:"<<age1<<endl;
    }
    else if(age2<age1 && age2<age3){
        cout<<"Youngest age is:"<<age2<<endl;
    }
    else{
        cout<<"Youngest age is:"<<age3<<endl;
    }
    if(age1>age2 && age1>age3){
        cout<<"Oldest age is:"<<age1<<endl;
    }
    else if(age2>age1 && age2>age3){
        cout<<"Oldest age is:"<<age2<<endl;
    }
    else{
        cout<<"Oldest age is:"<<age3<<endl;
    }
    return 0;
}