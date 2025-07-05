// 16 june 2025
#include <iostream>
using namespace std;

void Interface();
void Airthmatic_Operations_menu();
void Conversion_menu();
int Addition(int a, int b);
int Substraction(int a, int b);
int Multiplication(int a, int b);
int Divsion(int a, int b);
void Celcius_to_Faraheniet();
void Faraheniet_to_Celcius();
void Decimal_to_Binary();
void Binary_to_Decimal();
void BMI_Calulator();
void Age_Calulator();
void Stopwatch_Timer();
void Currency_Converter();

int main(){

    Interface();

    cout<<"****Thanks****\n";
    return 0;
}

void Interface(){

int number;
cout<<"****Welcome to command line calulator****\n"; 
cout<<R"(Select Category:
1 = Airthmatic Operations = (Addition,Substraction,Division & Multiplication)
2 = Conversions = (Binary,Temperature & Currency)
3 = BMI Calulator
4 = Age Calulator
5 = Stopwatch Timer)"<<'\n';
cin>> number;
if (number==1){
    Airthmatic_Operations_menu();  
}
else if(number==2){
    Conversion_menu();
}
else if(number==3){
   BMI_Calulator();
}
else if(number==4){
   Age_Calulator();
}
else if(number==5){
   Stopwatch_Timer();
}
else{
    cout<<"Enter a valid number\n";
}
}

void Airthmatic_Operations_menu(){
    int a;
    int b;
    char operators;

cout<<"Enter value of a\n";
cin>>a;

cout<<"Enter value of b\n";
cin>>b;

cout<<R"(
A = Addition 
S = Substraction
M = Multiplication
D = division
X = Exit)"<<'\n';
cin>>operators;

    if(operators == 'A' ||operators =='a'){
        Addition(a,b);
    }
    else if(operators == 'S' ||operators =='s'){
        Substraction(a,b);
    }
    else if(operators == 'M' ||operators =='m'){
        Multiplication(a,b);
    }
    else if(operators == 'D' ||operators =='d'){
        Divsion(a,b);
    }
    else if(operators == 'X' ||operators =='x'){
        Interface();   
    } 
    else{
        cout<<"Enter a valid character\n";
    }
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

void Conversion_menu(){
    char converter;

cout<<R"(
D = Binary to Decimal
B = Decimal to Binary
C = Celcius to Faraheniet
F = Faraheniet to Celcius
$ = Currency Converter
X = Exit)"<<'\n';
cin>>converter;

    if(converter == 'F' ||converter =='f'){
        Celcius_to_Faraheniet();
    }
    else if(converter == 'C' ||converter =='c'){
        Faraheniet_to_Celcius();
    }
    else if(converter == 'B' ||converter =='b'){
        Decimal_to_Binary();
    }
    else if(converter == 'D' ||converter =='d'){
        Binary_to_Decimal();
    }
    else if(converter == '$'){
        Currency_Converter();
    }
    else if(converter == 'X' |converter =='x'){
        Interface();   
    } 
    else{
        cout<<"Enter a valid character\n";
    }
}

void Celcius_to_Faraheniet(){
    double temperature;

    cout<<"Enter Temperature in Celcius\n";
    cin>>temperature;

    cout<<(temperature*(9.0/5.0)+32)<<"F\n";
}

void Faraheniet_to_Celcius(){
    double temperature;

    cout<<"Enter Temperature in Faraheniet:\n";
    cin>>temperature;

    cout<<((temperature-32)*5.0/9.0)<<"C\n";
}

void Decimal_to_Binary(){

    int decimal_number; 
    int Binary_number =0;
    int remainder;
    int place=1;
    

    cout<<"Enter decimal number\n";
    cin>>decimal_number;

    int Orignal_Dec_number = decimal_number;

    while(decimal_number>0){
        remainder = decimal_number%2;
        Binary_number += remainder*place;
        place *= 10;
        decimal_number /= 2;
    }

    cout<<"Binary of "<<Orignal_Dec_number<<" is "<<Binary_number<<'\n';    
}

void Binary_to_Decimal(){

    int Binary_number;
    int Decimal_number = 0;
    int remainder;
    int place = 0;

    cout<<"Enter binary number\n";
    cin>>Binary_number;

    int Orignal_Bin_number = Binary_number;

    while(Binary_number > 0){
        remainder = Binary_number % 10;
        Decimal_number += remainder * (1 << place); 
        place++;
        Binary_number /= 10;
    }

    cout<<"Decimal of "<<Orignal_Bin_number<<" is "<<Decimal_number<<'\n';    
}

void BMI_Calulator(){
    double weight;
    double height;
    double BMI;

    cout<<"Enter Weight in Kg: \n";
    cin>>weight;

    cout<<"Enter height in Meter: \n";
    cin>>height;

    BMI = weight/(height*height);

    if(BMI <= 18.5){
        cout<<"Your Body Mass Index is: "<<BMI<<'\n';
        cout<<"You are Underweight: \n";
    }  
    else if(BMI <= 24.9){
        cout<<"Your Body Mass Index is: "<<BMI<<'\n';
        cout<<"You are Healthy STAY FIT!!\n";
    }
    else if(BMI <= 29.9){
        cout<<"Your Body Mass Index is: "<<BMI<<'\n';
        cout<<"You are Overweight: \n";
    }
    else{
        cout<<"Your Body Mass Index is: "<<BMI<<'\n';
        cout<<"You are Suffering From Obesity: \n";
        cout<<"PLEASE CONSULT A DOCTOR!!\n";
    }
}

void Age_Calulator(){}

void Stopwatch_Timer(){}

void Currency_Converter(){}