#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1, 2, 3, 4, 5}; // Array of integers
    int *ptr = arr; // Pointer to the first element of the array

    cout << "Array elements using pointer:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " "; // Accessing elements using pointer arithmetic
    }
    cout << endl;

    cout << "Address of the first element: " << ptr << endl; // Address of the first element
    cout << "Address of the second element: " << (ptr + 1) << endl; // Address of the second element
    cout << "Address of the third element: " << (ptr + 2) << endl; // Address of the third element
    cout << "Address of the fourth element: " << (ptr + 3) << endl; // Address of the fourth element
    cout << "Address of the fifth element: " << (ptr + 4) <<endl; // Address of the fifth element
    //in array supoose first element is at address 1000 then second element will be at 1004, third at 1008 and so on
    //but in loop we are adding 1,2,3,4 to pointer variable which seems wrong becauseas 1000 + 1 will be 1001, 
    //but here pointer variable is of type int so it will add 4 bytes to the address, so 1000 + 1 will be 1004
    //adding 1 to ptr = (ptr+1)  can be interpreted as (ptr + 1 * sizeof(int)) in C++ so 
    //it will add 4 bytes to the address of ptr, so if ptr is pointing to address 1000 then (ptr+1) will be 1004

    return 0;

}