#include <iostream>
using namespace std;

double CalculateBMI(double m, double h)
{
    return (m / (h * h));
}

int main()
{
    double w = 0, h = 0, result = 0;

    cout << "BMI Calculator!\n\n";

    while (true) 
    {
        cout << "Enter your weight (kg): "; 
        cin >> w;
        cout << "Enter your height (meters): "; 
        cin >> h;

        if (w <= 0 || h <= 0) {
            cout << "ERROR: Values must be above 0! \n\n";
            continue;
        }
        else
        {
            result = CalculateBMI(w, h);
            cout << "Result: " << result << " ";

            if (result < 18.5) { cout << "(underweight)\n\n";}
            else  if (result >= 18.5 && result <= 24.9) { cout << "(healthy)\n\n"; }
            else  if (result >= 25 && result <= 29.9) { cout << "(overweight)\n\n"; }
            else  if (result > 30) { cout << "(obese)\n\n"; }
        }
    }
}

/*
* Formula: BMI = Mass / (height x height)
* BMI -> Body Mass Index
* M -> Mass (Kilograms)
* H -> Height (Meters)
*
* Average US Male height in m -> 1.77m 
* Average US Male weight in kg -> 88.8kg
* Average US Male bmi -> 28.34
* 
* Healthy BMI Ranges:
*	Adult:
*		Underweight-: <18.5
*		Healthy-: 18.5 - 24.9
*		Overweight-: 25 - 29.9
*		Obese-: >30
*
*  Young People / Children Are different, they use both age as well as gender.
*  This program does not include this *yet*
*/