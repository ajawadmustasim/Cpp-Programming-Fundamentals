#include <iostream>
using namespace std;
int main()
{
 int Required_Space_For_Each_PC = 10;
 int Price_Of_Each_PC = 65000;
 int Lenght_Of_Room = 0;
 int Width_Of_Room = 0;
 int Area_Of_Room = 0;
 int PC_Can_Be_Placed = 0;
 int Total_Cost = 0;
 cout << "Required_Space_For_Each_PC:";
 cout << Required_Space_For_Each_PC << endl;
 cout << "Price_Of_Each_PC:";
 cout << Price_Of_Each_PC <<endl;
 cout << "Lenght_Of_Room:";
 cin >> Lenght_Of_Room;
 cout << "Width_Of_Room:";
 cin >> Width_Of_Room;
 Area_Of_Room = Lenght_Of_Room * Width_Of_Room ;
 PC_Can_Be_Placed = Area_Of_Room / Required_Space_For_Each_PC;
 cout << "PC_Can_Be_Placed:";
 cout << PC_Can_Be_Placed <<endl;
 Total_Cost = Price_Of_Each_PC * PC_Can_Be_Placed;
 cout << "Total_Cost:";
 cout << Total_Cost << endl << endl;
 system("pause");
 return 0;
}