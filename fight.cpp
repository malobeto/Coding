#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    int healthmax1 = 35;
    int health1 = 35;
    int attk1;
    int damage1;
    int defense1 = 10;

    int healthmax2 =35;
    int health2 = 35;
    int attk2;
    int damage2;
    int defense2 = 10;

    int fights;
    int wins = 0;
    int loses = 0;
    int ties =0;

    cout << "How many fights to run?" << endl;
    cin >> fights;
for (int i = 0; i < fights; i++)
{
while (true)
    {
    attk1 = rand()% 20 + 6;
    attk2 = rand()% 20 + 6;
    damage1 = rand()% 10 + 4;
    damage2 = rand()% 8 + 4;
    if (attk1 >= defense2)
    {
        cout << "You hit for " << damage1 << " damage!" << endl;
        health2 = health2 - damage1;
    }
     if (attk2 >= defense1)
    {
        cout << "Your opponent hit you for " << damage2 << " damage!" << endl;
        health1 = health1 - damage2;
    }
    if (health1 <= 0 && health2 <= 0)
    {
        cout << "You were both killed." << endl;
        ties++;
        health1 = healthmax1;
        health2 = healthmax2;
        break;
    }
    if (health1 <= 0)
    {
        cout << "You were killed." << endl;
        loses++;
        health1 = healthmax1;
        health2 = healthmax2;
        break;
    }
    if (health2 <= 0)
    {
        cout << "You killed your opponent." << endl;
        wins++;
        health1 = healthmax1;
        health2 = healthmax2;
        break;
    }
    }
}
cout << "\n\nOut of " << fights << " fights you won, " << wins << " lost " << loses << " and tied " << ties << " times." << endl;
    return 0;
}
