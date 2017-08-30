#include <iostream>
#include <string>

using namespace std;
int main()
{
  const int MAX_ITEMS = 10;
  string inventory[MAX_ITEMS];

  int numItems = 0;
  invetory[numItems++] = "sword";
  invetory[numItems++] = "armor";
  invetory[numItems++] = "shield";

   cout << "Your items:\n";
   for(int i=0; i < numItems; i++)
   {
     cout << inventory[i] << endl;
   }
  }
  return 0;
}
