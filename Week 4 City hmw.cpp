#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

struct Suburbs {
    string name;
    int workers;
    int artists;
    int teachers;
    int population;
    string neighbors;
};

void InitialSuburbStats();
void PrintMainMenu();
void RefreshStats();
void PublicTransportMenu();
void PublicTransport();
void TrainASCII();
void BoatASCII();
void PlaneASCII();
void NewsASCII();
void NatDat();
void NatDatSubStats(int sub);
void NatDatMenu();

Suburbs sub1;
Suburbs sub2;
Suburbs sub3;
Suburbs sub4;
Suburbs sub5;
Suburbs sub6;
Suburbs sub7;
Suburbs sub8;

string userName;
bool gameOn = true;
int mainMenuChoice;
int turnCount = 0;
// generates random number between 1-10 + compared against turn count to cause natdat
int turnCountNatDat = rand() % 10 + 1;
int rNatDatSub;
string rNatDatSubName;
int rNatDatType;
string rNatDatName;
int evacSub;
int amountEvac;
string evacSubName;
int peopleToEvac;
int rNatDatSubPop;

int main()
{
    cout << "Welcome... what's your name? " << endl;
    cin >> userName;
    system("cls");
    cout << "Welcome " << userName << "!" << endl;
    cout << endl;
    InitialSuburbStats();
    cout << endl;
    PrintMainMenu();

    while (gameOn == true)
    {
        cin >> mainMenuChoice;

        switch (mainMenuChoice)
        {                                       
        case 1: system("cls"); RefreshStats(); break;
        case 2: system("cls"); PublicTransport(); break;
        case 3: system("cls"); gameOn = false; cout << "See you soon " << userName << "!"; break;
        default: system("cls"); gameOn = false; cout << "That's an invalid input " << userName << "..."; break;
        }

    }
    system("pause>0");
}

