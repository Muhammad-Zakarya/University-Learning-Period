#include <iostream>
using namespace std;
int main() {
	
	int a;
	int b;
	
	cout<<"Please enter your salary = ";
	cin>>a;
	
	cout<<"Please enter your work experience = ";
	cin >> b;
	
	if (a>=25000 || b>=5){
		cout<<"Your eligible for loan";
	}
	
	else {   cout<<"sorry you are not eligble";
	}
	
	
}
