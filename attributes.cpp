#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int back()
{
  string meaningless;
  cout << "\nEnter anything to go back to menu." << endl;
  cin >> meaningless;
}

int input()
{
  string meaningless;
  cout << "\nEnter anything to continue." << endl;
  cin >> meaningless;
}

int main ()
{
  string name;
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

    int trainingPoints = 5;
    int trainMax = 4;

    int strRoll = rand()% strAptNum + strTrainNum;
    int dexRoll = rand()% dexAptNum + dexTrainNum;
    int agiRoll = rand()% agiAptNum + agiTrainNum;
    int endRoll = rand()% endAptNum + endTrainNum;
    int intelRoll = rand()% intelAptNum + intelTrainNum;
    int perRoll = rand()% perAptNum + perTrainNum;
    int guileRoll = rand()% guileAptNum + guileTrainNum;
    int willRoll = rand()% willAptNum + willTrainNum;

    int woundThresh;

    int strRollO = rand()% 4 + 1;
    int dexRollO = rand()% 4 + 1;
    int agiRollO = rand()% 4 + 1;
    int endRollO = rand()% 4 + 1;
    int intelRollO = rand()% 4 + 1;
    int perRollO = rand()% 4 + 1;
    int guileRollO = rand()% 4 + 1;
    int willRollO = rand()% 4 + 1;

    int woundThreshO = 0;

    int menuSelect;

    if (strRand > 21)
    {
        strAptNum = 6;
    }
    if (strRand > 80)
    {
        strAptNum = 8;
    }
    if (strRand > 94)
    {
        strAptNum = 10;
    }

    if (dexRand > 21)
    {
        dexAptNum = 6;
    }
    if (dexRand > 75)
    {
        dexAptNum = 8;
    }
    if (dexAptNum > 94)
    {
        dexRand = 10;
    }

    if (agiRand > 21)
    {
        agiAptNum = 6;
    }
    if (agiRand > 80)
    {
        agiAptNum = 8;
    }
    if (agiRand > 94)
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
    if (endRand > 94)
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
    if (intelRand > 94)
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
    if (perRand > 94)
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
    if (guileRand > 94)
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
    if (willRand > 94)
    {
        willAptNum = 10;
    }

    int woundThreshNum = endAptNum + endTrainNum;
      if (woundThreshNum > 7)
      {
      woundThresh = 1;
      }
      if (woundThreshNum > 9)
      {
      woundThresh = 2;
      }
      if (woundThreshNum > 12)
      {
      woundThresh = 3;
      }

    cout << "What is your name?" << endl;
    cin >> name;

    input();

    cout << "\n Training points represent time and effort spent improving your attributes while your apptitude represents your natural talent." << endl;
    cout << "You may choose where you put your training points however your apptitues are randomly chosen." << endl;
    input();
    cout << "\n\n You start with 5 training points. How would you like to spend them?" << endl;
    cout << "\n1. Strength" << endl;
    cout << "2. Dexterity" << endl;
    cout << "3. Agility" << endl;
    cout << "4. Endurance" << endl;
    cout << "5. Inetlligence" << endl;
    cout << "6. Perception" << endl;
    cout << "7. Guile" << endl;
    cout << "8. Will" << endl;

    for (int i = 0; i < trainingPoints; i++)
    {
      int trainSelect;
      cin >> trainSelect;

      if (trainSelect == 1)
      {
        strTrainNum++;
      }
      if (trainSelect == 2)
      {
        dexTrainNum++;
      }
      if (trainSelect == 3)
      {
        agiTrainNum++;
      }
      if (trainSelect == 4)
      {
        endTrainNum++;
      }
      if (trainSelect == 5)
      {
        intelTrainNum++;
      }
      if (trainSelect == 6)
      {
        perTrainNum++;
      }
      if (trainSelect == 7)
      {
        guileTrainNum++;
      }
      if (trainSelect == 8)
      {
        willTrainNum++;
      }

      if(strTrainNum > 4)
      {
        cout << "You may not increase an attribute's training level above 3." << endl;
        cout << "Please choose another." << endl;
        strTrainNum--;
        i--;
      }
      if(dexTrainNum > 4)
      {
        cout << "You may not increase an attribute's training level above 3." << endl;
        cout << "Please choose another." << endl;
        agiTrainNum--;
        i--;
      }
      if(agiTrainNum > 4)
      {
        cout << "You may not increase an attribute's training level above 3." << endl;
        cout << "Please choose another." << endl;
        agiTrainNum--;
        i--;
      }
      if(endTrainNum > 4)
      {
        cout << "You may not increase an attribute's training level above 3." << endl;
        cout << "Please choose another." << endl;
        endTrainNum--;
        i--;
      }
      if(intelTrainNum > 4)
      {
        cout << "You may not increase an attribute's training level above 3." << endl;
        cout << "Please choose another." << endl;
        intelTrainNum--;
        i--;
      }
      if(perTrainNum > 4)
      {
        cout << "You may not increase an attribute's training level above 3." << endl;
        cout << "Please choose another." << endl;
        perTrainNum--;
        i--;
      }
      if(guileTrainNum > 4)
      {
        cout << "You may not increase an attribute's training level above 3." << endl;
        cout << "Please choose another." << endl;
        guileTrainNum--;
        i--;
      }
      if(willTrainNum > 4)
      {
        cout << "You may not increase an attribute's training level above 3." << endl;
        cout << "Please choose another." << endl;
        willTrainNum--;
        i--;
      }
      cout << "\nStrength: " << strTrainNum - 1 << endl;
      cout << "Dexterity: " << dexTrainNum - 1 << endl;
      cout << "Agility: " << agiTrainNum - 1 << endl;
      cout << "Endurance: " << endTrainNum - 1 << endl;
      cout << "Intelligence: " << intelTrainNum - 1 << endl;
      cout << "Perception: " << perTrainNum - 1 << endl;
      cout << "Guile: " << guileTrainNum - 1 << endl;
      cout << "Will: " << willTrainNum - 1 << "\n" << endl;

      cout << "\nYou have " << trainingPoints - 1 - i << " training points to spend on your attributes." << endl;
    }

//menu
    while (true)
     {

        cout << "\n1. Character Sheet" << endl;
        cout << "2. Exit" << endl;

        cin >> menuSelect;

        if (menuSelect == 1)
        {

            cout << "Your name is " << name << "\n" << endl;
            cout << "Your apptitudes are as follows:" << endl;

            if (strAptNum == 4)
            {
              cout << "\nYour natural strength is subpar." << endl;
            }
            if (strAptNum == 6)
            {
              cout << "\nYou have an average natural strength." << endl;
            }
            if (strAptNum == 8)
            {
              cout << "\nYour natural strength is above average." << endl;
            }
            if (strAptNum == 10)
            {
              cout << "\nYou are a natural prodigy when it comes to strength." << endl;
            }

            if (dexAptNum == 4)
            {
              cout << "Your natural dexterity is subpar." << endl;
            }
            if (dexAptNum == 6)
            {
              cout << "You have an average natural dexterity." << endl;
            }
            if (dexAptNum == 8)
            {
              cout << "Your natural dexterity is above average." << endl;
            }
            if (dexAptNum == 10)
            {
              cout << "You are a natural prodigy when it comes to dexterity." << endl;
            }

            if (agiAptNum == 4)
            {
              cout << "Your natural agility is subpar." << endl;
            }
            if (agiAptNum == 6)
            {
              cout << "You have an average natural agility." << endl;
            }
            if (agiAptNum == 8)
            {
              cout << "Your natural agility is above average." << endl;
            }
            if (agiAptNum == 10)
            {
              cout << "You are a natural prodigy when it comes to agility." << endl;
            }

            if (endAptNum == 4)
            {
              cout << "Your natural endurance is subpar." << endl;
            }
            if (endAptNum == 6)
            {
              cout << "You have an average natural endurance." << endl;
            }
            if (endAptNum == 8)
            {
              cout << "Your natural endurance is above average." << endl;
            }
            if (endAptNum == 10)
            {
              cout << "You are a natural prodigy when it comes to endurance." << endl;
            }

            if (intelAptNum == 4)
            {
              cout << "Your natural intelligence is subpar." << endl;
            }
            if (intelAptNum == 6)
            {
              cout << "You have an average natural intelligence." << endl;
            }
            if (intelAptNum == 8)
            {
              cout << "Your natural intelligence is above average." << endl;
            }
            if (intelAptNum == 10)
            {
              cout << "You are a natural prodigy when it comes to intelligence." << endl;
            }

            if (perAptNum == 4)
            {
              cout << "Your natural perception is subpar." << endl;
            }
            if (perAptNum == 6)
            {
              cout << "You have an average natural perception." << endl;
            }
            if (perAptNum == 8)
            {
              cout << "Your natural perception is above average." << endl;
            }
            if (perAptNum == 10)
            {
              cout << "You are a natural prodigy when it comes to perception." << endl;
            }

            if (guileAptNum == 4)
            {
              cout << "Your natural guile is subpar." << endl;
            }
            if (guileAptNum == 6)
            {
              cout << "You have an average natural guile." << endl;
            }

            if (guileAptNum == 8)
            {
              cout << "Your natural guile is above average." << endl;
            }
            if (guileAptNum == 10)
            {
              cout << "You are a natural prodigy when it comes to guile." << endl;
            }

            if (willAptNum == 4)
            {
              cout << "Your natural will is subpar." << endl;
            }
            if (willAptNum == 6)
            {
              cout << "You have an average natural will." << endl;
            }
            if (willAptNum == 8)
            {
              cout << "Your natural will is above average." << endl;
            }
            if (willAptNum == 10)
            {
              cout << "You are a natural prodigy when it comes to will." << endl;
            }
            back();
          }

        if (menuSelect == 2)
        {
              break;
        }

      }

        return 0;
  }
