
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>

using namespace std;

int main()
{
    int grade1;
    int grade2;
    char white;
    cin>>grade1>>white>>grade2;
    
    if (grade1 <60 && grade2 < 60)
    {
        cout<<"student failed";
    }
    else if (grade1 >=95 && grade2 >=95)
    {
        cout<<"student grad with honors";
    }
    else
    cout<<"student graduated";
    
    

    return 0;
}
