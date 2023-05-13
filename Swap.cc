#include<iostream>

using namespace std;

// Function to swap two integers
void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

// Function to swap two floats
void swap(float& x, float& y) {
    float temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 5, b = 10;
    float c = 3.5, d = 8.2;

    cout<<"Before swapping:"<<endl;
    cout<<"a = "<<a<<", b = "<<b<<endl;
    cout<<"c = "<<c<<", d = "<<d<<endl;

    // Swapping integers using function overloading
    swap(a, b);

    // Swapping floats using function overloading
    swap(c, d);

    cout<<"After swapping:"<<endl;
    cout<<"a = "<<a<<", b = "<<b<<endl;
    cout<<"c = "<<c<<", d = "<<d<<endl;

    return 0;
}
