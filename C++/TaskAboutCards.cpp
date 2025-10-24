/*
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
     int f1, f2, f3, f4; // Оголосив змінні на одному рядку для стислості
     cin >> f1 >> f2 >> f3 >> f4;
     
     // Цей зовнішній цикл все ще виглядає дивно, але я залишу його,
     // оскільки він може бути частиною більшої логіки.
     // Фокусуємось на виправленні внутрішньої частини.
     for (int j = 4; j != 0; --j) { // Змінив i на j, щоб уникнути конфлікту імен
         if (f1 % 42 == 0) {
               string f1_s = to_string(f1 / 42);
               vector<int> f1m;
          
               // Починаємо з 1 і закінчуємо на 1 раніше, щоб уникнути виходу за межі
               for (int i = 1; i < f1_s.length() - 1; i++) {
                   // Спочатку перевіряємо індекс, потім — головну умову
                   if (i % 2 == 0) {
                       // Перетворюємо символи на числа ПЕРЕД додаванням
                       int sum_of_neighbors = (f1_s[i-1] - '0') + (f1_s[i+1] - '0');
                       int current_digit = f1_s[i] - '0';
                       
                       // Перевіряємо, чи остання цифра суми дорівнює поточній цифрі
                       if (sum_of_neighbors % 10 == current_digit) {
                           f1m.push_back(current_digit);
                       }
                   }
               }
               
               // Виводимо результат в один рядок
               for (int digit : f1m) {
                   cout << digit;
               }
               cout << endl; // Додамо перехід на новий рядок в кінці
               break;
         }
     }

    return 0;
}
  
*/


#include <iostream>
#include <vector>
#include <string>

using namespace std;

string solve(int e_num) {
     if (e_num % 42 != 0) {
         return "????";
     }
     int g_num = e_num / 42;
     string g_str = to_string(g_num);
     
     int d1 = g_str[0] - '0';
     int d2 = g_str[2] - '0';
     int d3 = g_str[4] - '0';
     int d4 = g_str[6] - '0';

     int ne1 = g_str[1] - '0';
     int ne2 = g_str[3] - '0';
     int ne3 = g_str[5] - '0';

     if ((d1 + d2) % 10 == ne1 && (d2 + d3) % 10 == ne2 && (d3 + d4) % 10 == ne3) {
         return to_string(d1) + to_string(d2) + to_string(d3) + to_string(d4);
     } else {
         return "????";
     }
}

int main() {
     int f1, f2, f3, f4;
     cin >> f1 >> f2 >> f3 >> f4;
     cout << solve(f1) << endl;
     cout << solve(f2) << endl;
     cout << solve(f3) << endl;
     cout << solve(f4) << endl;
     return 0;
}
