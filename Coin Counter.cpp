
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
    
    
    cout<<"Enter the quarters"<<endl;
    cin>>quarters;
    
    cout<<"Enter the dimes"<<endl;
    cin>>dimes;
    
    cout<<"Enter the nickels"<<endl;
    cin>>nickels;
    
    cout<<"Enter the penny"<<endl;
    cin>>penny;
    
    cout<<"The total number of coins is "<<quarters+dimes+nickels+penny<<endl;
    
    val_cents = (val_quarter*quarters)+(val_dime*dimes)+(val_nickel*nickels)+(val_penny*penny);
    
    cout<<val_cents<<endl;
    
    cout<<"There are "<<val_cents/100<<" Dollars "<<"and "<<val_cents%100<<" Cents "<<endl;
    
    
    
    return 0;
}
