#include <iostream> 
using namespace std;
int main()
{

 double C1, C2;
 cout << "Enter number of liters of water in the first vessel: " << endl;
 cin >> C1;
 cout << "Enter the number of liters of water in the second vessel: " << endl;
 cin >> C2;

 for (int i = 0; i <= 12; i++)
 {
  C2 = C2 + 0.5 * C1;
  C1 = 0.5 * C1;
  C1 = C1 + 0.5 * C2;
  C2 = 0.5 * C2;
  if (i == 12)
   cout << "In the first vessel " << C1 << ". In the second vessel " << C2 << "." << endl;

 }
 return 0;
}