void InitialSuburbStats()
{
    cout << " --------- SUBURB STATS --------- " << endl;
    cout << endl;
    sub1.name = "THE WILLOWS";
    sub1.workers = 1200;
    sub1.artists = 400;
    sub1.teachers = 700;
    sub1.population = sub1.workers + sub1.artists + sub1.teachers;
    sub1.neighbors = "Elmsbrook, Maple Village, Pine Woods, Cedar Forest";
    cout << sub1.name;
    cout << "\nWorkers: " << sub1.workers << endl;
    cout << "Artists: " << sub1.artists << endl;
    cout << "Teachers: " << sub1.teachers << endl;
    cout << "Population: " << sub1.population << endl;
    cout << "Neighbors: " << sub1.neighbors << endl;

    sub2.name = "ELMSBROOK";
    sub2.workers = 300;
    sub2.artists = 200;
    sub2.teachers = 250;
    sub2.population = sub2.workers + sub2.artists + sub2.teachers;
    sub2.neighbors = "The Willows, Maple Village, Chestnut Acres";
    cout << "\n" << sub2.name;
    cout << "\nWorkers: " << sub2.workers << endl;
    cout << "Artists: " << sub2.artists << endl;
    cout << "Teachers: " << sub2.teachers << endl;
    cout << "Population: " << sub2.population << endl;
    cout << "Neighbors: " << sub2.neighbors << endl;

    sub3.name = "MAPLE VILLAGE";
    sub3.workers = 100;
    sub3.artists = 150;
    sub3.teachers = 50;
    sub3.population = sub3.workers + sub3.artists + sub3.teachers;
    sub3.neighbors = "The Willows, Elmsbrook, Pine Woods, Chestnut Acres";
    cout << "\n" << sub3.name;
    cout << "\nWorkers: " << sub3.workers << endl;
    cout << "Artists: " << sub3.artists << endl;
    cout << "Teachers: " << sub3.teachers << endl;
    cout << "Population: " << sub3.population << endl;
    cout << "Neighbors: " << sub3.neighbors << endl;

    sub4.name = "PINE WOODS";
    sub4.workers = 100;
    sub4.artists = 10;
    sub4.teachers = 90;
    sub4.population = sub4.workers + sub4.artists + sub4.teachers;
    sub4.neighbors = "The Willows, Maple Village, Cedar Forest, Chestnut Acres";
    cout << "\n" << sub4.name;
    cout << "\nWorkers: " << sub4.workers << endl;
    cout << "Artists: " << sub4.artists << endl;
    cout << "Teachers: " << sub4.teachers << endl;
    cout << "Population: " << sub4.population << endl;
    cout << "Neighbors: " << sub4.neighbors << endl;

    sub5.name = "CEDAR FOREST";
    sub5.workers = 350;
    sub5.artists = 50;
    sub5.teachers = 200;
    sub5.population = sub5.workers + sub5.artists + sub5.teachers;
    sub5.neighbors = "The Willows, Pine Woods, Chestnut Acres, Oakham";
    cout << "\n" << sub5.name;
    cout << "\nWorkers: " << sub5.workers << endl;
    cout << "Artists: " << sub5.artists << endl;
    cout << "Teachers: " << sub5.teachers << endl;
    cout << "Population: " << sub5.population << endl;
    cout << "Neighbors: " << sub5.neighbors << endl;

    sub6.name = "CHESTNUT ACRES";
    sub6.workers = 250;
    sub6.artists = 200;
    sub6.teachers = 50;
    sub6.population = sub6.workers + sub6.artists + sub6.teachers;
    sub6.neighbors = "Elmsbrook, Maple Village, Pine Woods, Cedar Forest";
    cout << "\n" << sub6.name;
    cout << "\nWorkers: " << sub6.workers << endl;
    cout << "Artists: " << sub6.artists << endl;
    cout << "Teachers: " << sub6.teachers << endl;
    cout << "Population: " << sub6.population << endl;
    cout << "Neighbors: " << sub6.neighbors << endl;

    sub7.name = "OAKHAM";
    sub7.workers = 150;
    sub7.artists = 20;
    sub7.teachers = 80;
    sub7.population = sub7.workers + sub7.artists + sub7.teachers;
    sub7.neighbors = "Cedar Forest";
    cout << "\n" << sub7.name;
    cout << "\nWorkers: " << sub7.workers << endl;
    cout << "Artists: " << sub7.artists << endl;
    cout << "Teachers: " << sub7.teachers << endl;
    cout << "Population: " << sub7.population << endl;
    cout << "Neighbors: " << sub7.neighbors << endl;

    sub8.name = "PALM BEACH";
    sub8.workers = 80;
    sub8.artists = 200;
    sub8.teachers = 120;
    sub8.population = sub8.workers + sub8.artists + sub8.teachers;
    sub8.neighbors = "No neighbors... Palm Beach is an island.";
    cout << "\n" << sub8.name;
    cout << "\nWorkers: " << sub8.workers << endl;
    cout << "Artists: " << sub8.artists << endl;
    cout << "Teachers: " << sub8.teachers << endl;
    cout << "Population: " << sub8.population << endl;
    cout << "Neighbors: " << sub8.neighbors << endl;
}

void PrintMainMenu()
{
    cout << " --------- MAIN MENU --------- " << endl;
    cout << "      1) Refresh Stats" << endl;
    cout << "      2) Use Public Transport" << endl;
    cout << "      3) Quit" << endl;
    cout << endl;
}

