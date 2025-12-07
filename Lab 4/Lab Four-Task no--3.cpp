 #include <iostream>
using namespace std;

int main() {

    int a;
    int b;

    cout << "Enter balance: ";
    cin >> a;

    cout << "Are you loyal? (1 yes, 0 no): ";
    cin >> b;

   
   string c = (a < 100) ? "Low Balance Account" :(a <= 500) ? "Standard Account" : "Premium Account";
    
    
    string e = (a>=200 && b==1) ? "Dear user you are eligible for special offer" : "sorry you are not eligible for special offer";
    cout<<e;
    
    
    
    
    
    
    
    
    

    return 0;
}
