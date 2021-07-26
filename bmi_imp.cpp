
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
    float weight;
    float weight_kg;
    float height;
    float height_m;
    float bmi;
    float scale;
    float val;
    
    scale = 0.01;
    
    cout << "Enter the weigth in KG" << std::endl;
    cin >> weight;
    
    weight_kg = weight*0.453592;
    
    cout<<"Enter height in meters"<<endl;
    cin>>height;
    
    height_m = height * 0.0254;
    
    bmi = weight_kg/(height_m*height_m);

    
    cout<<"bmi is "<<setprecision(4)<<bmi<<endl;
    
    return 0;
}