void RefreshStats()
{
    // 8% of workers, artsits + teachers added to population
    sub1.workers = (((sub1.workers * 8) / 100) + sub1.workers);
    sub1.artists = (((sub1.artists * 8) / 100) + sub1.artists);
    sub1.teachers = (((sub1.teachers * 8) / 100) + sub1.teachers);
    sub1.population = (sub1.workers + sub1.artists + sub1.teachers);
    cout << sub1.name << endl;
    cout << "Workers: " << sub1.workers << endl;
    cout << "Artists: " << sub1.artists << endl;
    cout << "Teachers: " << sub1.teachers << endl;
    cout << "Population: " << sub1.population << endl;

    sub2.workers = (((sub2.workers * 7) / 100) + sub2.workers);
    sub2.artists = (((sub2.artists * 7) / 100) + sub2.artists);
    sub2.teachers = (((sub2.teachers * 7) / 100) + sub2.teachers);
    sub2.population = (sub2.workers + sub1.artists + sub2.teachers);
    cout << "\n" << sub2.name << endl;
    cout << "Workers: " << sub2.workers << endl;
    cout << "Artists: " << sub2.artists << endl;
    cout << "Teachers: " << sub2.teachers << endl;
    cout << "Population: " << sub2.population << endl;

    sub3.workers = (((sub3.workers * 3) / 100) + sub3.workers);
    sub3.artists = (((sub3.artists * 3) / 100) + sub3.artists);
    sub3.teachers = (((sub3.teachers * 3) / 100) + sub3.teachers);
    sub3.population = (sub3.workers + sub1.artists + sub3.teachers);
    cout << "\n" << sub3.name << endl;
    cout << "Workers: " << sub3.workers << endl;
    cout << "Artists: " << sub3.artists << endl;
    cout << "Teachers: " << sub3.teachers << endl;
    cout << "Population: " << sub3.population << endl;

    sub4.workers = (((sub4.workers * 2) / 100) + sub4.workers);
    sub4.artists = (((sub4.artists * 2) / 100) + sub4.artists);
    sub4.teachers = (((sub4.teachers * 2) / 100) + sub4.teachers);
    sub4.population = (sub4.workers + sub1.artists + sub4.teachers);
    cout << "\n" << sub4.name << endl;
    cout << "Workers: " << sub4.workers << endl;
    cout << "Artists: " << sub4.artists << endl;
    cout << "Teachers: " << sub4.teachers << endl;
    cout << "Population: " << sub4.population << endl;

    sub5.workers = (((sub5.workers * 5) / 100) + sub5.workers);
    sub5.artists = (((sub5.artists * 5) / 100) + sub5.artists);
    sub5.teachers = (((sub5.teachers * 5) / 100) + sub5.teachers);
    sub5.population = (sub5.workers + sub1.artists + sub5.teachers);
    cout << "\n" << sub5.name << endl;
    cout << "Workers: " << sub5.workers << endl;
    cout << "Artists: " << sub5.artists << endl;
    cout << "Teachers: " << sub5.teachers << endl;
    cout << "Population: " << sub5.population << endl;

    sub6.workers = (((sub6.workers * 4) / 100) + sub6.workers);
    sub6.artists = (((sub6.artists * 4) / 100) + sub6.artists);
    sub6.teachers = (((sub6.teachers * 4) / 100) + sub6.teachers);
    sub6.population = (sub6.workers + sub1.artists + sub6.teachers);
    cout << "\n" << sub6.name << endl;
    cout << "Workers: " << sub6.workers << endl;
    cout << "Artists: " << sub6.artists << endl;
    cout << "Teachers: " << sub6.teachers << endl;
    cout << "Population: " << sub6.population << endl;

    sub7.workers = (((sub7.workers * 2) / 100) + sub7.workers);
    sub7.artists = (((sub7.artists * 2) / 100) + sub7.artists);
    sub7.teachers = (((sub7.teachers * 2) / 100) + sub7.teachers);
    sub7.population = (sub7.workers + sub1.artists + sub7.teachers);
    cout << "\n" << sub7.name << endl;
    cout << "Workers: " << sub7.workers << endl;
    cout << "Artists: " << sub7.artists << endl;
    cout << "Teachers: " << sub7.teachers << endl;
    cout << "Population: " << sub7.population << endl;

    sub8.workers = (((sub8.workers * 7) / 100) + sub8.workers);
    sub8.artists = (((sub8.artists * 7) / 100) + sub8.artists);
    sub8.teachers = (((sub8.teachers * 7) / 100) + sub8.teachers);
    sub8.population = (sub8.workers + sub1.artists + sub8.teachers);
    cout << "\n" << sub8.name << endl;
    cout << "Workers: " << sub8.workers << endl;
    cout << "Artists: " << sub8.artists << endl;
    cout << "Teachers: " << sub8.teachers << endl;
    cout << "Population: " << sub8.population << endl;
    cout << endl;
    // after each refresh, turnCount increases by 1
    turnCount += 1;
    PrintMainMenu();
    // if turnCount == turnCountNatDat:
    NatDat();
}

void PublicTransportMenu()
{
    cout << "--------- OPTIONS ---------";
    cout << endl;
    cout << "      1) Move people" << endl;
    cout << "      2) Back to Main Menu" << endl;
    cout << "      3) Quit" << endl;
    cout << endl;
}

