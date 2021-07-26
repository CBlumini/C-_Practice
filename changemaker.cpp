
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>

using namespace std;

int main()
{
    int quarters;
    int dimes;
    int nickels;
    int penny;
    
    int val_quarter = 25;
    int val_dime = 10;
    int val_nickel = 5;
    int val_penny = 1;
    
    int val_cents;
    int val_dollars;
    
    
    cout<<"Enter the Dollars"<<endl;
    cin>>val_dollars;
    
    cout<<"Enter the Cents"<<endl;
    cin>>val_cents;
    
    val_cents = (val_dollars*100)+val_cents;
    quarters = val_cents/val_quarter;
    cout<<"The number of quarters is "<<quarters<<endl;
    
    val_cents = val_cents - (quarters*val_quarter);
    dimes = val_cents/val_dime;
    cout<<"The number of dimes is "<<dimes<<endl;
    
    val_cents = val_cents - (dimes*val_dime);
    nickels = val_cents/val_nickel;
    cout<<"The number of nickels is "<<nickels<<endl; 
    
    val_cents = val_cents - (nickels*val_nickel);
    penny = val_cents/val_penny;
    cout<<"The number of pennies is "<<penny<<endl; 
    
    
    return 0;
}

