//Lab 9-2.cpp - displays two monthly car payments
//Created/revised by Omer Omer on 4/16/2025
#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes
double getAverage(double times[], int numElements);
double getLowest(double times[], int numElements);

int main()
{ 
    double finishTimes[5] = {0.0};
    double avgTime = 0.0;
    double lowestTime = 0.0;

    //enter finish times
    for (int x = 0; x < 5; x += 1)
    {
        cout << "Time for race " << x + 1 << ": ";
        cin >> finishTimes[x];
    } //end for

    avgTime = getAverage(finishTimes, 5);
    lowestTime = getLowest(finishTimes, 5);
    cout << fixed << setprecision(1) << endl;
    cout << "Average 5K finish time: " << avgTime << endl;
    cout << "Lowest 5K finish time: " << lowestTime << endl;
    return 0;
} //end of main function

//*****function definitions*****
double getAverage(double times[], int numElements)
{
    double total = 0.0;

    for (int x = 0; x < numElements; x += 1)
        total += times[x];

    return total / numElements;
} //end of getAverage function

double getLowest(double times[], int numElements)
{
    double lowest = times[0];
    for (int x = 1; x < numElements; x += 1)
        if (times[x] < lowest)
            lowest = times[x];
    //end if
    //end for
    return lowest;
} //end of getLowest function