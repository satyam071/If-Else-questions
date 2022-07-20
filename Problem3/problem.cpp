#include<iostream>
using namespace std;

int main()
{
    int quantity;
    cout<<"Enter Quantity:";
    cin>>quantity;
    int cost;
    cost=quantity*100;

    if(cost>=1000){
        float discount;
        discount=(10/100.0)*cost;
        float totalcost;
        totalcost=cost-discount;
        cout<<"Your total cost is:"<<totalcost; 
    }
    else{
        cout<<"Your total cost is:"<<cost;
    }
    return 0;
}