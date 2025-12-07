#include <iostream>
using namespace std;

int main() {

    const double TAXRATE = 0.06;   

    
    double item1 = 12.95;
    double item2 = 24.95;
    double item3 = 6.95;
    double item4 = 14.95;    
    double item5 = 3.95;

    
    double subtotal = item1 + item2 + item3 + item4 + item5;    
    
    double governmentsalesTax = subtotal * TAXRATE;
    
    double total = subtotal + governmentsalesTax;

 

    cout << "Item 1: $" << item1 << endl;
    cout << "Item 2: $" << item2 << endl;
    cout << "Item 3: $" << item3 << endl;
    cout << "Item 4: $" << item4 << endl;
    cout << "Item 5: $" << item5 << endl;


    cout << "Subtotal: $" << subtotal << endl;
    
    cout << "Government Sales Tax (6%): $" 
    
	    << governmentsalesTax << endl;
    
    cout << "Total: $" << total << endl;

    return 0;
}
