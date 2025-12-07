#include <iostream>

using namespace std;

int main() {
	
	int a;

		cout<<"please enter your account balance = ";
	cin >> a;
	
	
	
	int b;
		cout<<"please enter your withdraw balance =";
		
			cin>>b;
			
			
			int c = a-b;
	
	
	if(b<=a)   {
		cout<<"your withdrah is accepted "<<endl << " your remaining balance is = " <<c;
	}
	
	else {cout<<"insufficient balance" ;
	}
	
	
	

	
	
	return 0;
}
