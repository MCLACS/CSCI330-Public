#include <iostream>
#include <iomanip>

#include "../../../utilities/UserInput.h"
#include "BMI.h"

using namespace std;

int main()
{
    UserInput in;

    cout << fixed << setprecision(1);
  
    cout << "Enter your height in feet followed by inches." << endl;
    double ft = in.readInt("First enter the feet:");
    double inc = in.readInt("Next enter the inches:");
    double lbs = in.readInt("Enter you weight in lbs: ");

    double totalInches( (ft * INC_FT) + inc);
    double meters(totalInches * MT_INC);
    double kg(lbs / LBS_KG);
    double bmi = calculateBMI(kg, meters);

    // test your results by following this URL:
    // https://www.nhlbi.nih.gov/health/educational/lose_wt/BMI/bmicalc.htm
    cout << "Your BMI is " << bmi << endl;

    return 0;
}

// w is in kg, h is in meters
double calculateBMI(double w, double h)
{
  return w / (h*h);
}