void PublicTransport()
{
    PublicTransportMenu();
    int pubTChoice;
    cin >> pubTChoice;

    switch (pubTChoice)
    {
    case 1: 
    {
        int firstSub, secondSub, randomPopulation, firstSubNewPop, secondSubNewPop;
        string firstSubName, secondSubName;
        system("cls");
        cout << "Choose a suburb to travel from (1-8): " << endl;
        cin >> firstSub;
        cout << "Choose a suburb to travel to (1-8): " << endl;
        cin >> secondSub;

        if (firstSub == 1)
        {
            firstSub = sub1.population;
            firstSubName = sub1.name;
        }
        else if (firstSub == 2)
        {
            firstSub = sub2.population;
            firstSubName = sub2.name;
        }
        else if (firstSub == 3)
        {
            firstSub = sub3.population;
            firstSubName = sub3.name;
        }
        else if (firstSub == 4)
        {
            firstSub = sub4.population;
            firstSubName = sub4.name;
        }
        else if (firstSub == 5)
        {
            firstSub = sub5.population;
            firstSubName = sub5.name;
        }
        else if (firstSub == 6)
        {
            firstSub = sub6.population;
            firstSubName = sub6.name;
        }
        else if (firstSub == 7)
        {
            firstSub = sub7.population;
            firstSubName = sub7.name;
        }
        else if (firstSub == 8)
        {
            firstSub = sub8.population;
            firstSubName = sub8.name;
        }
        else
            cout << "That's an invalid input!" << endl;

        if (secondSub == 1)
        {
            secondSub = sub1.population;
            secondSubName = sub1.name;
        }
        else if (secondSub == 2)
        {
            secondSub = sub2.population;
            secondSubName = sub2.name;
        }
        else if (secondSub == 3)
        {
            secondSub = sub3.population;
            secondSubName = sub3.name;
        }
        else if (secondSub == 4)
        {
            secondSub = sub4.population;
            secondSubName = sub4.name;
        }
        else if (secondSub == 5)
        {
            secondSub = sub5.population;
            secondSubName = sub5.name;
        }
        else if (secondSub == 6)
        {
            secondSub = sub6.population;
            secondSubName = sub6.name;
        }
        else if (secondSub == 7)
        {
            secondSub = sub7.population;
            secondSubName = sub7.name;
        }
        else if (secondSub == 8)
        {
            secondSub = sub8.population;
            secondSubName = sub8.name;
        }
        else
            cout << "That's an invalid input " << userName << "!" << endl;

        srand(time(NULL));
        // generates random number of people to travel (1 - population of chosen suburb)
        randomPopulation = rand() % firstSub + 1;
        // values after travelling
        firstSubNewPop = firstSub - randomPopulation;
        secondSubNewPop = secondSub + randomPopulation;

        system("cls");
        cout << "You have chosen " << firstSubName << " and " << secondSubName << "!" << endl;
        cout << "\nThe current population of " << firstSubName << " is " << firstSub << "." << endl;
        cout << "The current population of " << secondSubName << " is " << secondSub << "." << endl;
        cout << endl;
        if (firstSubName == "PALM BEACH" || secondSubName == "PALM BEACH")
            BoatASCII();
        else
            TrainASCII();
        cout << "\nThe new population of " << firstSubName << " is " << firstSubNewPop << "." << endl;
        cout << "The new population of " << secondSubName << " is " << secondSubNewPop << "." << endl;
        cout << endl;  
        // turnCount increases by 1 after each public transport use
        turnCount += 1;
        if (turnCount == turnCountNatDat)
            NatDat();
        else
            PublicTransport();      
        break;
    }
    case 2: system("cls"); PrintMainMenu(); break;
    case 3: system("cls"); gameOn = false; cout << "See you soon " << userName << "!"; break;
    }
}

void TrainASCII()
{
    cout << R"(   _____                 . . . . . o o o o o
  __|[_]|__ ___________ _______    ____      o
 |[] [] []| [] [] [] [] [_____(__  ][]]_n_n__][.
_|________|_[_________]_[________]_|__|________)<
  oo    oo 'oo      oo ' oo    oo 'oo 0000---oo\_
 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ )" << '\n';
}

void BoatASCII()
{
    cout << R"( 
              |    |    |                 
             )_)  )_)  )_)              
            )___))___))___)\            
           )____)____)_____)\\
         _____|____|____|____\\\__
---------\                   /---------
  ^^^^^ ^^^^^^^^^^^^^^^^^^^^^
    ^^^^      ^^^^     ^^^    ^^
         ^^^^      ^^^
)" << '\n';
}

