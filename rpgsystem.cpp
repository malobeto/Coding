#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main ()
{
    srand(static_cast<unsigned int>(time(0)));

    int strRand = rand()% 100 + 1;
    int dexRand = rand()% 100 + 1;
    int agiRand = rand()% 100 + 1; 
    int endRand = rand()% 100 + 1;
    int intelRand = rand()% 100 + 1;
    int perRand = rand()% 100 + 1;
    int guileRand = rand()% 100 + 1;
    int willRand = rand()% 100 + 1;

    int strAptNum = 4;
    int dexAptNum = 4;
    int agiAptNum = 4; 
    int endAptNum = 4;
    int intelAptNum = 4;
    int perAptNum = 4;
    int guileAptNum = 4;
    int willAptNum = 4;

    int strTrainNum = 1;
    int dexTrainNum = 1;
    int agiTrainNum = 1; 
    int endTrainNum = 1;
    int intelTrainNum = 1;
    int perTrainNum = 1;
    int guileTrainNum = 1;
    int willTrainNum = 1;

    int strRoll = rand()% strAptNum + strTrainNum;
    int dexRoll = rand()% dexAptNum + dexTrainNum;
    int agiRoll = rand()% agiAptNum + agiTrainNum; 
    int endRoll = rand()% endAptNum + endTrainNum;
    int intelRoll = rand()% intelAptNum + intelTrainNum;
    int perRoll = rand()% perAptNum + perTrainNum;
    int guileRoll = rand()% guileAptNum + guileTrainNum;
    int willRoll = rand()% willAptNum + willTrainNum;

    int whatRoll;

    if (strRand > 21)
    {
        strAptNum = 6;
    }
    if (strRand > 80)
    {
        strAptNum = 8;
    }
    if (strAptNum > 94)
    {
        strAptNum = 10;
    }

    if (dexRand > 21)
    {
        dexAptNum = 6;
    }
    if (dexRand > 80)
    {
        dexAptNum = 8;
    }
    if (dexAptNum > 94)
    {
        dexAptNum = 10;
    }

    if (agiRand > 21)
    {
        agiAptNum = 6;
    }
    if (agiRand > 80)
    {
        agiAptNum = 8;
    }
    if (agiAptNum > 94)
    {
        agiAptNum = 10;
    }

    if (endRand > 21)
    {
        endAptNum = 6;
    }
    if (endRand > 80)
    {
        endAptNum = 8;
    }
    if (endAptNum > 94)
    {
        endAptNum = 10;
    }

    if (intelRand > 21)
    {
        intelAptNum = 6;
    }
    if (intelRand > 80)
    {
        intelAptNum = 8;
    }
    if (intelAptNum > 94)
    {
        intelAptNum = 10;
    }

    if (perRand > 21)
    {
        perAptNum = 6;
    }
    if (perRand > 80)
    {
        perAptNum = 8;
    }
    if (perAptNum > 94)
    {
        perAptNum = 10;
    }

    if (guileRand > 21)
    {
        guileAptNum = 6;
    }
    if (guileRand > 80)
    {
        guileAptNum = 8;
    }
    if (guileAptNum > 94)
    {
        guileAptNum = 10;
    }

    if (willRand > 21)
    {
        willAptNum = 6;
    }
    if (willRand > 80)
    {
        willAptNum = 8;
    }
    if (willAptNum > 94)
    {
        willAptNum = 10;
    }

    while (true)
     {
        cout << "What attribute would you like to roll?" << endl;
        cout << "1. Strength" << endl;
        cout << "2. Dexterity" << endl;
        cout << "3. Agility" << endl;
        cout << "4. Endurance" << endl;
        cout << "5. Inellegence" << endl;
        cout << "6. Perception" << endl;
        cout << "7. Guile" << endl;
        cout << "8. Willpower" << endl;
        cout << "9. Stop" << endl;

        cin >> whatRoll;

        if (whatRoll == 1)
        {
            strRoll = rand()% strAptNum + strTrainNum;
            cout << "\n\nYou rolled a " << strRoll << endl;
            
        }
        if (whatRoll == 2)
        {
            dexRoll = rand()% dexAptNum + dexTrainNum;
            cout << "\n\nYou rolled a " << dexRoll << endl;
        }
        if (whatRoll == 3)
        {
            agiRoll = rand()% agiAptNum + agiTrainNum;
            cout << "\n\nYou rolled a " << agiRoll << endl;
        }
        if (whatRoll == 4)
        {
            endRoll = rand()% endAptNum + endTrainNum;
            cout << "\n\nYou rolled a " << endRoll << endl;
        }
        if (whatRoll == 5)
        {
            intelRoll = rand()% intelAptNum + intelTrainNum;
            cout << "\n\nYou rolled a " << intelRoll << endl;
        }
        if (whatRoll == 6)
        {
            perRoll = rand()% perAptNum + perTrainNum;
            cout << "\n\nYou rolled a " << perRoll << endl;
        }
        if (whatRoll == 7)
        {
            guileRoll = rand()% guileAptNum + guileTrainNum;
            cout << "\n\nYou rolled a " << guileRoll << endl;
        }
        if (whatRoll == 8)
        {
            willRoll = rand()% willAptNum + willTrainNum;
            cout << "\n\nYou rolled a " << willRoll << endl;
        }
        if (whatRoll == 9)
        {
            break;
        }

    }

    return 0;
}