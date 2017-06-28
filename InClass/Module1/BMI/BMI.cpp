#include "../utilities/UserInput.h"
#include <iostream>

using namespace std;

const int INC_FT = 12;
const double MT_INC = 0.0254;
const double LBS_KG = 2.2;

// w is in kg, h is in meters
double calculateBMI(double w, double h);

int main()
{
    UserInput in;

    cout << "Enter your height in feet followed by inches." << endl;
    cout << "First enter the feet:";
    double ft = in.readInt();
    cout << "Next enter the inches:";
    double inc = in.readInt();
    cout << "Enter you weight in lbs: ";
    double lbs = in.readInt();

    double totalInches( (ft * INC_FT) + inc);
    double meters(totalInches * MT_INC);
    double kg(lbs / LBS_KG);
    double bmi = calculateBMI(kg, meters);

    // test your results by following this URL:
    // http://www.bmi-calculator.net/
    cout << "Your BMI is " << bmi << endl;

    return 0;
}

// w is in kg, h is in meters
double calculateBMI(double w, double h)
{
  return w / (h*h);
}
