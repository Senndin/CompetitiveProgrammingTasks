#include <iostream>


using namespace std;

int main() {
     int r1, s1, p1;
     cin >> r1 >> s1 >> p1;
     int r2, s2, p2;
     cin >> r2 >> s2 >> p2;
     int countp = min(r1, s2) + min(s1, p2) + min(p1, r2);
     cout << countp << endl;
     
}