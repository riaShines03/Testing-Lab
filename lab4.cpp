/**
 * lab3.cpp
 *
 * <Adria Shines>
 * <adrias>
 *
 * EECS 183: Lab 4
 *
 * <#description#>
 */

#include <iostream>
using namespace std;

/**
 * Note: You will not implement this function as part of the lab
 *
 * Requires: month, day, year may represent a date
 * Modifies: nothing
 * Effects: returns 'true' if the date is in the limits
 *          of the Gregorian calendar otherwise returns 'false'
 */
bool isGregorianDate(int month, int day, int year);

/**
 * Note: You will not implement this function as part of the lab
 *
 * Requires: year is a Gregorian year
 * Modifies: nothing
 * Effects: Returns 'true' if the year is a leap year
 *          otherwise returns 'false'
 */
bool isLeapYear(int year);

void test_isGregorianDate();
void test_isLeapYear();

int main()
{
    test_isGregorianDate();
    test_isLeapYear();
    return 0;
}

void test_isGregorianDate()
{
    cout << "Testing -- isGregorianDate()" << endl;

    //is Gregorian
        cout << "Expected: 1, actual: "
             << isGregorianDate(8, 19, 2016) << endl;
        cout << "Expected: 0, actual: "
             << isGregorianDate(3, 15, 2030) << endl;
        cout << "Expected: 0, actual: "
             << isGregorianDate(9, 29, 2001) << endl;
        cout << "Expected: 0, actual: "
             << isGregorianDate(2, 12, 2005) << endl;
    
    //is not Gregorian
        cout << "Expected: 0, actual: "
             << isGregorianDate(3, 12, 1234) << endl;
        cout << "Expected: 0, actual: "
             << isGregorianDate(3, 2, 1009) << endl;
        cout << "Expected: 0, actual: "
             << isGregorianDate(33, 12, 1221) << endl;
        cout << "Expected: 0, actual: "
             << isGregorianDate(8, 1, 1750) << endl;
        cout << "Expected: 0, actual: "
             << isGregorianDate(4, 12, 1500) << endl;
    
    //edge case
        cout << "Expected: 0, actual: "
             << isGregorianDate(9, 13, 1752) << endl;
    cout << "Finished testing -- isGregorianDate()" << endl
         << endl;
}

void test_isLeapYear()
{
    cout << "Testing -- isLeapYear()" << endl;

    bool isLeapYear(int year);
    cout << "Expected: 1, actual: "
         << isLeapYear(int (2008)) << endl;
    cout << "Expected: 1, actual: "
         << isLeapYear(int (2002)) << endl;
    cout << "Expected: 1, actual: "
         << isLeapYear(int (2021)) << endl;
    cout << "Expected: 1, actual: "
         << isLeapYear(int (2004)) << endl;
    cout << "Expected: 1, actual: "
         << isLeapYear(int (2000)) << endl;
    cout << "Expected: 1, actual: "
         << isLeapYear(int (1900)) << endl;


    cout << "Finished testing -- isLeapYear()" << endl;
}

// DO NOT ALTER THE CODE BELOW THIS LINE IN ANY WAY
// WRITE YOUR CODE IN THE FUNCTIONS ABOVE

#if defined(DEBUG) || defined(_DEBUG)
bool isGregorianDate(int month, int day, int year)
{
    // this (incorrect) implementation returns false to avoid compile error
    // you DO NOT need to implement this function as part of the lab
    return false;
}

bool isLeapYear(int year)
{
    // this (incorrect) implementation returns false to avoid compile error
    // you DO NOT need to implement this function as part of the lab
    return false;
}
#endif
