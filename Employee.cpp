#include <iostream>
#include "Employee.h" // Employee class definition
using namespace std;
// define and initialize static data member at global namespace scope
Employee::Employee( const string &first, const string &last, const char &s)
:firstName(first), lastName(last), gender (s)
{
    ++count;
    cout << "Employee constructor for " << firstName << ' ' << lastName << " called " << endl;
    if ( s == 'F' )
    {
        fCount++;
    }
    else if ( s == 'M' )
    {
        mCount++;
    }
    else
    {
        cout << " Employee's gender is incorrect " << gender << endl;
    }
}// end of constructor
Employee::~Employee()
{
    
    cout << "~Employee() called for " << firstName << ' ' << lastName << endl;
    if ( gender == 'F' )
    {
        fCount--;
    }
    else if ( gender == 'M' )
    {
        mCount--;
    }
    count--;
}// end of destructor
/*Employee::Employee(const Employee &a)//copy constructor
{
    firstName = a.firstName;
    lastName = a.lastName;
    gender = a.gender;
    if ( gender == 'F' )
    {
        fCount++;
    }
    else if ( gender == 'M' )
    {
        mCount++;
    }
    count++;
}*/
int Employee::count = 0; // cannot include keyword static
int Employee::fCount = 0;
int Employee::mCount = 0;
// define static member function that returns number of
// Employee objects instantiated (declared static in Employee.h)
string Employee::getfirstName() const
{
    return firstName;
}
string Employee::getlastName() const
{
    return lastName;
}
Employee& Employee::printfirstName()
{
    cout << firstName;
    return *this;
}
Employee* Employee::printlastName()
{
    cout << lastName;
    return this;
}
//----------------------------------------------------------------
/*void print(const Employee &a)
{
    cout << a.firstName << ' ' << a.lastName << ' ' << a.gender << endl;
}*/

void print(const Employee a)
{
    cout << a.firstName << ' ' << a.lastName << ' ' << a.gender << endl;
}
//----------------------------------------------------------------
int Employee::getCount()
{
    return count;
} // end static function getCount
int Employee::getfCount()
{
    return fCount;
}
int Employee::getmCount()
{
    return mCount;
}

void Employee::printCount()
{
    cout << "Number of employees=" << count << " Number of the male employees=" << mCount << " Number of the female employees=" << fCount << endl;
}
