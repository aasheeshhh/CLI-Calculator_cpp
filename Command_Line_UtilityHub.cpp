// 16 june 2025
#include <iostream>
#include <ctime>
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

void Age_Calulator(){
    int birthYear, birthMonth, birthDay;
    int currentYear, currentMonth, currentDay;

    // Get current system date
    time_t now = time(0);
    tm *ltm = localtime(&now);

    currentYear = 1900 + ltm->tm_year;
    currentMonth = 1 + ltm->tm_mon;
    currentDay = ltm->tm_mday;

    cout << "**** Welcome to Age Calculator ****\n";

    // Birth Year
    cout << "Enter your Birth Year: ";
    cin >> birthYear;
    if (cin.fail() || birthYear <= 0 || birthYear > currentYear) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalid birth year entered!\n";
        return;
    }

    // Birth Month
    cout << "Enter your Birth Month (1-12): ";
    cin >> birthMonth;
    if (cin.fail() || birthMonth < 1 || birthMonth > 12) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalid birth month entered!\n";
        return;
    }

    // Birth Day
    cout << "Enter your Birth Day (1-31): ";
    cin >> birthDay;
    if (cin.fail() || birthDay < 1 || birthDay > 31) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalid birth day entered!\n";
        return;
    }

    // Calculate age
    int ageYears = currentYear - birthYear;
    int ageMonths = currentMonth - birthMonth;
    int ageDays = currentDay - birthDay;

    // Adjust for negative days
    if (ageDays < 0) {
        ageDays += 30;  // Approximation
        ageMonths--;
    }

    // Adjust for negative months
    if (ageMonths < 0) {
        ageMonths += 12;
        ageYears--;
    }

    // Display result
    cout<<"\nYour Age is: " 
        << ageYears << " years, "
        << ageMonths << " months, and "
        << ageDays << " days.\n";
}

void Stopwatch_Timer(){}

void Currency_Converter(){
    double amount,New_Amount;
    char currency,converter;

    cout<<"****Welcome to Currency Converter****\n";
    cout<<"FIXED RATES!! (Latest update JULY 2025)\n";
    cout<<"Enter Amount: \n";
    cin>>amount;
cout<<R"(In which Currency The Amount is:
EURO = E
INR = I
UAE = D
USD = $)"<<'\n';
   cin>>currency;
   currency = toupper(currency);


cout<<R"(In which Currency You want to Convert:
EURO = E
INR = I
UAE = D
USD = $)"<<'\n';
   cin>>converter;
   converter = toupper(converter);

    if(currency == converter){
        cout<<"Both selected currencies are the same. No conversion needed.\n";
        return;
    }

    // INR conversions
    else if(currency == 'I' && converter == '$'){
        New_Amount = amount * 0.012;
        cout<<amount<<" INR is "<<New_Amount<<" USD\n";
    }
    else if(currency == 'I' && converter == 'E'){
        New_Amount = amount * 0.011;
        cout<<amount<<" INR is "<<New_Amount<<" EURO\n";
    }
    else if(currency == 'I' && converter == 'D'){
        New_Amount = amount * 0.044;
        cout<<amount<<" INR is "<<New_Amount<<" AED\n";
    }

    // USD conversions
    else if(currency == '$' && converter == 'I'){
        New_Amount = amount * 83.5;
        cout<<amount<<" USD is "<<New_Amount<<" INR\n";
    }
    else if(currency == '$' && converter == 'E'){
        New_Amount = amount * 0.91;
        cout<<amount<<" USD is "<<New_Amount<<" EURO\n";
    }
    else if(currency == '$' && converter == 'D'){
        New_Amount = amount * 3.67;
        cout<<amount<<" USD is "<<New_Amount<<" AED\n";
    }

    // EURO conversions
    else if(currency == 'E' && converter == 'I'){
        New_Amount = amount * 91.8;
        cout<<amount<<" EURO is "<<New_Amount<<" INR\n";
    }
    else if(currency == 'E' && converter == '$'){
        New_Amount = amount * 1.09;
        cout<<amount<<" EURO is "<<New_Amount<<" USD\n";
    }
    else if(currency == 'E' && converter == 'D'){
        New_Amount = amount * 4.01;
        cout<<amount<<" EURO is "<<New_Amount<<" AED\n";
    }

    // AED conversions
    else if(currency == 'D' && converter == 'I'){
        New_Amount = amount * 22.27;
        cout<<amount<<" AED is "<<New_Amount<<" INR\n";
    }
    else if(currency == 'D' && converter == '$'){
        New_Amount = amount * 0.27;
        cout<<amount<<" AED is "<<New_Amount<<" USD\n";
    }
    else if(currency == 'D' && converter == 'E'){
        New_Amount = amount * 0.25;
        cout<<amount<<" AED is "<<New_Amount<<" EURO\n";
    }

    else{
        cout<<"Invalid currency option entered.\n";
    }
}