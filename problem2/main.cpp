#include <iostream>

using namespace std;

int main()
{
    float sell, buy, amount, money;
    string curr;
    bool like;
    cout<< "Enter one of the following currencies:\n"<< "* Euro\n"<<"$ Dollar\n"<<"+ British Pound\n"<<"Y yen\n"<< "R Riyal\n";
    cin>>curr;
    cout<<"Enter the selling price:\n";
    cin>> sell;
    cout<<"Enter the buying price:\n";
    cin>> buy;
    cout<< "Would you like to buy or sell (0 for buy, 1 for sell)\n";
    cin>> like;
    if (like==0)
    {
        cout<< "Please enter the amount: \n";
        cin>>amount;
        money=amount*sell;
        cout<<money;
    }
    else if (like==1)
    {
        cout<< "Please enter the amount: \n";
        cin>>amount;
        money=amount*buy;
        cout<<money;
    }
    return 0;
}
