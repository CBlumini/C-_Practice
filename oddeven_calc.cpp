
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>

using namespace std;

int main()
{
    int num1;
    int num2;
    int num3;
    int num4;
    int evens;
    int odds;
    char white;
    cin>>num1>>white>>num2>>white>>num3>>white>>num4;
    
    
    evens = 0;
    odds = 0;
    


    //determine if each is even or odd
    
    if (num1%2 == 0)
    {
        evens++;
        cout<<"num1 is even";
    }
    else
    {
        odds++;
        cout<<"num1 is odd";
    }
    
    if (num2%2 == 0)
    {
        evens++;
        cout<<"num2 is even";
    }
    else
    {
        odds++;
        cout<<"num2 is odd";
    }
 
     if (num3%2 == 0)
    {
        evens++;
        cout<<"num2 is even";
    }
    else
    {
        odds++;
        cout<<"num3 is odd";
    }
    
     if (num4%2 == 0)
    {
        evens++;
        cout<<"num2 is even";
    }
    else
    {
        odds++;
        cout<<"num4 is odd";
    }
    
    if (odds>evens)
        cout<<"more odds than even";
    else if (odds == evens)
        cout<<"same amount";
    else
        cout<<"more evens";
    
    return 0;
}
