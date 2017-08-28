#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;


int main ()
{
    srand(static_cast<unsigned int>(time(0)));

    int str = (rand()% 6 + 1) + (rand()% 6 + 1) + (rand()% 6 + 1);
    int dex = (rand()% 6 + 1) + (rand()% 6 + 1) + (rand()% 6 + 1);
    int con = (rand()% 6 + 1) + (rand()% 6 + 1) + (rand()% 6 + 1);
    int intel = (rand()% 6 + 1) + (rand()% 6 + 1) + (rand()% 6 + 1);
    int wis = (rand()% 6 + 1) + (rand()% 6 + 1) + (rand()% 6 + 1);
    int cha = (rand()% 6 + 1) + (rand()% 6 + 1) + (rand()% 6 + 1);
    int attBonusNum1 = (rand()% 6 + 1);
    int attBonusNum2 = (rand()% 6 + 1);
    int raceNum = rand()% 9 + 1;
    int classNum = rand()% 12 + 1;
    int backgroundNum = rand()% 13 + 1;
    int backgroundExtraNum = rand()% 8 + 1;
    int subraceNum = rand()% 2 + 1;
    int subclassNum = rand()% 2 + 1;
    int personailtyNum = rand()% 8 + 1;
    int idealNum = rand()% 6 + 1;
    int bondNum = rand()% 6 + 1;
    int flawNum = rand()% 6 + 1;
    int choiceClass;
    int choiceRace;
    int choiceBackground;
    string cla;
    string subclass;
    string race;
    string subrace;
    string background;
    string backgroundExtra = "";
    string personality;
    string ideal;
    string bond;
    string flaw;

   
    cout << "Welcome. What would you like to choose for your character? The rest will be randomly generated." << endl;
    cout << " 1 is yes. 0 is no." << endl;
    cout << "Would you like to pick your class?\n" << endl;
    cin >> choiceClass;
    cout << "Would you like to pick your race?\n" << endl;
    cin >> choiceRace;
    cout << "Would you like to pick your background?\n" << endl;
    cin >> choiceBackground;


//Class selection
    if (choiceClass)
    {
        cout << "1. Barbarian" << endl;
        cout << "2. Bard" << endl;
        cout << "3. Cleric" << endl;
        cout << "4. Druid" << endl;
        cout << "5. Fighter" << endl;
        cout << "6. Monk" << endl;
        cout << "7. Paladin" << endl;
        cout << "8. Randger" << endl;
        cout << "9. Rogue" << endl;
        cout << "10. Sorcerer" << endl;
        cout << "11. Warlock" << endl;
        cout << "12. Wizard" << endl;

        cin >> classNum;
    }



    //Race selection
    if (choiceRace)
    {
        cout << "1. Dwarf" << endl;
        cout << "2. Elf" << endl;
        cout << "3. Halfling" << endl;
        cout << "4. Human" << endl;
        cout << "5. Dragonborn" << endl;
        cout << "6. Half-Elf" << endl;
        cout << "7. Half-Orc" << endl;
        cout << "8. Gnome" << endl;
        cout << "9. Teifling" << endl;

        cin >> raceNum;
    }
    

    //Background selection
    if (choiceBackground)
    {
        cout << "1. Acolyte" << endl;
        cout << "2. Charlatan" << endl;
        cout << "3. Criminal" << endl;
        cout << "4. Entertainer" << endl;
        cout << "5. Folk Hero" << endl;
        cout << "6. Guild Artisan" << endl;
        cout << "7. Hermit" << endl;
        cout << "8. Noble" << endl;
        cout << "9. Outlander" << endl;
        cout << "10. Sage" << endl;
        cout << "11. Sailor" << endl;
        cout << "12. Soldier" << endl;
        cout << "13. Urchin" << endl;

        cin >> backgroundNum;

    }

    if (classNum == 1)
    {
        cla = "barbarian";
        if (subclassNum == 1)
        {
            subclass = "Path of the Berserker";
        }
         if (subclassNum == 2)
        {
          subclass = "Path of the Totem Warrior";  
        }
    }
    if (classNum == 2)
    {
        cla = "bard";
        if (subclassNum == 1)
        {
            subclass = "College of Lore";
        }
         if (subclassNum == 2)
        {
            subclass = "College of Valor";
        }
    }
    if (classNum == 3)
    {
       cla = "cleric"; 
       subclassNum = rand()% 7 + 1;
       if (subclassNum == 1)
        {
            subclass = "knowledge domain";
        }
         if (subclassNum == 2)
        {
           subclass = "life domain"; 
        }
        if (subclassNum == 3)
        {
            subclass = "light domain";
        }
         if (subclassNum == 4)
        {
           subclass = "nature domain"; 
        }
        if (subclassNum == 5)
        {
            subclass = "tempest domain";
        }
         if (subclassNum == 6)
        {
            subclass = "trickery domain";
        }
        if (subclassNum == 7)
        {
            subclass = "war domain";
        }    
        }
    if (classNum == 4)
    {
        cla = "druid";
        if (subclassNum == 1)
        {
            subclass = "Circle of the Land";
        }
         if (subclassNum == 2)
        {
            subclass = "Circle of the Moon";
        }
    }
    if (classNum == 5)
    {
        cla = "fighter";
        subclassNum = rand()% 3 + 1;
        if (subclassNum == 1)
        {
            subclass = "champion";
        }
         if (subclassNum == 2)
        {
           subclass = "battlemaster"; 
        }
        if (subclassNum == 3)
        {
            subclass = "eldrich knight";
        }
    }
    if (classNum == 6)
    {
        cla = "monk";
        subclassNum = rand()% 3 + 1;
        if (subclassNum == 1)
        {
            subclass = "Way of the Open Hand";
        }
         if (subclassNum == 2)
        {
          subclass = "Way of Shadow";  
        }
        if (subclassNum == 3)
        {
            subclass = "Way of the Four Elements";
        }
    }
    if (classNum == 7)
    {
       cla = "paladin";
       subclassNum = rand()% 3 + 1;
       if (subclassNum == 1)
        {
            subclass = "Oath of Devotion";
        }
         if (subclassNum == 2)
        {
            subclass = "Oath of the Ancients";
        }
        if (subclassNum == 3)
        {
            subclass = "Oath of Vengance";
        }
    }
    if (classNum == 8)
    {
        cla = "ranger";
        if (subclassNum == 1)
        {
            subclass = "hunter";
        }
         if (subclassNum == 2)
        {
            subclass = "beast master";
        }
    }
    if (classNum == 9)
    {
        cla = "rogue";
        subclassNum = rand()% 3 + 1;
        if (subclassNum == 1)
        {subclassNum = rand()% 2 + 1;
            subclass = "thief";
        }
         if (subclassNum == 2)
        {
            subclass = "assassin";
        }
        if (subclassNum == 3)
        {
            subclass = "arcane trickster";
        }
    }
    if (classNum == 10)
    {
       cla = "sorcerer";
       if (subclassNum == 1)
        {
            subclass = "draconic bloodline";
        }
         if (subclassNum == 2)
        {
           subclass = "wild magic"; 
        } 
    }
    if (classNum == 11)
    {
        cla = "warlock";
        subclassNum = rand()% 3 + 1;
        if (subclassNum == 1)
        {
            subclass = "archfey patron";
        }
         if (subclassNum == 2)
        {
            subclass = "feind patron";
        }
        if (subclassNum == 1)
        {
            subclass = "great old one patron";
        }
    }
    if (classNum == 12)
    {
       cla = "wizard"; 
       subclassNum = rand()% 8 + 1;
       if (subclassNum == 1)
        {
            subclass = "abjuration";
        }
         if (subclassNum == 2)
        {
            subclass = "conjuration";
        }
        if (subclassNum == 3)
        {
            subclass = "divination";
        }
         if (subclassNum == 4)
        {
           subclass = "enchantment"; 
        }
        if (subclassNum == 5)
        {
            subclass = "evocation";
        }
         if (subclassNum == 6)
        {subclassNum = rand()% 2 + 1;
            subclass = "illusion";
        }
        if (subclassNum == 7)
        {
            subclass = "necromancy";
        }
         if (subclassNum == 8)
        {
            subclass = "transmutation";
        }
    }
  

    if (raceNum == 1)
    {
        race = "dwarf";
        con++;
        con++;
        if (subraceNum == 1)
        {
            subrace = "hill";
            wis++;
        }
        if (subraceNum == 2)
        {
            subrace = "mountain";
            str++;
            str++;
        }
    }
    if (raceNum == 2)
    {
        race = "elf";
        dex++;
        dex++;
         if (subraceNum == 1)
        {
            subrace = "high";
            intel++;
        }
        if (subraceNum == 2)
        {
            subrace = "wood";
            wis++;
        }
    }
    if (raceNum == 3)
    {
       race = "halfling"; 
       dex++;
       dex++;
        if (subraceNum == 1)
        {
            subrace = "lightfoot";
            cha++;
        }
        if (subraceNum == 2)
        {
            subrace = "stout";
            con++;
        }
    }
    if (raceNum == 4)
    {
        race = "human";
         if (subraceNum == 1)
        {
            subrace = "";
            str++;
            dex++;
            con++;
            intel++;
            wis++;
            cha++;
        }
        if (subraceNum == 2)
        {
            subrace = "variant";
            if (attBonusNum1 == 1)
            {
                str++;
            }
            if (attBonusNum1 == 2)
            {
                dex++;
            }
            if (attBonusNum1 == 3)
            {
               con++; 
            }
            if (attBonusNum1 == 4)
            {
                intel++;
            }
            if (attBonusNum1 == 5)
            {
                wis++;
            }
            if (attBonusNum1 == 6)
            {
                cha++;
            }
            if (attBonusNum2 == 1)
            {
                str++;
            }
            if (attBonusNum2 == 2)
            {
                dex++;
            }
            if (attBonusNum2 == 3)
            {
                con++;
            }
            if (attBonusNum2 == 4)
            {
                intel++;
            }
            if (attBonusNum2 == 5)
            {
                wis++;
            }
            if (attBonusNum2 == 6)
            {
                cha++;
            }
        }
    }
    if (raceNum == 5)
    {
        race = "dragonborn";
        str++;
        str++;
        cha++;
        subraceNum = rand()% 10 + 1;
         if (subraceNum == 1)
        {
            subrace = "black";
        }
        if (subraceNum == 2)
        {
            subrace = "blue";
        }
         if (subraceNum == 3)
        {
            subrace = "brass";
        }
        if (subraceNum == 4)
        {
            subrace = "bronze";
        }
         if (subraceNum == 5)
        {
            subrace = "copper";
        }
        if (subraceNum == 6)
        {
            subrace = "gold";
        }
         if (subraceNum == 7)
        {
            subrace = "green";
        }
        if (subraceNum == 8)
        {
            subrace = "red";
        }
         if (subraceNum == 9)
        {
            subrace = "silver";
        }
        if (subraceNum == 10)
        {
            subrace = "white";
        }
    }
    if (raceNum == 6)
    {
        race = "half-elf";
        cha++;
        cha++;
         if (attBonusNum1 == 1)
            {
                str++;
            }
            if (attBonusNum1 == 2)
            {
                dex++;
            }
            if (attBonusNum1 == 3)
            {
               con++; 
            }
            if (attBonusNum1 == 4)
            {
                intel++;
            }
            if (attBonusNum1 == 5)
            {
                wis++;
            }
            if (attBonusNum1 == 6)
            {
                cha++;
            }
            if (attBonusNum2 == 1)
            {
                str++;
            }
            if (attBonusNum2 == 2)
            {
                dex++;
            }
            if (attBonusNum2 == 3)
            {
                con++;
            }
            if (attBonusNum2 == 4)
            {
                intel++;
            }
            if (attBonusNum2 == 5)
            {
                wis++;
            }
            if (attBonusNum2 == 6)
            {
                cha++;
            }
    }
    if (raceNum == 7)
    {
       race = "half-orc"; 
       str++;
       str++;
       con++;
    }
    if (raceNum == 8)
    {
        race = "gnome";
        intel++;
        intel++;
         if (subraceNum == 1)
        {
            subrace = "forest";
            dex++;
        }
        if (subraceNum == 2)
        {
            subrace = "rock";
            con++;
        }
    }
    if (raceNum == 9)
    {
        race = "tiefling";
        intel++;
        cha++;
        cha++;
         if (subraceNum == 1)
        {
            subrace = "infernal";
        }
        if (subraceNum == 2)
        {
          subrace = "abyssal"; 
        }
    }


    if (backgroundNum == 1)
    {
        background = "acolyte";
        if (personailtyNum == 1)
        {
            personality = "idolize a particular hero of your faith, and constantly refer to that person's deeds and example.";
        }
        if (personailtyNum == 2)
        {
            personality = "can find common ground between the fiercest enemies, empathizing with them and always working toward peace.";
        }
        if (personailtyNum == 3)
        {
            personality = "see omens in every event and action. You believe the gods try to speak to us, we just need to listen.";
        }
        if (personailtyNum == 4)
        {
            personality = "are ever the optimist.";
        }
        if (personailtyNum == 5)
        {
            personality = "quote (or misquote) sacred texts and proverbs in almost every situation.";
        }
        if (personailtyNum == 6)
        {
            personality = "are tolerent of the faiths of others and respect the worship of other gods.";
        }
        if (personailtyNum == 7)
        {
            personality = "have enjoyed fine food, drink, and high society among your temple's elite. You are not used to rough living.";
        }
        if (personailtyNum == 8)
        {
            personality = "spent so long in the temple that you have little practical experience dealing with people in the outside world.";
        }

        if (idealNum == 1)
        {
            ideal = "the ancient traditions of worship and sacrifice must be upheld.";
        }
        if (idealNum == 2)
        {
            ideal = "you should help those in need no matter the cost to yourself.";
        }
        if (idealNum == 3)
        {
            ideal = "you must help bring about the change that the gods are working in the world.";
        }
        if (idealNum == 4)
        {
            ideal = "one day you will rise to the head of your order.";
        }
        if (idealNum == 5)
        {
            ideal = "your deity will guide your actions. You believe that if you work hard things will go well.";
        }
        if (idealNum == 6)
        {
            ideal = "you must prove yourself worthy of your god's favor by matching your actions against their teachings.";
        }

        if (bondNum == 1)
        {
            bond = "You would die to recover an ancient relic of your faith that was lost long ago";
        }
        if (bondNum == 2)
        {
            bond = "You wish to get revenge on the corrupt temple heirarchy that branded you a heretic";
        }
        if (bondNum == 3)
        {
            bond = "You owe your life to the preist who took you in when your parents died";
        }
        if (bondNum == 4)
        {
            bond = "Everything you do, you do for the common people";
        }
        if (bondNum == 5)
        {
            bond = "You would do anything to protect the temple where you served";
        }
        if (bondNum == 6)
        {
            bond = "You seek to protect a sacred text that your enemies consider heretical and seek to destroy";
        }

        if (flawNum == 1)
        {
            flaw = "you judge others harshly and others even more severely.";
        }
        if (flawNum == 2)
        {
            flaw = "you put too much trust in those who weild power within the temple's heirarchy.";
        }
        if (flawNum == 3)
        {
            flaw = "your peity sometimes leads you to blindly trust those that profess faith in your god.";
        }
        if (flawNum == 4)
        {
            flaw = "you are inflexible in your thinking.";
        }
        if (flawNum == 5)
        {
            flaw = "you are suspicious of strangers and expect the worst of them.";
        }
        if (flawNum == 6)
        {
            flaw = "once you pick a goal, you become obsessed with it to the detriment of everything else in your life.";
        }
    }
    if (backgroundNum == 2)
    {
        background = "charlatan";
        backgroundExtraNum = rand() % 6 + 1;
        if (backgroundExtraNum == 1)
        {
            backgroundExtra = " who made money by cheating at games of chance.";
        }
         if (backgroundExtraNum == 2)
        {
            backgroundExtra = " who made a profit from counterfeiting coin and doccuments.";
        }
         if (backgroundExtraNum == 3)
        {
            backgroundExtra = " who worked their way into people's lives in order to profit from their fortunes.";
        }
         if (backgroundExtraNum == 4)
        {
            backgroundExtra = " who cycled through identities faster than changing clothes.";
        }
         if (backgroundExtraNum == 5)
        {
            backgroundExtra = " who ran slight-of- hand cons on the streets.";
        }
         if (backgroundExtraNum == 6)
        {
            backgroundExtra = " who profited by selling people worthless junk.";
        }

        if (personailtyNum == 1)
        {
            personality = "fall in and out of love easily, and are always pursuing someone.";
        }
        if (personailtyNum == 2)
        {
            personality = "have a joke for every occasion, especially occasions where humor is inappropiate.";
        }
        if (personailtyNum == 3)
        {
            personality = "prefer to use flattery to get what you want.";
        }
        if (personailtyNum == 4)
        {
            personality = "are a born gambler who can't resist taking a resist for a potential payoff.";
        }
        if (personailtyNum == 5)
        {
            personality = "lie about almost everything, even when there's no good reason to.";
        }
        if (personailtyNum == 6)
        {
            personality = "often fall back on sarcasm and insults.";
        }
        if (personailtyNum == 7)
        {
            personality = "keep a multitude of holy symbols on you and invoke whatever deity might become useful at any given moment.";
        }
        if (personailtyNum == 8)
        {
            personality = "pocket anything you see that might have some value.";
        }

        if (idealNum == 1)
        {
            ideal = "you are a free spirit, and no one tells you want to do.";
        }
        if (idealNum == 2)
        {
            ideal = "you should never target a person who does not have money to spare.";
        }
        if (idealNum == 3)
        {
            ideal = "your money should be distributed to the people who really need it.";
        }
        if (idealNum == 4)
        {
            ideal = "the same con should never be run twice.";
        }
        if (idealNum == 5)
        {
            ideal = "material goods come and go, bonds of friendship last forever.";
        }
        if (idealNum == 6)
        {
            ideal = "you will make something of yourself one day.";
        }

        if (bondNum == 1)
        {
            bond = "You fleeced the wrong person and must work to ensure that that person never crosses paths with you or those you care about";
        }
        if (bondNum == 2)
        {
            bond = "You owe everything to your mentor, a horrible person who is probably rotting in jail somewhere";
        }
        if (bondNum == 3)
        {
            bond = "Somewhere out there, you have a child who does not know you. You are trying to make the world better for him or her";
        }
        if (bondNum == 4)
        {
            bond = "You come from a noble family and one day you believe you will reclaim your lands and title from those who stole them from you";
        }
        if (bondNum == 5)
        {
            bond = "A powerful person killed someone I love. Some day soon, you believe you will have your revenge";
        }
        if (bondNum == 6)
        {
            bond = "You have swindled a person who did not deserve it. You seek to atone for this misdeed but might never be able to forgive yourself";
        }

        if (flawNum == 1)
        {
            flaw = "you can never resist a pretty face.";
        }
        if (flawNum == 2)
        {
           flaw = "you always seem to be in debt. You spend your ill-gotten gains on decadant luxuries faster than you can bring them in.";
        }
        if (flawNum == 3)
        {
            flaw = "you are convinced that no one could ever fool you the way you fool others.";
        }
        if (flawNum == 4)
        {
            flaw = "you are too greedy for your own good. You can't resist taking a risk if there is money involved.";
        }
        if (flawNum == 5)
        {
            flaw = "you can't resist swindling those more powerful than yourself.";
        }
        if (flawNum == 6)
        {
            flaw = "you hate to admit it and hate yourself for it but, you would run to preserve your own hide if the going gets tough.";
        }
    }
    if (backgroundNum == 3)
    {
       background = "criminal"; 
         if (backgroundExtraNum == 1)
        {
            backgroundExtra = " who mostly took part in blackmailing schemes.";
        }
         if (backgroundExtraNum == 2)
        {
            backgroundExtra = " who mostly took jobs as a burglar.";
        }
         if (backgroundExtraNum == 3)
        {
            backgroundExtra = " who was an enforcer for a shady organization.";
        }
         if (backgroundExtraNum == 4)
        {
            backgroundExtra = ", a fence willing to buy and sell stolen goods.";
        }
         if (backgroundExtraNum == 5)
        {
            backgroundExtra = " who made a living as a highwayman.";
        }
         if (backgroundExtraNum == 6)
        {
            backgroundExtra = " who worked as a hired killer, and assassin.";
        }
         if (backgroundExtraNum == 7)
        {
            backgroundExtra = " who was known for being able to pick pockets.";
        }
         if (backgroundExtraNum == 8)
        {
           backgroundExtra = " who smuggled all sorts of illegal goods."; 
        }

       if (personailtyNum == 1)
        {
            personality = "always have a plan for what to do when things go wrong.";
        }
        if (personailtyNum == 2)
        {
           personality = "are always calm, no matter what the situation. You never raise your voice or let your emotions get the best of you.";
        }
        if (personailtyNum == 3)
        {
           personality = "always note the locations of valuables in a new place, and where those things could be hidden."; 
        }
        if (personailtyNum == 4)
        {
          personality = "would rather make a new friend rather than a new enemy.";  
        }
        if (personailtyNum == 5)
        {
            personality = "are i9ncedibly slow to trust. Those who seem the fairest are often the ones with the most to hide.";
        }
        if (personailtyNum == 6)
        {
            personality = "don't pay attention to the risks in a situation. Never tell you the odds.";
        }
        if (personailtyNum == 7)
        {
            personality = "will almost always try something if you are told that you can't do it.";
        }
        if (personailtyNum == 8)
        {
           personality = "blow up at the slightest insult.";
        }

        if (idealNum == 1)
        {
            ideal = "you should never steal from others in the trade.";
        }
        if (idealNum == 2)
        {
            ideal = "chains, and those who forge them, are menat to be broken.";
        }
        if (idealNum == 3)
        {
            ideal = "you should steal from the wealthy in order to help those in need.";
        }
        if (idealNum == 4)
        {
            ideal = "you will become wealthy by whatever means necessay.";
        }
        if (idealNum == 5)
        {
            ideal = "you are loyal to your friends instead of any ideals, and anyone else can take a trip down the Styx for all you care.";
        }
        if (idealNum == 6)
        {
            ideal = "there is a spark of good in everyone.";
        }

        if (bondNum == 1)
        {
            bond = "You are trying to pay off an old debt you owe a generous benefactor";
        }
        if (bondNum == 2)
        {
           bond = "Your ill-gotten gains got to support your family"; 
        }
        if (bondNum == 3)
        {
            bond = "Something important was taken from you, and you aim to steal it back";
        }
        if (bondNum == 4)
        {
            bond = "You aim to become the greatest theif who ever lived";
        }
        if (bondNum == 5)
        {
            bond = "You are guilty of a terrible crime. You hope to redeem yourself one day";
        }
        if (bondNum == 6)
        {
            bond = "Someone you loved died because of you mistake. You won't allow it to happen again";
        }

        if (flawNum == 1)
        {
            flaw = "when you see something valuable you can't think of anything but how to steal it.";
        }
        if (flawNum == 2)
        {
            flaw = "when you are faced with a choice between money and your friends you usually end up choosing the money.";
        }
        if (flawNum == 3)
        {
           flaw = "if there is a plan you will forget it, and if you don't you'll ignore it."; 
        }
        if (flawNum == 4)
        {
           flaw = "you have a tell when you are lying."; 
        }
        if (flawNum == 5)
        {
          flaw = "you turn tail every time things look bad.";  
        }
        if (flawNum == 6)
        {
          flaw = "there is an innocent person in prison for a crime you commited.";  
        }
    }
    if (backgroundNum == 4)
    {
        background = "entertainer";
        backgroundExtraNum = rand() % 10 +1;
         if (backgroundExtraNum == 1)
        {
            backgroundExtra = ", a dramatic actor.";
        }
         if (backgroundExtraNum == 2)
        {
            backgroundExtra = ", a dancer.";
        }
         if (backgroundExtraNum == 3)
        {
            backgroundExtra = " with a fire eater routine.";
        }
         if (backgroundExtraNum == 4)
        {
            backgroundExtra = ", a famous jester.";
        }
         if (backgroundExtraNum == 5)
        {
           if (dex > 12)
            {
                backgroundExtra = ", with an impressive juggling routine.";
            }
            if (dex < 12)
            {
                backgroundExtra = ", with a pitiful juggling routine.";
            }
        }
         if (backgroundExtraNum == 6)
        {
            backgroundExtra = ", proficient with a vareity of instuments.";
        }
         if (backgroundExtraNum == 7)
        {
            backgroundExtra = ", a poet.";
        }
         if (backgroundExtraNum == 8)
        {
           backgroundExtra = ", a singer."; 
        }
         if (backgroundExtraNum == 9)
        {
            backgroundExtra = ", a storyteller.";
        }
         if (backgroundExtraNum == 10)
        {
           if (dex > 12)
            {
                backgroundExtra = ", an impressive acrobatic routine.";
            }
            if (dex < 12)
            {
                backgroundExtra = ", a pitiful acrobatic routine.";
            }
        }

        if (personailtyNum == 1)
        {
            personality = "know a story relevant to almost every situation.";
        }
        if (personailtyNum == 2)
        {
            personality = "always collect local rumors and gossip when coming to a new place.";
        }
        if (personailtyNum == 3)
        {
            personality = "are a hopeless romantic, always searching for that special someone.";
        }
        if (personailtyNum == 4)
        {
            personality = "can diffuse any ammount of tension. Nobody stays angry at or around you for long.";
        }
        if (personailtyNum == 5)
        {
            personality = "love a good insult, even one directed at me.";
        }
        if (personailtyNum == 6)
        {
            personality = "get bitter if you are not the center of attention.";
        }
        if (personailtyNum == 7)
        {
            personality = "will settle for nothing less than perfection.";
        }
        if (personailtyNum == 8)
        {
            personality = "change your mood and mind as quickly as you might change notes in a song.";
        }

        if (idealNum == 1)
        {
            ideal = "when you preform you make the world a better place than it was before.";
        }
        if (idealNum == 2)
        {
            ideal = "the stories, songs, and legends of the past must never be forgotten. They teach us who we are.";
        }
        if (idealNum == 3)
        {
            ideal = "the world is in need of new ideas and bold action.";
        }
        if (idealNum == 4)
        {
            ideal = "you are only in it for the fame and money.";
        }
        if (idealNum == 5)
        {
            ideal = "all that matters is seeing the smiles on people's faces when you perform.";
        }
        if (idealNum == 6)
        {
            ideal = "art should reflect the soul. It should come from within and reveal who you are.";
        }

        if (bondNum == 1)
        {
            bond = "Your instrument is your most treasured possetion, it reminds you of someone you love";
        }
        if (bondNum == 2)
        {
            bond = "Someone stole your precious instrument, and someday you will get it back";
        }
        if (bondNum == 3)
        {
            bond = "You want to be famous at any cost";
        }
        if (bondNum == 4)
        {
            bond = "You idolize a hero of old tales and measure your deeds against that person's";
        }
        if (bondNum == 5)
        {
            bond = "You will do anything to prove yourself superior to your hated rival";
        }
        if (bondNum == 6)
        {
            bond = "You would do anything for the members of your old troupe";
        }

        if (flawNum == 1)
        {
            flaw = "you will do anything to win fame and renown.";
        }
        if (flawNum == 2)
        {
            flaw = "you are a sucker for a pretty face.";
        }
        if (flawNum == 3)
        {
            flaw = "a scandal prevents you from going home again. This kind of trouble seems to follow you around.";
        }
        if (flawNum == 4)
        {
            flaw = "you once satirized a noble who wants your head.";
        }
        if (flawNum == 5)
        {
           flaw = "you have trouble keeping my true feelings hidden. Your sharp tongue lands you in trouble."; 
        }
        if (flawNum == 6)
        {
          flaw = "despite your best efforts, you are unreliable to friends.";  
        }
    }
    if (backgroundNum == 5)
    {
        background = "folk hero";
        backgroundExtraNum = rand() % 10 +1;
         if (backgroundExtraNum == 1)
        {
            backgroundExtra = " who stood up to a tyrant's agents.";
        }
         if (backgroundExtraNum == 2)
        {
            backgroundExtra = " who saved people during a natural disaster.";
        }
         if (backgroundExtraNum == 3)
        {
            backgroundExtra = " who stood alone against a terrible monster.";
        }
         if (backgroundExtraNum == 4)
        {
            backgroundExtra = " who stole from a corrupt merchant to help the poor.";
        }
         if (backgroundExtraNum == 5)
        {
            backgroundExtra = " who led a militia to fight an invading army.";
        }
         if (backgroundExtraNum == 6)
        {
            backgroundExtra = " who broke into a tyrant's castle to steal weapons and arm the people.";
        }
         if (backgroundExtraNum == 7)
        {
            backgroundExtra = " who trained the peasants to use farming tools as weapons against a tyrant's soldiers.";
        }
         if (backgroundExtraNum == 8)
        {
           backgroundExtra = " who led a protest against an unpopular decree."; 
        }
         if (backgroundExtraNum == 9)
        {
            backgroundExtra = " who was revealed to be destined for greatness by a celestial.";
        }
         if (backgroundExtraNum == 10)
        {
            backgroundExtra = " who rose through the ranks into the army and became a great leader.";
        }

        if (personailtyNum == 1)
        {
            personality = "judge people by their actions, not their words.";
        }
        if (personailtyNum == 2)
        {
           personality = "are always ready to lend help when someone is in trouble."; 
        }
        if (personailtyNum == 3)
        {
            personality = "follow through whenever you set your mind to a task, no matter what gets in the way.";
        }
        if (personailtyNum == 4)
        {
            personality = "have a strong sense of fair play and always try to find the equitable solution to arguments.";
        }
        if (personailtyNum == 5)
        {
            personality = "are confident in your own abilities and do what you can to instill confidence in others.";
        }
        if (personailtyNum == 6)
        {
            personality = "prefer action and leave thinking to others.";
        }
        if (personailtyNum == 7)
        {
            personality = "misuse long words in order to to sound smarter.";
        }
        if (personailtyNum == 8)
        {
            personality = "get bored easily, and constantly want to get on with your destiny.";
        }

        if (idealNum == 1)
        {
            ideal = "people deserve to be treated with dignity and respect.";
        }
        if (idealNum == 2)
        {
            ideal = "no one should get preferential treatment before the law, and no one is above the law.";
        }
        if (idealNum == 3)
        {
            ideal = "tyrants must not be allowed to opress the people.";
        }
        if (idealNum == 4)
        {
            ideal = "if you become strong, you can take whatever you want.";
        }
        if (idealNum == 5)
        {
            ideal = "there is no good pretending to be something you're not.";
        }
        if (idealNum == 6)
        {
            ideal = "nothing can steer you away from your higher calling.";
        }

        if (bondNum == 1)
        {
            bond = "You have family but have no idea where they are. One day you hope to see them again";
        }
        if (bondNum == 2)
        {
            bond = "You worked the land, you love the land, and you will protect the land";
        }
        if (bondNum == 3)
        {
            bond = "A proud noble once gave you a terrible beating, and you will take your revenge on any bully you encounter";
        }
        if (bondNum == 4)
        {
            bond = "Your tools are symbols of your past life, and you carry them so that you will never forget your roots";
        }
        if (bondNum == 5)
        {
            bond = "You are determined to protect those who cannot protect themselves";
        }
        if (bondNum == 6)
        {
            bond = "You wish your childhood sweetheart had come with you to pursue your destiny";
        }

        if (flawNum == 1)
        {
            flaw = "they tyrant who rules your land will stop at nothing to see you killed.";
        }
        if (flawNum == 2)
        {
            flaw = "you are convinced of the significance of your destiny, and blind to you shortcomings and the risk of failure.";
        }
        if (flawNum == 3)
        {
            flaw = "the people who knew you when you were young know your shameful secret, so you can never go home agian.";
        }
        if (flawNum == 4)
        {
            flaw = "you have weakness for the vices of the city, especially hard drink.";
        }
        if (flawNum == 5)
        {
            flaw = "secretly you beleive that things would be better if you were a tyrant lording over the land.";
        }
        if (flawNum == 6)
        {
            flaw = "you have trouble trusting your allies.";
        }
    }
    if (backgroundNum == 6)
    {
        background = "guild artisan";
        backgroundExtraNum = rand() % 20 + 1;
         if (backgroundExtraNum == 1)
        {
            backgroundExtra = ", a member of a guild for alchemists and apothecaries.";
        }
         if (backgroundExtraNum == 2)
        {
            backgroundExtra = ", a member of a guild for smiths.";
        }
         if (backgroundExtraNum == 3)
        {
            backgroundExtra = ", a member of a guild for brewers, distillers, and vinters.";
        }
         if (backgroundExtraNum == 4)
        {
            backgroundExtra = ", a member of a guild for calligraphers and scribes.";
        }
         if (backgroundExtraNum == 5)
        {
            backgroundExtra = ", a member of a guild for carpenters.";
        }
         if (backgroundExtraNum == 6)
        {
            backgroundExtra = ", a member of a guild for cartographers and surveyors.";
        }
         if (backgroundExtraNum == 7)
        {
            backgroundExtra = ", a member of a guild for cobblers and shoemakers.";
        }
         if (backgroundExtraNum == 8)
        {
           backgroundExtra = ", a member of a guild for cooks and bakers."; 
        }
         if (backgroundExtraNum == 9)
        {
            backgroundExtra = ", a member of a guild for glassblowers.";
        }
         if (backgroundExtraNum == 10)
        {
            backgroundExtra = ", a member of a guild for jewelers and gemcutters.";
        }
         if (backgroundExtraNum == 11)
        {
            backgroundExtra = ", a member of a guild for leatherworkers, skinners, and tanners.";
        }
         if (backgroundExtraNum == 12)
        {
            backgroundExtra = ", a member of a guild for stonemasons.";
        }
         if (backgroundExtraNum == 13)
        {
            backgroundExtra = ", a member of a guild for painters and signmakers.";
        }
         if (backgroundExtraNum == 14)
        {
            backgroundExtra = ", a member of a guild for potters.";
        }
         if (backgroundExtraNum == 15)
        {
            backgroundExtra = ", a member of a guild for shipwrights.";
        }
         if (backgroundExtraNum == 16)
        {
            backgroundExtra = " with no guild.";
            background = "artisan";
        }
         if (backgroundExtraNum == 17)
        {
            backgroundExtra = ", a member of a guild for tinkerers and inventors.";
        }
         if (backgroundExtraNum == 18)
        {
           backgroundExtra = ", a member of a guild for wagon-makers and wheelwrights."; 
        }
         if (backgroundExtraNum == 19)
        {
            backgroundExtra = ", a member of a guild for weavers and dyers.";
        }
         if (backgroundExtraNum == 20)
        {
            backgroundExtra = ", a member of a guild for woodcarvers, coopers, and bowyers.";
        }

        if (personailtyNum == 1)
        {
            personality = "believe anything worth doing is worth doing right. You can't help but being a perfectionist.";
        }
        if (personailtyNum == 2)
        {
            personality = "are a snob who looks down on those who can't appriciate fine art.";
        }
        if (personailtyNum == 3)
        {
            personality = "always want to know how things work and what makes people tick.";
        }
        if (personailtyNum == 4)
        {
            personality = "are full of witty aphorisms and you have a proverb for every occasion.";
        }
        if (personailtyNum == 5)
        {
            personality = "are rude to people who lack your same commitment to hard work and fair play.";
        }
        if (personailtyNum == 6)
        {
            personality = "like to talk at length about your profession.";
        }
        if (personailtyNum == 7)
        {
            personality = "don't part easily with your money and will haggle endlessly to get the best deal possible.";
        }
        if (personailtyNum == 8)
        {
           personality = "are well known for your work, and you want to make sure everyone appriciates it. You are always taken aback when someone has not heard of you.";
        }

        if (idealNum == 1)
        {
            ideal = "it's the duty of all civilized people to strengthen the bonds of community and the security of civilization.";
        }
        if (idealNum == 2)
        {
            ideal = "your talents were given to you so that you can use them to benefit the world.";
        }
        if (idealNum == 3)
        {
            ideal = "everyone should be free to pursue his or her own liveliood.";
        }
        if (idealNum == 4)
        {
            ideal = "you are only in it for the money.";
        }
        if (idealNum == 5)
        {
            ideal = "the people you care about are more important than any ideal.";
        }
        if (idealNum == 6)
        {
            ideal = "you will work to become the best in your craft.";
        }

        if (bondNum == 1)
        {
            bond = "The workshop where you learned your trade is the most important place in the world to you";
        }
        if (bondNum == 2)
        {
            bond = "You created a great work for someone, and then found them unworthy to receive it. You are still looking for someone worthy";
        }
        if (bondNum == 3)
        {
            bond = "You owe your guild a great debt for making you into the person you are today";
        }
        if (bondNum == 4)
        {
            bond = "You pursue wealth to secure someone's love";
        }
        if (bondNum == 5)
        {
            bond = "You believe that one day you will return to your guild and prove you are the greatest artisan of them all";
        }
        if (bondNum == 6)
        {
            bond = "You are determined to get revenge on the evil forces that destroyed your place of business and ruined your livelihood";
        }

        if (flawNum == 1)
        {
            flaw = "you will deo anything to get your hands on something rare and priceless.";
        }
        if (flawNum == 2)
        {
           flaw = "you are quick to assume that someone is trying to cheat you.";
        }
        if (flawNum == 3)
        {
            flaw = "no one must ever learn that you once stole money from the guild coffers.";
        }
        if (flawNum == 4)
        {
            flaw = "you are never satisfied with what you have and always want more.";
        }
        if (flawNum == 5)
        {
            flaw = "you would kill to aquire a noble title.";
        }
        if (flawNum == 6)
        {
            flaw = "you are horribly jealous of anyone who can outshine your handiwok. Everwhere you go you are surrounded by rivals.";
        }
    }
    if (backgroundNum == 7)
    {
       background = "hermit"; 
         if (backgroundExtraNum == 1)
        {
            backgroundExtra = " who was searching for spiritual enlightenment.";
        }
         if (backgroundExtraNum == 2)
        {
            backgroundExtra = " who was partaking in communal living in accordance with a religious order.";
        }
         if (backgroundExtraNum == 3)
        {
            backgroundExtra = " who was exiled for a crime you did not commit.";
        }
         if (backgroundExtraNum == 4)
        {
            backgroundExtra = " who retreated from society after a life-altering event.";
        }
         if (backgroundExtraNum == 5)
        {
            backgroundExtra = " who needed a quiet place to work on your art.";
        }
         if (backgroundExtraNum == 6)
        {
            backgroundExtra = " who wanted to commune with nature.";
        }
         if (backgroundExtraNum == 7)
        {
            backgroundExtra = " who was the caretaker of an ancient ruin or relic.";
        }
         if (backgroundExtraNum == 8)
        {
           backgroundExtra = " who was on a pilgrimage in search of a specific person, place, or relic."; 
        }
         
       if (personailtyNum == 1)
        {
            personality = "have been isolated for so long you can barely speak preferring gestures and the occasional grunt.";
        }
        if (personailtyNum == 2)
        {
            personality = "are utterly serene, even in the face of disaster.";
        }
        if (personailtyNum == 3)
        {
           personality = "are eager to share the wisdom of your community leaders with the world.";
        }
        if (personailtyNum == 4)
        {
            personality = "feel tremendous empathy for all who suffer.";
        }
        if (personailtyNum == 5)
        {
            personality = "are oblivious to etiquette and social expectations.";
        }
        if (personailtyNum == 6)
        {
            personality = "connect everything that happens to you to a grand cosmic plan.";
        }
        if (personailtyNum == 7)
        {
            personality = "often get lost in your own thoughts and contemplation, becoming oblivious to your surroundings.";
        }
        if (personailtyNum == 8)
        {
            personality = "are working on a grand philosophical theory and love sharing your ideas.";
        }

        if (idealNum == 1)
        {
            ideal = "your gifts are meant to be shared with all, not used for personal benefit.";
        }
        if (idealNum == 2)
        {
            ideal = "emotions must not cloud your sense of what's right and true, or logical thinking.";
        }
        if (idealNum == 3)
        {
            ideal = "iquiry and curiosity are the pillars of progress.";
        }
        if (idealNum == 4)
        {
            ideal = "solitude and contemplation are paths toward mistical thinking and magical power.";
        }
        if (idealNum == 5)
        {
            ideal = "meddling in the affairs of others only causes trouble.";
        }
        if (idealNum == 6)
        {
            ideal = "if you know yourself, there's nothing left to know.";
        }

        if (bondNum == 1)
        {
            bond = "Nothing is more important to you than the other memebers of your order";
        }
        if (bondNum == 2)
        {
            bond = "You enetered seclusion to hide from the ones who might still be hunting you. One day you will likely have to confront them.";
        }
        if (bondNum == 3)
        {
            bond = "You are still seeking the enlightenment you sought in your seclusion. It always seems to elude you";
        }
        if (bondNum == 4)
        {
            bond = "You entered seclusion because you loved someone you could not have";
        }
        if (bondNum == 5)
        {
            bond = "Should your discovery come to light it could bring ruin to the world";
        }
        if (bondNum == 6)
        {
            bond = "Your isolation gave you great insight into a great evil that only you can destroy";
        }

        if (flawNum == 1)
        {
            flaw = "now that you ahve returned to the world you enjoy it's delights a little too much.";
        }
        if (flawNum == 2)
        {
            flaw = "you harbor dark, bloodthirsty thoughts that your isolation and medetation failed to quell.";
        }
        if (flawNum == 3)
        {
            flaw = "you are dogmaticin your thoughts and philosophy.";
        }
        if (flawNum == 4)
        {
            flaw = "you let your need to win arguments overshadow your friendships.";
        }
        if (flawNum == 5)
        {
            flaw = "you would risk much to uncover a bit of lost knowledge.";
        }
        if (flawNum == 6)
        {
          flaw = "you like keeping secrets and won't share them with anyone.";
        }
    }
    if (backgroundNum == 8)
    {
        background = "noble";
        if (personailtyNum == 1)
        {
            personality = "make everyone you talk to feel like the most wonderful and important person in the world with your eloquent flattery.";
        }
        if (personailtyNum == 2)
        {
            personality = "are loved by the common folk for your kindness and generosity.";
        }
        if (personailtyNum == 3)
        {
            personality = "carry yourself like you are a cut above the common folk.";
        }
        if (personailtyNum == 4)
        {
            personality = "take great pains to look your best and follow the latest fashions.";
        }
        if (personailtyNum == 5)
        {
            personality = "don't like to get your hands dirty, and won't be caught dead in unsuitale accomidations.";
        }
        if (personailtyNum == 6)
        {
            personality = "you do not place yourself above other folk dispite your noble blood.";
        }
        if (personailtyNum == 7)
        {
            personality = "will never forget a slight. Once your favor is lost, it's lost forever.";
        }
        if (personailtyNum == 8)
        {
            personality = "will pay back any injury tenfold and more.";
        }

        if (idealNum == 1)
        {
            ideal = "you are due respect because of your position, but all people deserve to be treated with dignity.";
        }
        if (idealNum == 2)
        {
            ideal = "it's your duty to respect the authority of those above you, just as those below you should respect you.";
        }
        if (idealNum == 3)
        {
            ideal = "you must prove that you can handle yourself without the coddling of your family.";
        }
        if (idealNum == 4)
        {
           ideal = "if you can attain more power than no one can tell you what to do.";
        }
        if (idealNum == 5)
        {
            ideal = "blood runs thicker than water.";
        }
        if (idealNum == 6)
        {
            ideal = "it's your duty to protect and care for those beneath you.";
        }

        if (bondNum == 1)
        {
            bond = "You will face any challenge to win the approval of your family";
        }
        if (bondNum == 2)
        {
            bond = "Your house's alliance with another family must be sustained at all costs";
        }
        if (bondNum == 3)
        {
            bond = "To you nothing is more important than the other members of your family";
        }
        if (bondNum == 4)
        {
            bond = "You are in love with the heir of a family that your family despises";
        }
        if (bondNum == 5)
        {
            bond = "Your loyalty to your sovereign is unwavering";
        }
        if (bondNum == 6)
        {
            bond = "You are determined that the common folk should see you as a hero of the people";
        }

        if (flawNum == 1)
        {
            flaw = "secretly you believe that everyone is beneath you.";
        }
        if (flawNum == 2)
        {
            flaw = "you hide a truely scadelous secret that could ruin your family forever.";
        }
        if (flawNum == 3)
        {
            flaw = "you too often hear veiled insults and threats in every word addressed to you.";
        }
        if (flawNum == 4)
        {
            flaw = "you have an insatiable desire for carnal pleasures.";
        }
        if (flawNum == 5)
        {
            flaw = "you believe that the world does, in fact, revolve around you.";
        }
        if (flawNum == 6)
        {
            flaw = "your words and actions often bring shame to your family.";
        }
    }
    if (backgroundNum == 9)
    {
        background = "outlander";
        backgroundExtraNum = rand() % 10 +1;
         if (backgroundExtraNum == 1)
        {
            backgroundExtra = ", and a forester.";
        }
         if (backgroundExtraNum == 2)
        {
            backgroundExtra = ", and a trapper.";
        }
         if (backgroundExtraNum == 3)
        {
            backgroundExtra = ", heading to the wilderness with the goal of starting a homestead.";
        }
         if (backgroundExtraNum == 4)
        {
            backgroundExtra = ", and a wilderness guide.";
        }
         if (backgroundExtraNum == 5)
        {
            backgroundExtra = " who was exiled by society.";
        }
         if (backgroundExtraNum == 6)
        {
            backgroundExtra = ", working as a bounty hunter.";
        }
         if (backgroundExtraNum == 7)
        {
            backgroundExtra = ", on a pilgrimage.";
        }
         if (backgroundExtraNum == 8)
        {
           backgroundExtra = ", part of a nomadic tribe."; 
        }
         if (backgroundExtraNum == 9)
        {
            backgroundExtra = ", part of a hunter-gather tribe.";
        }
         if (backgroundExtraNum == 10)
        {
            backgroundExtra = ", part of a marauding tribe of raiders.";
        }

        if (personailtyNum == 1)
        {
            personality = "are driven by a wanderlust that lead you away from home.";
        }
        if (personailtyNum == 2)
        {
            personality = "watch over your friends like a litter of newborn pups.";
        }
        if (personailtyNum == 3)
        {
            personality = "once ran twenty-five miles without stopping to warn your clan of an approaching orc horde. You would do it again if necessary.";
        }
        if (personailtyNum == 4)
        {
            personality = "have a lesson for every situation drawn from observing nature.";
        }
        if (personailtyNum == 5)
        {
            personality = "place no stock in wealthy or well-manneredfolk. Money and manners will save no one from an hungry owlbear.";
        }
        if (personailtyNum == 6)
        {
            personality = "are always picking things up and absently fiddling with them, and sometimes accidentally breaking them.";
        }
        if (personailtyNum == 7)
        {
            personality = "feel far more comfortable around animals than people.";
        }
        if (personailtyNum == 8)
        {
            personality = "were, in fact, raised by wolves.";
        }

        if (idealNum == 1)
        {
            ideal = "life is like the seasons, in constant change, and you must change with it.";
        }
        if (idealNum == 2)
        {
            ideal = "it's each person's responsibility to make the most happiness for the whole tribe.";
        }
        if (idealNum == 3)
        {
            ideal = "if you dishonor yourself you dishonor your whole clan.";
        }
        if (idealNum == 4)
        {
            ideal = "the strongest are meant to rule.";
        }
        if (idealNum == 5)
        {
            ideal = "the natural world is more important than all the constructs of civilization.";
        }
        if (idealNum == 6)
        {
            ideal = "you must earn glory in battle, for yourself and for your clan.";
        }

        if (bondNum == 1)
        {
            bond = "Your family, clan, or tribe is the most important thing in your life, even when they are far away";
        }
        if (bondNum == 2)
        {
            bond = "Any injury to the unspoiled wilderness is an injury to you";
        }
        if (bondNum == 3)
        {
           bond = "You will bring down terrible wrath on the evildoers who destroyed your homeland";
        }
        if (bondNum == 4)
        {
            bond = "You are the last of your tribe, and it's up to you to ensure tha thteir names enter legend";
        }
        if (bondNum == 5)
        {
            bond = "You suffer aweful visions of a coming disaster and will do anything to prevent it";
        }
        if (bondNum == 6)
        {
            bond = "You believe it is your duty to provide children to sustain your tribe";
        }

        if (flawNum == 1)
        {
            flaw = "you are too enamored of ale, wine, and other intoxicants.";
        }
        if (flawNum == 2)
        {
            flaw = "you believe that there is no room for caution lived to the fullest.";
        }
        if (flawNum == 3)
        {
            flaw = "you remember every insult you have ever received and nurse a silent resentment towards anyone who ever wronged you.";
        }
        if (flawNum == 4)
        {
           flaw = "you are slow to trust members of other races, tribes, and societies."; 
        }
        if (flawNum == 5)
        {
           flaw = "viloence is your answer to almost any challenge.";
        }
        if (flawNum == 6)
        {
           flaw = "you should not be expected to save those who can't save themselves. You see it as nature's way that the strong survive and the weak perish."; 
        }
    }
    if (backgroundNum == 10)
    {
       background = "sage"; 
         if (backgroundExtraNum == 1)
        {
            backgroundExtra = ", and an alchemist.";
        }
         if (backgroundExtraNum == 2)
        {
            backgroundExtra = ", and an astronomer.";
        }
         if (backgroundExtraNum == 3)
        {
            backgroundExtra = ", but were discredited.";
        }
         if (backgroundExtraNum == 4)
        {
            backgroundExtra = ", and a librarian.";
        }
         if (backgroundExtraNum == 5)
        {
            backgroundExtra = ", a university professor.";
        }
         if (backgroundExtraNum == 6)
        {
            backgroundExtra = ", and a researcher.";
        }
         if (backgroundExtraNum == 7)
        {
            backgroundExtra = ", and the apprentice to a wizard.";
        }
         if (backgroundExtraNum == 8)
        {
           backgroundExtra = ", and a scribe."; 
        }
        
       if (personailtyNum == 1)
        {
            personality = "use polysyllabic worlds that convey the impression of great eurdition.";
        }
        if (personailtyNum == 2)
        {
            personality = "have ready every book in the world's greatest liberaries, or at least you like to boast that you have.";
        }
        if (personailtyNum == 3)
        {
            personality = "are used to helping those who are not as smart as you are, and you patiently explain everything to them.";
        }
        if (personailtyNum == 4)
        {
            personality = "find nothing as exciting as a great mystery.";
        }
        if (personailtyNum == 5)
        {
            personality = "are willing to listen to every side of an argument before you make your own judgement.";
        }
        if (personailtyNum == 6)
        {
            personality = "... speak...slowly...when talking...to idiots...which...almost...everyone...seems to be...compared...to...you.";
        }
        if (personailtyNum == 7)
        {
            personality = "are horribly, horribly awkward in social situations.";
        }
        if (personailtyNum == 8)
        {
            personality = "are convinced that people are always trying to steal your secrets.";
        }

        if (idealNum == 1)
        {
            ideal = "the path to power and self-improvement is through knowledge.";
        }
        if (idealNum == 2)
        {
            ideal = "what is beautiful points you toward what is true.";
        }
        if (idealNum == 3)
        {
            ideal = "emotions must not cloud logical thinking.";
        }
        if (idealNum == 4)
        {
            ideal = "nothing should fetter the infinite possibility inherent in all existance.";
        }
        if (idealNum == 5)
        {
            ideal = "knowledge is the path to power and domination.";
        }
        if (idealNum == 6)
        {
            ideal = "the goal of a life of study is the betterment of oneself.";
        }

        if (bondNum == 1)
        {
            bond = "You see it as your duty to protect your students";
        }
        if (bondNum == 2)
        {
            bond = "You have an ancient text that holds terrible secrets that must not fall into the wrong hands";
        }
        if (bondNum == 3)
        {
            bond = "You work to preserve a library, university, scriptorium, or monestary";
        }
        if (bondNum == 4)
        {
           bond = "Your life's work is a series of tomes on a specific feild of lore"; 
        }
        if (bondNum == 5)
        {
            bond = "You have been searching your whole life for the answer to a certain question";
        }
        if (bondNum == 6)
        {
            bond = "You've sold your soul for knowledge, you hope through great deeds you might be able to win it back";
        }

        if (flawNum == 1)
        {
            flaw = "you are easily distracted by the promise of information.";
        }
        if (flawNum == 2)
        {
            flaw = "whereas most people would scream and run at the sight of a demon, you would stop to take notes.";
        }
        if (flawNum == 3)
        {
            flaw = "to you, unlocking an ancient mystery is worth the price of a civilization.";
        }
        if (flawNum == 4)
        {
            flaw = "you overlook simple solutions in favor of complicated ones.";
        }
        if (flawNum == 5)
        {
           flaw = "you speak without really thinking through your words, and invariably insult others.";
        }
        if (flawNum == 6)
        {
            flaw = "you can't keep a secret to save your life, or anyone else's.";
        }
    }
    if (backgroundNum == 11)
    {
        background = "sailor";
        if (personailtyNum == 1)
        {
            personality = "are a reliable friend, no matter what.";
        }
        if (personailtyNum == 2)
        {
            personality = "work hard so that you can play hard when the work is done.";
        }
        if (personailtyNum == 3)
        {
            personality = "enjoy sailing to ports and making new friends over a flagon of ale.";
        }
        if (personailtyNum == 4)
        {
            personality = "stretch the truth for the sake of a good story.";
        }
        if (personailtyNum == 5)
        {
            personality = "think that a tavern brawl is a good way to get to know a new city.";
        }
        if (personailtyNum == 6)
        {
            personality = "never pass up a friendly wager.";
        }
        if (personailtyNum == 7)
        {
            personality = "use language as foul as an otyugh nest.";
        }
        if (personailtyNum == 8)
        {
            personality = "like a job well done, especially if you can convince someone else to do it.";
        }

        if (idealNum == 1)
        {
            ideal = "the thing that keeps a ship together is mutual respect between captain and crew.";
        }
        if (idealNum == 2)
        {
            ideal = "anyone that helps out in the work should also reap it's rewards.";
        }
        if (idealNum == 3)
        {
            ideal = "the sea is freedom. The freedom to go anywhere and do anything.";
        }
        if (idealNum == 4)
        {
            ideal = "you are a predator, and the other ships on the sea are your prey.";
        }
        if (idealNum == 5)
        {
            ideal = "you are commited to your crewmates, and not to ideals.";
        }
        if (idealNum == 6)
        {
          ideal = "some you will own your own ship and chart your own destiny.";
        }

        if (bondNum == 1)
        {
            bond = "You are loyal to your captain first, and everything else second";
        }
        if (bondNum == 2)
        {
            bond = "To you the ship is most important. Crewmates and captains come and go";
        }
        if (bondNum == 3)
        {
            bond = "You'll always remember your first ship";
        }
        if (bondNum == 4)
        {
            bond = "In a harbor town you have a paramour whose eyes nearly stole you from the sea";
        }
        if (bondNum == 5)
        {
            bond = "You were cheated out of your fair share of the profits, and you wish to get your due";
        }
        if (bondNum == 6)
        {
            bond = "Ruthless pirates pludered your ship and murdered your captain and crew. You are determined to get revenge";
        }

        if (flawNum == 1)
        {
            flaw = "you follow orders even if they are wrong.";
        }
        if (flawNum == 2)
        {
            flaw = "you will say anything to avoid having to do extra work.";
        }
        if (flawNum == 3)
        {
            flaw = "once someone questions your courage, you will never back down despite any danger.";
        }
        if (flawNum == 4)
        {
            flaw = "once you start drinking it's hard for you to stop.";
        }
        if (flawNum == 5)
        {
            flaw = "you can't help but pocket loose coins and other trinkets that you come across.";
        }
        if (flawNum == 6)
        {
            flaw = "your pride will probably lead to your destruction.";
        }
    }
    if (backgroundNum == 12)
    {
       background = "soldier"; 
         if (backgroundExtraNum == 1)
        {
            backgroundExtra = ", an officer in the army.";
        }
         if (backgroundExtraNum == 2)
        {
            backgroundExtra = ", a scout in the army.";
        }
         if (backgroundExtraNum == 3)
        {
            backgroundExtra = ", a simple infantryman.";
        }
         if (backgroundExtraNum == 4)
        {
            backgroundExtra = ", a calvalryman.";
        }
         if (backgroundExtraNum == 5)
        {
            backgroundExtra = ", a military doctor or healer.";
        }
         if (backgroundExtraNum == 6)
        {
            backgroundExtra = ", the quartermaster.";
        }
         if (backgroundExtraNum == 7)
        {
            backgroundExtra = ", the standard bearer for your army.";
        }
         if (backgroundExtraNum == 8)
        {
           backgroundExtra = ", a craftsman supporting the army."; 
        }
        
       if (personailtyNum == 1)
        {
            personality = "are always positive and respectful.";
        }
        if (personailtyNum == 2)
        {
            personality = "are haunted by memories of war. You can't get the images of violene out of your mind.";
        }
        if (personailtyNum == 3)
        {
            personality = "have lost too many friends, and are slow to make new ones.";
        }
        if (personailtyNum == 4)
        {
            personality = "are full of inspiring and cautionary tales fom your military experience relevant to almost every combat situation.";
        }
        if (personailtyNum == 5)
        {
            personality = "can stare down a hell hound without flinching.";
        }
        if (personailtyNum == 6)
        {
            personality = "enjoy being strong and like breaking things.";
        }
        if (personailtyNum == 7)
        {
            personality = "have a crude sense of humor.";
        }
        if (personailtyNum == 8)
        {
            personality = "face problems head-on. A simple, direct solution is the best path to success.";
        }

        if (idealNum == 1)
        {
            ideal = "a soldier's lot is to lay down his life in defense of others.";
        }
        if (idealNum == 2)
        {
            ideal = "you do what you must and obey just authority.";
        }
        if (idealNum == 3)
        {
            ideal = "when people follow orders blindly they embrace a kind of tyranny.";
        }
        if (idealNum == 4)
        {
            ideal = "in life, as in war, the stronger force wins.";
        }
        if (idealNum == 5)
        {
            ideal = "ideals aren't worth killing over, or going to war for.";
        }
        if (idealNum == 6)
        {
            ideal = "your city, nation, or people are all that matter.";
        }

        if (bondNum == 1)
        {
            bond = "You would still lay down your life for the people you served with";
        }
        if (bondNum == 2)
        {
            bond = "Someone saved your life on the battlefield. To this day, you will never leave a friend behind";
        }
        if (bondNum == 3)
        {
            bond = "Your honor is your life";
        }
        if (bondNum == 4)
        {
            bond = "You will never forget the crushing defeat your company suffered or the enemies who dealt it";
        }
        if (bondNum == 5)
        {
            bond = "As you see it those who fight beside you are worth dying for";
        }
        if (bondNum == 6)
        {
           bond = "You fight for those who cannot fight for themselves" ;
        }

        if (flawNum == 1)
        {
            flaw = "the monsterous enemy you faced in battle still leaves you quivering with fear.";
        }
        if (flawNum == 2)
        {
           flaw = "you have little respect for anyone who is not a proven warrior.";
        }
        if (flawNum == 3)
        {
            flaw = "you once made a terrible mistake in battle that cost many lives, and you would do anything to keep that mistake a secret.";
        }
        if (flawNum == 4)
        {
            flaw = "your hatred of you enemies is blind and unreasoning.";
        }
        if (flawNum == 5)
        {
            flaw = "you obey the law, even if that law causes misery.";
        }
        if (flawNum == 6)
        {
            flaw = "you would rather eat your armor than admit that you are wrong.";
        }
    }
    if (backgroundNum == 13)
    {
        background = "urchin";
        if (personailtyNum == 1)
        {
            personality = "hide scraps of food and trinkets away in your pockets.";
        }
        if (personailtyNum == 2)
        {
            personality = "ask a lot of questions.";
        }
        if (personailtyNum == 3)
        {
           personality = "like to squeeze into small places where no one else can get to me.";
        }
        if (personailtyNum == 4)
        {
            personality = "sleep with your back to a wall or tree, with everything you own wrapped in a bundle in your arms.";
        }
        if (personailtyNum == 5)
        {
            personality = "eat like a pig and have bad manners.";
        }
        if (personailtyNum == 6)
        {
            personality = "think anyone who is nice to you has evil intent.";
        }
        if (personailtyNum == 7)
        {
             personality = "don't like to bathe.";                                   
        }
        if (personailtyNum == 8)
        {
            personality = "bluntly say wahat other people are hinting at or hiding.";
        }

        if (idealNum == 1)
        {
            ideal = "all people, rich or poor, deserve respect.";
        }
        if (idealNum == 2)
        {
            ideal = "we have to take care of each other, because no one else is going to do it.";
        }
        if (idealNum == 3)
        {
            ideal = "the low are lifted up, and the high and mighty are brought down. Change is the nature of things.";
        }
        if (idealNum == 4)
        {
            ideal = "the rich need to be shown what life and death are like in the gutters.";
        }
        if (idealNum == 5)
        {
            ideal = "you help the people who help you. That's what keeps you all alive.";
        }
        if (idealNum == 6)
        {
            ideal = "you will prove that you are worthy of a better life.";
        }
        if (bondNum == 1)
        {
            bond = "Your town or city is your home, and you will fight to defend it";
        }
        if (bondNum == 2)
        {
           bond = "You sponser and orphanage to keep others from enduring what you were forced to endure";
        }
        if (bondNum == 3)
        {
            bond = "You owe your survival to another urchin who taught you to live on the streets";
        }
        if (bondNum == 4)
        {
            bond = "You owe a debt you can never repay to a person who took pity on you";
        }
        if (bondNum == 5)
        {
            bond = "You escaped your life of poverty by robbing an important person, and you are wanted for it.";
        }
        if (bondNum == 6)
        {
            bond = "You believe that no one should have to endure the hardships that you had to";
        }

        if (flawNum == 1)
        {
            flaw = "if you are outnumbered in a fight, you will run away.";
        }
        if (flawNum == 2)
        {
            flaw = "gold is a lot of money to you, and you will do just about anything for more of it.";
        }
        if (flawNum == 3)
        {
            flaw = "you will never fully trust anyone but yourself.";
        }
        if (flawNum == 4)
        {
            flaw = "You would rather kill someone in their sleep than fight fair.";
        }
        if (flawNum == 5)
        {
            flaw = "you don't consider it stealing if you need it more than someone else.";
        }
        if (flawNum == 6)
        {
           flaw = "you believe that those who can't take care of themselves get what they deserve.";
        }
    }
    



    cout << "\nYou were a " << subrace << " " << race << " " << background << backgroundExtra;
    cout << "\nYour class is " << subclass << " " << cla;
    cout << "\n\nYou " << personality << "\nYou hold that " << ideal;
    cout << "\n" << bond << ", but " << flaw;
    cout <<"\n\nYour attributes are as follows: ";
    cout << "\n\nYour strength is " << str;
    cout << "\nYour dexterity is " << dex;
    cout << "\nYour constitution is " << con;
    cout << "\nYour intellegence is " << intel;
    cout << "\nYour wisdom is " << wis;
    cout << "\nYour charisma is " << cha << endl;

    return 0;
    }
