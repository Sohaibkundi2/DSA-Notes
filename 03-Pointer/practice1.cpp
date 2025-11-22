// Pointers in C++
// Defenition: A pointer is a variable that stores the memory address of another variable.
#include <iostream>
using namespace std;

int fnc(int* p) {
    *p = *p + 10;
}


int main() {
    int var = 10;

    int* ptr = &var;

    int** parPtr = &ptr;

    cout<<" Parent pointer value: "<<**(parPtr);
    cout<<" Parent pointer address: "<<*(parPtr);

    cout << "Value of var: " << var << endl;               // Output the value of var
    cout << "Address of var: " << &var << endl;            // Output the address of var
    cout << "Value of ptr (address of var): " << ptr << endl; // Output the value of ptr (address of var)
    cout << "Value pointed to by ptr: " << *ptr << endl;   // Output the value pointed to by ptr

    // Modify the value of var using the pointer
    *ptr = 100;
    cout << "New value of var after modification through ptr: " << var << endl;

    // Pass by reference
    //  Two ways, using pointer and using reference variable
    
    int num = 20;
    cout << "Value of num before fnc: " << num << endl;
    fnc(&num);
    cout << "Value of num after fnc: " << num << endl;
    return 0;
}