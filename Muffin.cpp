#include <iostream>
#include <cmath>

using namespace std;

void MedianAge();

int main()
{
    MedianAge();
    return 0;
}

void MedianAge()
{
    int NumberOfPeople;
    int TotalAge = 0;
    int Age;
    cout << "Enter the number of people: ";
    cin >> NumberOfPeople;
    for (int C = 1; C < NumberOfPeople + 1; C++)
    {
        cout << "Enter the age of person " << C << ": ";
        cin >> Age;
        TotalAge = TotalAge + Age;
    }
    cout << "The median age is: " << ceil(TotalAge/NumberOfPeople);
}