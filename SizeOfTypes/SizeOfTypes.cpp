// Fig. 8. 13: fig08_13.cpp
// Sizeof operator when used on a built-in array's name
// returns the number of bytes in the buil t-in array.
#include "stdafx.h"
#include "ClassEmpty.h"
#include "ClassDoubles.h"
#include "Maximum.h"
#include "PersonalData.h"
#include <array>
using namespace std;

size_t getSize(long double * someBigNum); // prototype

int main()
{
    long double longdoubles[20];
    cout << "The number of bytes in the array is " << sizeof(longdoubles);
    cout << "\nThe number of bytes returned by getSize is " << getSize(longdoubles) << endl;
    //long double longdoubles[20];
    //cout << "The number of bytes in the array is " << sizeof(longdoubles);
    //cout << "\nThe number of bytes returned by getSize is " << getSize(longdoubles) << endl;

    ClassEmpty myClassEmpty;
    ClassDoubles myClassDoubles;
    cout << "\nSize of : " << endl;
    cout << "\tempty class - " << sizeof(myClassEmpty) << endl;
    cout << "\tdoubles class - " << sizeof(myClassDoubles) << endl;
    cout << "\tlong double - " << sizeof(long double) << endl;
    cout << "\tdouble - " << sizeof(double) << endl;
    cout << "\tfloat - " << sizeof(float) << endl;
    cout << "\tlong long - " << sizeof(long long) << endl;
    cout << "\tlong - " << sizeof(long) << endl;
    cout << "\tint - " << sizeof(int) << endl;
    cout << "\tshort - " << sizeof(short) << endl;
    cout << "\tchar - " << sizeof(char) << endl;
    cout << "\tbool - " << sizeof(bool) << endl;
    ClassDoubles * pDoubles = &myClassDoubles;
    cout << "\tpointer - " << sizeof(pDoubles) << endl;

    //c++11 list initialization
    double myDouble = 12.345; //old style
    double myDouble2 = { 6.78 };   //new style
    double myDouble3{ 9.01234 };//new style

    // demonstrate maximum with int values (maximum is a template)
    /*int int1, int2, int3;
    cout << "Input three integer values: ";
    cin >> int1 >> int2 >> int3;*/
    // invoke int version of maximum
    /*cout << "The maximum integer value is: " << maximum(int1, int2, int3) << endl;*/
    // demonstrate maximum wi th double values
    /*double double1, double2, double3;
    cout << "\n\nInput three double values: ";
    cin >> double1 >> double2 >> double3;
    cout << "The maximum double value is: " << maximum(double1, double2, double3) << endl;*/

    const size_t arraySize = 20;
    array <long double, arraySize> morelongdoubles = { }; //initialize all to zero
    cout << "array :" << endl;
    for (long double element : morelongdoubles)
    {
            cout << element << " ";
    }
    for (long double &element : morelongdoubles)
    {
        element += 5;
    }
    cout << "\narray :" << endl;
    for (long double element : morelongdoubles)
    {
            cout << element << " ";
    }

    PersonalData Employee1;
    Employee1.Name = "David Thiessen";
    Employee1.Age = 53;
    Employee1.SSN = 123456789;
    Employee1.Telephone = 5805747463;
    Employee1.Street = "30007 Business Center Dr";
    Employee1.City = "Charlotte Hall";
    Employee1.State = "MD";
    Employee1.Zip = 20622;
} // end main

// return size of ptr
size_t getSize(long double *ptr)
{
    return sizeof(ptr);
} // end function getSize