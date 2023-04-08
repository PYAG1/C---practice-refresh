#include <iostream>
#include <string>

using namespace std;

int main(){
  //simple for loop


long dividend, divisor;
char ch;

do{
  cout << "Enter dividend: "; cin >> dividend;
  cout << "Enter divisor: "; cin >> divisor;
  cout << "Quotient is " << dividend/divisor;
  cout << "your remainder is: " << dividend % divisor;
  cout << "\nDo another : y/n" ; cin >> ch;

}
while(ch == 'y' );


};