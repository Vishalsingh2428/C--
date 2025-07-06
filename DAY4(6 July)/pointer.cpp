#include <iostream>
using namespace std;
int main() {
    int a = 10;
    int *p = &a; // Pointer p holds the address of variable a and here & is used to get the a
    //ddress of a and star is used to declare a pointer variable
    //Data type of pointer variable is int, so it can only point to int type variables
    //Pointer datatype should match the datatype of the variable it points to
    int **pptr=&p; // Pointer to pointer, holds the address of pointer p

    cout << "Value of a: " << a << endl; // Output: 10
    cout << "Address of a: " << &a << endl; // Output: Address of a
    cout << "Value of p (address of a): " << p << endl; // Output: Address of a
    cout << "Value pointed to by p: " << *p << endl; // Output: 10 //here * is working as dereference operator
    cout << "Address of p: " << &p <<" = "<<pptr << endl; // Output: Address of pointer 
    cout << "Value of p: " << **pptr << endl; 
    return 0;
}