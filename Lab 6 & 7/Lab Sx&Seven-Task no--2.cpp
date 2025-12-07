#include <iostream>

using namespace std;

int main() {
	
	
	int a ;
	cout << " please enter the temperature";
	cin >> a;
	
	
	if (a>=40){cout << "stay indore becouse it is extreamly hot and could be dangerus to health";
	}
	
	else if ((a>=30) || (a<=39)) {
		cout << "Drink plenty of water to stay hidrated in the hot weather" ;
	}
	
	
	else if ((a>=20) || (a<=29)){
		cout << " The weather is pleasant and suaitable for out door activity";
	}
	
	else { cout << " wearing warm cloths to stay comfortable in the cooler weather";
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
