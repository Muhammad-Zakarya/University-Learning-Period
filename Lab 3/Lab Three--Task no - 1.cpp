#include <iostream>
using namespace std;

int main() {

    int x1 = 3;
    int y1 = 4;
    int x2 = 6;
    int y2 = 8;

    
    double squared_distance = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);


    cout << "The squared distance between the two points  (3, 4) and (6, 8) is: " << squared_distance << endl;

    return 0;
}
