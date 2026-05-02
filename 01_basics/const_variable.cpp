#include <iostream>
using namespace std;
int main(){
    const double PI = 3.14159; //we cant change constants in our code later
    double radius = 5;
    double circumference = 2*PI*radius;

    cout<<circumference<<'\n';

    return 0;
}