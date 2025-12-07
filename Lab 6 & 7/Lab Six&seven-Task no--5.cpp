#include <iostream>

using namespace std;

int main() {
	
	
int age ;
cout << "please enter your age";
cin >> age ;

int income ;

if (age>=18)	{
	
		cout << "enter your income";
		cin >> income;
		
		if (income>=30000){
			cout << "you are eligible for loan";
			
		}
		
		else { cout << "you meet the age recuirment but your income is below 30000 so you are ot eligible";
		}
		
		
		
		
		
		
}
	
	
	
else { cout << "You are not eligible for loan because your age is less than 18 ";
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
