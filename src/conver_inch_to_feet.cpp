#include <iostream>

using namsespace std;

int main()
{
    int i, f, convert_to_feet, convert_to_inch;
    cout << "Enter inch:";
    cin >> i;
    cout << "Enter feet:";
    cin >> f;

    convert_to_feet = i / 12;
    convert_to_inch = f * 12;

    cout << "The result is " << convert_to_feet << " feet\n" << endl;
    cout << "The result is " << convert_to_inch << " inch" << endl;

    return 0;
}