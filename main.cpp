#include <iostream>

using namespace std;

int main()
{
    double fahren; //fahrenheit
    double celsius;
    int selection;

    cout << "*** CELSIUS & FAHRENHEIT CONVERSION ***\n" << endl;

    cout << "Please select from the selection below:" << endl;
    cout << "1) Celsius to Fahrenheit" << endl;
    cout << "2) Fahrenheit to Celsius" << endl;
    cin >> selection;


    if(selection == 1)
    {
        cout << "Enter Celsius: ";
        cin >> celsius;

        //ALGORITHM
        fahren = (9/5) * celsius + 32;

        //PRINT OUT INFO. GATHERED
        cout << "Fahrenheit is: " << fahren << endl;
    }
    else if(selection == 2)
    {
        cout << "Enter Fahrenheit: ";
        cin >> fahren;

        //ALGORITHM
        celsius = (fahren - 32) * 5/9

        //PRINT OUT INFO. GATHERED
        cout << "Celsius is: " << celsius << endl;
    }
    else
    {
        cout << "Invalid input"
    }


    return 0;
}
