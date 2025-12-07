#include <iostream>
using namespace std;

int main() {

    int a;
    cout << "Enter age 1 : ";
    cin >> a;


  int y;
    cout << "Enter age 2: ";
    cin >> y;

  int z;
    cout << "Enter age 3 : ";
    cin >> z;




 string c = (a < 13) ? "Child" : (a >= 13 && a <= 19) ? "Teenager" : "Adult";
 
  string m = (y < 13) ? "Child" : (y >= 13 && y <= 19) ? "Teenager" : "Adult";
  
   string n = (z < 13) ? "Child" : (z >= 13 && z <= 19) ? "Teenager" : "Adult";
 
 
 
 
   cout << "Age " << a << " falls under the category: " << c << "\n";
     cout << "Age " << y << " falls under the category: " << m << "\n";
      cout << "Age " << z << " falls under the category: " << n << "\n";

    return 0;
}