void PlaneASCII()
{
    cout << R"(
           _
         -=\`\
     |\ ____\_\__
   -=\c`""""""" "`)
       `~~~~~/ /~~`
        -==/ /
          '-'

          _  _
         ( `   )_
        (    )    `)
      (_   (_ .  _) _)
                                     _
                                    (  )
     _ .                         ( `  ) . )
   (  _ )_                      (_, _(  ,_)_)
 (_  _(_ ,)
        )" << '\n';
}

void NewsASCII()
{
    cout << R"(
                  _.-`''`-._
                ,`          `.    ____________________________
                | ,._-'''-.  |   | NEWSFLASH                  |
                | |,-.  ,-.| |   | Natural Disaster Reported! |
                |/'  `-|  <  |   |                            |
                 \    (_)   /    `----------------------------'
                  \  ____  /
                   \ `--` /
            _.--`/'|`-..-'|\''''`-.
         ,-'    /  |`._,' / \      \
        |      /   \,/``\/   \    | \
        |  |   '>   |\,/|   <'   ,'  \
        |  `/^)\    |/`\|    /   /    \
       /   / /  \   |   |   /   |      \
      /   / ,``, \  \   /  /    |       \
      '   |    |  \  \ /  /     |\_      \
     /   ,| _.'    \ | | |__...-'` |      \
    /   / `. |      |`````         |       \
   |   /  ,`')      |              |\       |
   |    ,` ,/\      |            _,:''`,    |
 ---\,,.-'`---------|          _/  ,` , \ ,'------------
                    |_.------''/ /; ,`  |/
                               `' ```'''
        )" << '\n';
}

void NatDat()
{
    // random suburb (1-8) where natdat happens
    srand(time(NULL));
    rNatDatSub = rand() % 8 + 1;

    if (rNatDatSub == 1)
    {
        rNatDatSubName = sub1.name;
        rNatDatSubPop = sub1.population;
    }
    else if (rNatDatSub == 2)
    {
        rNatDatSubName = sub2.name;
        rNatDatSubPop = sub2.population;
    }
    else if (rNatDatSub == 3)
    {
        rNatDatSubName = sub3.name;
        rNatDatSubPop = sub3.population;
    }
    else if (rNatDatSub == 4)
    {
        rNatDatSubName = sub4.name;
        rNatDatSubPop = sub4.population;
    }
    else if (rNatDatSub == 5)
    {
        rNatDatSubName = sub5.name;
        rNatDatSubPop = sub5.population;
    }
    else if (rNatDatSub == 6)
    {
        rNatDatSubName = sub6.name;
        rNatDatSubPop = sub6.population;
    }
    else if (rNatDatSub == 7)
    {
        rNatDatSubName = sub7.name;
        rNatDatSubPop = sub7.population;
    }
    else if (rNatDatSub == 8)
    {
        rNatDatSubName = sub8.name;
        rNatDatSubPop = sub8.population;
    }

    // random type of natdat (1-4)
    rNatDatType = rand() % 4 + 1;
    
    if (rNatDatType == 1)
        rNatDatName = "n Earthquake";
    else if (rNatDatType == 2)
        rNatDatName = " Fire";
    else if (rNatDatType == 3)
        rNatDatName = " Flood";
    else if (rNatDatType == 4)
        rNatDatName = " Tornado";
    
    if (turnCount == turnCountNatDat)
    {
        system("cls");
        NewsASCII();
        cout << "It has been reported that a" << rNatDatName << " has occurred in " << rNatDatSubName << "!" << endl;
        cout << "Population to evacuate: " << rNatDatSubPop << endl;
        NatDatMenu();
    }
}

