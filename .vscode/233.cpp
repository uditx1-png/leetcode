#include<iostream>
using namespace std;

int main(){
    int ax1, ay1, ax2, ay2;
    int bx1, by1, bx2, by2;

    cout << "Enter rectangle A (x1 y1 x2 y2): ";
    cin >> ax1 >> ay1 >> ax2 >> ay2;

    cout << "Enter rectangle B (x1 y1 x2 y2): ";
    cin >> bx1 >> by1 >> bx2 >> by2;

    int area1 = (ax2 - ax1) * (ay2 - ay1);
    int area2 = (bx2 - bx1) * (by2 - by1);

    // overlap width
    int overlapW = min(ax2, bx2) - max(ax1, bx1);
    // overlap height
    int overlapH = min(ay2, by2) - max(ay1, by1);

    int overlapArea = 0;

    if(overlapW > 0 && overlapH > 0)
        overlapArea = overlapW * overlapH;

    int unionArea = area1 + area2 - overlapArea;

    cout << "Union Area: " << unionArea << endl;
    cout << "Overlap Area: " << overlapArea << endl;
}