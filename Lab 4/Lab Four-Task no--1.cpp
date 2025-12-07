#include <iostream>
using namespace std;

int main() {

    int a;

    cout << "Enter an integar  : ";
    cin >> a;

  
     string b = (a % 2 == 0) ? "even" : "odd";

    
    
    int c;

    cout << "Enter an integar  : ";
    cin >> c; 

  
     string d = (c % 2 != 0) ? "odd" : "even"; 
    
    
    
    
    
    cout << "The number " << a << " is " << b << endl;
    
 cout << "The number " << c << " is " << d<< endl;
    return 0;
}
