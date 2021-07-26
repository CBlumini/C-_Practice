
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
    float weight;
    float height;
    float bmi;
    float scale;
    float val;
    
    scale = 0.01;
    
    std::cout << "Enter the weigth in KG" << std::endl;
    std::cin >> weight;
    
    cout<<"Enter height in meters"<<endl;
    cin>>height;
    
    bmi = weight/(height*height);

    
    cout<<"bmi is "<<setprecision(4)<<bmi<<endl;
    
    return 0;
}

