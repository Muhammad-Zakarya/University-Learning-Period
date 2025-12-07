#include <iostream>
using namespace std;
int main() {
	
	string  a;
	cout << "please enter your username";	
	cin>> a;
	
	string  b;

	string c = "zakarya";
	string d = "1234";
	
	
       if (a==c){
			cout << "please enter your password ";
		cin >> b;
	}
	
		else if (a!=c) {
		cout << "user not faound";
	}
	
	
	 if ((a==c) && (b==d)){
		
		cout << "Access Granted";}
	
	
	
	
	else if ((a==c) && (b!=d)  ){
		cout << " wrong password";
	}
		
	return 0;
}
