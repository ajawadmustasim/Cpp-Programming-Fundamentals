#include <iostream>
using namespace std;
int main()
{
 int Storage = 1500;
 int Bag_Can_Hold = 0;
 int Total_Bag_Required = 0;
 int Price_Per_KG = 0;
 int Total_Per_Bag = 0;
 cout <<"Storage="<< Storage <<endl;
 cout << "Bag_Can_Hold:";
 cin >> Bag_Can_Hold;
 Total_Bag_Required = Storage / Bag_Can_Hold;
 cout << "Total_Bag_Required:"; 
 cout << Total_Bag_Required <<endl;
 cout << "Price_Per_KG:";
 cin >> Price_Per_KG;
 Total_Per_Bag = Price_Per_KG * Bag_Can_Hold;
 cout << "Total_Per_Bag:";
 cout << Total_Per_Bag <<endl <<endl;
 system("pause");
 return 0;
}