#include <iostream>
#include <vector>
#include <string>


using namespace std;


int main() {
     int f1;
     int f2;
     int f3;
     int f4;
     cin >> f1 >> f2 >> f3 >> f4;
     for (int i = 4; i != 0; --i) {
         if (f1 % 42 == 0) {
               string f1_s = to_string(f1/42);
               vector<int> f1m;
          
               for (int i = 0; i < f1_s.length(); i++) {
                   f1m.push_back(f1_s[i] - '0');
               }
               cout << f1m[i-1] << endl;
               break;

         }

     }
     

    return 0;
}