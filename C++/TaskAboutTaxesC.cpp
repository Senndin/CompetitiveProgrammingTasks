#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
     int numberOfComp;
     vector<int> Profits;
     vector<int> TaxesPercent;
     vector<double> Taxes;

     cin >> numberOfComp;
     for (int i = 0; i < numberOfComp; i++) {
         int profit;
         cin >> profit;
         Profits.push_back(profit);
     }
     for (int i = 0; i < numberOfComp; i++) {
         int taxPercent;
         cin >> taxPercent;
         TaxesPercent.push_back(taxPercent);
     }
     for (int i = 0; i < numberOfComp; i++) {
         double tax = (Profits[i] * TaxesPercent[i]) / 100.0;
          Taxes.push_back(tax);
         
     }
     auto maxTaxIter = max_element(Taxes.begin(), Taxes.end());
     auto index = distance(Taxes.begin(), maxTaxIter);
     cout << index + 1 << endl;

     return 0;
}
