	
	#include <iostream>
using namespace std;


char getGrade(int marks) {
    if (marks >= 90) return 'A';
    else if (marks >= 80) return 'B';
    else if (marks >= 70) return 'C';
    else if (marks >= 60) return 'D';
    else return 'F';
}

int main() {
    int bio, phy, eng;

    cout << "Enter Biology marks: ";
    cin >> bio;

    cout << "Enter Physics marks: ";
    cin >> phy;

    cout << "Enter English marks: ";
    cin >> eng;


    char gBio = getGrade(bio);
    char gPhy = getGrade(phy);
    char gEng = getGrade(eng);


    if (gBio == 'F' || gPhy == 'F' || gEng == 'F') {
        cout << "\nGrade (Biology): " << gBio;
        cout << "\nGrade (Physics): " << gPhy;
        cout << "\nGrade (English): " << gEng;

        cout << "\n\nResult: FAILED (One or more subjects have Grade F)\n";
        return 0; 
    }

    int total = bio + phy + eng;
    float percentage = total / 300.0 * 100;

 
    cout << "\nTotal Marks = " << total;
    cout << "\nPercentage = " << percentage << "%";

    cout << "\nGrade (Biology): " << gBio;
    cout << "\nGrade (Physics): " << gPhy;
    cout << "\nGrade (English): " << gEng;


    cout << "\n\nScholarship Status: ";


    if (gBio == 'A' && gPhy == 'A' && gEng == 'A' && total >= 270) {
        cout << "Eligible for MERIT Scholarship";
    }

    else if ((gBio == 'A' || gBio == 'B') &&
             (gPhy == 'A' || gPhy == 'B') &&
             (gEng == 'A' || gEng == 'B') &&
             total >= 240) {
        cout << "Eligible for REGULAR Scholarship";
    }
    else {
        cout << "Not Eligible for Scholarship";
    }

    cout << endl;
    return 0;
}
