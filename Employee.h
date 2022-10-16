#ifndef Employee_H 
#define Employee_H
#include <string>
using namespace std;
class Employee
{
public:
Employee( const string &, const string &, const char & ); // constructor
~Employee(); // destructor
//Employee(const Employee&); //copy constructor
string getfirstName() const; // return first name
string getlastName() const; // return last name
Employee& printfirstName();
Employee* printlastName();

//friend void print(const Employee &);// for non-static FRIEND
friend void print(const Employee);

// static member function
static int getCount(); // return number of objects instantiated
static int getfCount();
static int getmCount();
static void printCount(); // for static

private:
char gender;
string firstName;
string lastName;
// static data
static int count; // number of objects instantiated
static int fCount;
static int mCount;
}; // end class Employee
#endif