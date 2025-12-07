#include <iostream>
using namespace std;


int main() {
	
	int a ;
	cout << "Please enter your salary  :";
	cin >> a;
	
		
	int b ;
	cout << "please enter your service of years  :";
	cin >> b;
		
		
		
			
		if (a>=50000){
			cout << "Salary type = Grade A" << endl;
					}
	
	 if ((a>=30000)   && (a<50000)     ){
			cout << "Salary type = Grade B" << endl;
					}
					
					
						 if (   (a<=20000) && (a>30000)  ){
			cout << "Salary type = Grade c" << endl;
					}
	

	
	
	
	if (b>=10){
		a = a + (a/100*10);
		cout<<"10% Bonus Added" ;
	}
		 if ((b>=5) && (b<10)){
			a = a + (a/100*5);
		cout<<"5% Bonus Added";
	}
	
		if (b<5){
			
			a = a + (a/100*0);
		cout<<"0% Bonus Added" ;
	}

 cout << endl;
 
 
 
if (a>=40000){
	 
	 a = a - (a/100*20); }

  if (  (a>40000 )    && (a<30000)      ){

	  a = a - (a/100*10);
	 
}	
	if (a>30000){

 a = a - (a/100*0);
 	
}
	cout << "Your Totle salary is = " << a ;

	

	
	return 0;
}
