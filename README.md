# Command Line Utility Hub (C++)

A simple and interactive command-line application built in C++ that bundles multiple daily-use utility programs into one easy-to-navigate terminal interface.

---

## Features

**Arithmetic Operations**
- Addition
- Subtraction
- Multiplication
- Division (with zero check)

**Unit Conversions**
- Decimal ↔ Binary
- Celsius ↔ Fahrenheit
- Currency Converter (INR, USD, EURO, AED — static rates as of July 2025)

**Body Mass Index (BMI) Calculator**
- Input height and weight
- Categorizes BMI as Underweight, Healthy, Overweight, or Obese

**Age Calculator**
- Takes birth date input
- Calculates precise age in years, months, and days using current system date

**Stopwatch**
- *Planned feature (to be implemented)*

---

##  How to Build & Run

1️⃣ **Compile the program**
```bash
g++ -std=c++14 UtilityHub.cpp -o UtilityHub

2️⃣ **Run the program**
```bash
./UtilityHub


Currency Conversion Rates (as of July 2025)
From	To USD	To EURO	To AED
INR	0.012	0.011	0.044
USD	—	0.91	3.67
EURO	1.09	—	4.01
AED	0.27	0.25	—

Notes:-
Age is calculated using system date at runtime.

Currency conversions use static rates, for demonstration only.

Stopwatch module is pending, to be added in future updates.

Author:-
Ashish Ligade