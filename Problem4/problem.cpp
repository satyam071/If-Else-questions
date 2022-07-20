#include<iostream>
using namespace std;

int main()
{
    int salary;
    int serviceyears;
    cout<<"Enter your total salary:";
    cin>>salary;
    cout<<"Enter your total year of services:";
    cin>>serviceyears;

    if (serviceyears>5){
        float bonusamount;
        bonusamount= (5/100.0)*salary;
        float totalsalary;
        totalsalary= salary+ bonusamount;
        cout<<"Your Net Bonus Salary is :"<<totalsalary;

    }
    else{
        cout<<"Your salary is:"<<salary;
    }
    return 0;
}