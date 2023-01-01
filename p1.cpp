#include <iostream>
using namespace std;
void multiply(int number1 , int number2);
void add(int number1, int number2);
void subtract(int number1, int number2);
void division(int number1, int number2);

main()
{
 int number1;
 int number2;
 char operation;
 cout << " enter first number:";
 cin >> number1;
 cout << " enter second number:";
 cin >> number2;
 cout << " enter operator(+,-,*,/):";
 cin >> operation;
 if (operation == '+')
   {
   add(number1 , number2);
   }
 if (operation == '-')
  {
  subtract(number1, number2);
  }
 if (operation == '*')
 {
  multiply(number1 , number2);
 }
 if (operation == '/')
 {
  division(number1, number2);
 }
   }
void multiply(int number1, int number2)
{
int multiply;
multiply = number1 * number2;
cout << "multiply:" << multiply << endl;
}
void add(int number1, int number2)
{
  int add;
  add = number1 + number2;
  cout << " add:" << add << endl;
}
void subtract(int number1, int number2)
{
  int subtract;
  subtract = number1 - number2;
  cout << " subtract:" << subtract << endl;
}
void division(int number1, int number2)
{
  int division;
  division = number1 / number2;
  cout << " division:" << division << endl;
}
