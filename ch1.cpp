#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Tell me your age:";
    cin>>age;
    // if((age<18) && (age>0)){
    //     cout<<"You are a kid and you cannot come to my party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"You are a kid and you will get kid pass for the party"<<endl;
    // }
    // else if(age<=0){
    //     cout<<"You are not yet born"<<endl;
    // }
    // else{
    //     cout<<"You can come to my party";
    // }

     switch (age)
     {
     case 18:
        cout<<"You are 18";
        break;
     case 22:
        cout<<"You are 22";
        break;
     case 25:
        cout<<"You are 25";
        break;
     default:
        cout<<"No special cases";
        break;
     }
 
     cout<<"Done with switch case";
     goto age;
     
    return 0;
}