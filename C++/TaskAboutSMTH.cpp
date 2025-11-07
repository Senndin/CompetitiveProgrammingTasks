#include <iostream>
#include <vector>

using namespace std;
int main() {
     int num; 
     cin >> num;
     vector<int> results;
     [num, &results]() {
          for (int i = 1; i < num; i++) {
               results.push_back(i*2);
          }
     }();
     for (int res : results) {
          cout << res << " ";
     }
     return 0; 


}