void NatDatSubStats(int sub)
{
    // show sub stats
    if (evacSub == 1)
    {
        cout << sub1.name << endl;
        evacSub = sub1.population;
        cout << "Population: " << evacSub << endl;
        evacSubName = sub1.name;
    }
    else if (evacSub == 2)
    {
        cout << sub2.name << endl;
        evacSub = sub2.population;
        cout << "Population: " << evacSub << endl;   
        evacSubName = sub2.name;
    }
    else if (evacSub == 3)
    {
        cout << sub3.name << endl;
        evacSub = sub3.population;
        cout << "Population: " << evacSub << endl;
        evacSubName = sub3.name;
    }
    else if (evacSub == 4)
    {
        cout << sub4.name << endl;
        evacSub = sub4.population;
        cout << "Population: " << evacSub << endl;
        evacSubName = sub4.name;
    }
    else if (evacSub == 5)
    {
        cout << sub5.name << endl;
        evacSub = sub5.population;
        cout << "Population: " << evacSub << endl;
        evacSubName = sub5.name;
    }
    else if (evacSub == 6)
    {
        cout << sub6.name << endl;
        evacSub = sub6.population;
        cout << "Population: " << evacSub << endl;
        evacSubName = sub6.name;
    }
    else if (evacSub == 7)
    {
        cout << sub7.name << endl;
        evacSub = sub7.population;
        cout << "Population: " << evacSub << endl;
        evacSubName = sub7.name;
    }
    else if (evacSub == 8)
    {
        cout << sub8.name << endl;
        evacSub = sub8.population;
        cout << "Population: " << evacSub << endl;
        evacSubName = sub8.name;
    }
}

void NatDatMenu()
{
    cout << "Choose a suburb to evacuate to (1-8): " << endl;
    cin >> evacSub;

    // checking if player chosen suburb is not equal to the natdat suburb + if it's between 1-8
    while (evacSub != rNatDatSub && evacSub > 0 && evacSub <= 8)
    {
        system("cls");
        cout << "You have chosen: " << endl;
        cout << endl;
        NatDatSubStats(evacSub);

        cout << "\nChoose a % of people to evacuate: " << endl;
        cout << "   1) 25%" << endl;
        cout << "   2) 50%" << endl;
        cout << "   3) 75%" << endl;
        cout << "   4) 100%" << endl;
        cout << "   5) Let them perish..." << endl;
        cin >> amountEvac;
        system("cls");

        switch (amountEvac)
        {
        case 1:
        {
            peopleToEvac = ((rNatDatSubPop * 25) / 100);
            cout << peopleToEvac << " civilians being evacuated to " << evacSubName << "..." << endl;
            PlaneASCII();
            cout << "The population of " << evacSubName << " is now: " << evacSub + peopleToEvac << endl;
            cout << rNatDatSubPop - peopleToEvac << "  civilians were sadly lost..." << endl;
            cout << endl; break;
        }
        case 2:
        {
            peopleToEvac = ((rNatDatSubPop * 50) / 100);
            cout << peopleToEvac << " civilians being evacuated to " << evacSubName << "..." << endl;
            PlaneASCII();
            cout << "The population of " << evacSubName << " is now: " << evacSub + peopleToEvac << endl;
            cout << rNatDatSubPop - peopleToEvac << "  civilians were sadly lost..." << endl;
            cout << endl; break;
        }
        case 3:
        {
            peopleToEvac = ((rNatDatSubPop * 75) / 100);
            cout << peopleToEvac << " civilians being evacuated to " << evacSubName << "..." << endl;
            PlaneASCII();
            cout << "The population of " << evacSubName << " is now: " << evacSub + peopleToEvac << endl;
            cout << rNatDatSubPop - peopleToEvac << "  civilians were sadly lost..." << endl;
            cout << endl; break;
        }
        case 4:
        {
            peopleToEvac = rNatDatSubPop;
            cout << peopleToEvac << " civilians being evacuated to " << evacSubName << "..." << endl;
            PlaneASCII();
            cout << "The population of " << evacSubName << " is now: " << evacSub + peopleToEvac << endl;
            cout << "Thankfully no civilians were lost!" << endl;
            cout << endl; break;
        }
        case 5:
        {
            rNatDatSubPop = 0;
            cout << "No civilians were evacuated..." << endl;
            cout << "The population of " << evacSubName << " is now: " << rNatDatSubPop << "..." << endl;
            cout << endl; break;
        }
        default: gameOn = false; cout << "That's an invalid input " << userName << endl; break;
        }
    }
    // forces player to choose a valid suburb 
    if (evacSub == rNatDatSub)
    {
        gameOn = false;
        cout << "That's a death trap!" << endl;
        NatDatMenu();
    }
    else
    {
        gameOn = true;
        PrintMainMenu();
    }
}


/*
Future improvements/bugs:
- Make sure populations are replaced after public transport + natural disasters
- Add more than 1 natdat per game (for loop?)
- Add arrays
*/