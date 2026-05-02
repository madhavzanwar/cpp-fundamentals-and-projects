#include <iostream>
using namespace std;

int main(){
    int x; //declaration
    x = 67;
    cout<<x<<'\n';
    int y = 69; //can be done in one line too
    cout<<y<<'\n';
    int sum  = x+y;
    cout<<sum<<'\n';

    int days = 7.5; // int is not useful for decimals
    cout<<days<<'\n';

    //DOUBLE - used to store decimals
    double price = 10.99;
    double gpa = 8.65;
    cout<<gpa<<'\n';

    //CHAR - used to store single characters
    char grade = 'A';
    cout<<grade<<'\n';

    //BOOLEAN - true or false
    bool student = false;
    bool forSale = true;

    //STRINGS - sequence of texts
    string name = "Madhav";
    cout<<name<<'\n';
    cout<<"Hello "<<name<<'\n';
    
    return 0;
}