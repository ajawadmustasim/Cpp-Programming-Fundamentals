#include <iostream>
using namespace std;
int main()
{
 int Length_Of_Ladder = 0;
 int Width_Of_Ladder = 0;
 int Distance_Between_Step = 1;
 int Required_Wood_In_Foot = 0;
 int Price_Per_Foot = 500;
 int Total_Cost = 0;
 cout << "Distance_Between_Step:";
 cout << Distance_Between_Step <<endl;
 cout << "Length_Of_Ladder:";
 cin >> Length_Of_Ladder;
 cout << "Width_Of_Ladder:";
 cin >> Width_Of_Ladder;
 Required_Wood_In_Foot = (Length_Of_Ladder * 2) + (Width_Of_Ladder * (Length_Of_Ladder-1));
 cout << "Required_Wood_In_Foot:";
 cout << Required_Wood_In_Foot <<endl;
 cout << "Price_Per_Foot:";
 cout << Price_Per_Foot <<endl;
 Total_Cost = Required_Wood_In_Foot * Price_Per_Foot;
 cout << "Total_Cost:";
 cout << Total_Cost <<endl <<endl;
 system("pause");
 return 0;
}