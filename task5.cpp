#include <iostream>
using namespace std;
void totalbill(int amount,string day);
main()
{
int amount;
string day;
cout << " enter amount:";
cin >> amount;
cout << " enter day:";
cin >> day;
totalbill(amount , day);
}
void totalbill(int amount , string day)
{
int discount;
int bill;
 if(day=="sunday")
 {
 discount= (amount*10)/100;
 bill = amount - discount;
 cout << "total bill is:" << bill << endl;
 }
 if(day == "monday")
 {
 dicount =(amount*5)/100;
 bill = amount - discount;
 cout << "total bill is:" << bill << endl;
 }
 if(day == "tuesday")
 {
 dicount =(amount*5)/100;
 bill = amount - discount;
 cout << "total bill is:" << bill << endl;
 }
 if(day == "wednesday")
 {
 dicount =(amount*5)/100;
 bill = amount - discount;
 cout << " bill is:" << bill << endl;
 }
 if(day == "thursday")
 {
 dicount =(amount*5)/100;
 bill = amount - discount;
 cout << " bill is:" << bill << endl;
 }
 if(day == "friday")
 {
 dicount =(amount*5)/100;
 bill = amount - discount;
 cout << " bill is:" << bill << endl;
 }
 if(day == "saturday")
 {
 dicount =(amount*5)/100;
 bill = amount - discount;
 cout << " bill is:" << bill << endl;
 }
}
