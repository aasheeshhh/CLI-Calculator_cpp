// 16 june 2025
#include <iostream>
using namespace std;

int Addition(int a, int b);
int Substraction(int a, int b);
int Multiplication(int a, int b);
int Divsion(int a, int b);
void operator_selection();

int main(){
    int a,b;
    char operation;

    cout<<"****Welcome to command line calulator****\n";  
    cout<<"Enter value of a\n";
    cin>>a;
    cout<<"Enter value of b\n";
    cin>>b;

    operator_selection();

    cout<<"select operation among these\n";    
    cin>>operation;

    if(operation == 'A' || operation =='a'){
        Addition(a,b);
    }
    else if(operation == 'S' || operation =='s'){
        Substraction(a,b);
    }
    else if(operation == 'M' || operation =='m'){
        Multiplication(a,b);
    }
    else if(operation == 'D' || operation =='d'){
        Divsion(a,b);
    }
    else{
        cout<<"Enter a valid character\n";
    }

    cout<<"****Thanks****\n";

    return 0;
}

int Addition(int a, int b){
    int ans = a+b;
    cout<<"Addition of "<<a<< " and "<<b<<" is "<<ans<<'\n';
    return ans;
}
int Substraction(int a, int b){
    int ans = a-b;
    cout<<"Substraction of "<<a<< " and "<<b<<" is "<<ans<<'\n';
    return ans;
}
int Multiplication(int a, int b){
    int ans = a*b;
    cout<<"Multiplication of "<<a<< " and "<<b<<" is "<<ans<<'\n';
    return ans;
}
int Divsion(int a, int b){
    if(b==0){
        cout<<"Divsion by 0 is not allowed\n";
        return 0;        
    }
    int ans = a/b;
    cout<<"Divsion of "<<a<< " by "<<b<<" is "<<ans<<'\n';
    return ans;
}
void operator_selection(){
cout<<R"(
A = Addition 
S = Substraction
M = Multiplication
D = division)"<<'\n';
}

