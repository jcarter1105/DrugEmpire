
//
//  Drug Empire
//
//  Created by James Carter on 6/16/19.
//  Copyright © 2019 James Carter. All rights reserved.
//
#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    //This is where all of the varables are declared for the game
    string name;
    string startcityname;
    int startcity;
    int temp;
    int turn;
    int level;
    int money;
    int debt;
    int acid;
    int weed;
    int cocaine;
    int heroin;
    int shrooms;
    int weaponinventory;
    int druginventory;
    int weedinventory;
    int acidinventory;
    int cocaineinventory;
    int shroomsinventory;
    int heroininventory;
    int health;
    bool switchblade;
    bool handgun;
    bool ar15;
    bool grenadelauncher;
    //This is the begining of the game, or what people see when they first start our program
start:
    system("clear");
    cout << "Hello! Welcome to Drug Empires\n" << "Version 0.1\n" << "Developed by Myles Charlesworth & James Carter\n";
    cout << "Please enter Your name to continue!: ";
    cin >> name;
    cout << "Hello " << name << "\n" << "Enter the number for the city would you like to start in\n" << "1.) New York City\n" << "2.) Washington DC\n" << "3.) San Diego\n";
    turn = 1;
    level = 1;
    money = 200;
    druginventory = 100;
    health = 100;
    debt = 5000;
cityselect: //This is the part that sets the first city, but the more important part is that this is where the user gets the first variables assigned to them.
    cin.ignore();
    cin >> startcity;
    if (startcity == 1) {
        startcityname = "New York";
        srand(time(NULL));
        weed = (rand() % 100) + 1;
        acid = (rand() % 100) + 1;
        cocaine = (rand() % 100) + 1;
        heroin = (rand() % 100) + 1;
        shrooms = (rand() % 100) + 1;
        system("clear");
        cout << "Hello " << name << " Welcome to New York City!\n";
        goto mainmenu;
    }else if(startcity == 2) {
        startcityname = "Washington DC";
        srand(time(NULL));
        weed = (rand() % 100) + 1;
        acid = (rand() % 100) + 1;
        cocaine = (rand() % 100) + 1;
        heroin = (rand() % 100) + 1;
        shrooms = (rand() % 100) + 1;
        system("clear");
        cout << "Hello " << name << " Welcome to Washington DC!\n";
        goto mainmenu;
    }else if(startcity == 3) {
        startcityname = "San Diego";
        srand(time(NULL));
        weed = (rand() % 100) + 1;
        acid = (rand() % 100) + 1;
        cocaine = (rand() % 100) + 1;
        heroin = (rand() % 100) + 1;
        shrooms = (rand() % 100) + 1;
        system("clear");
        cout << "Hello " << name << " Welcome to San Diego\n";
        goto mainmenu;
    }else{
        cout << "Was " << startcity <<" one of the options? I dont think so.\nTry Again: ";
        goto cityselect;
    }
mainmenu: //This is our main player menu.
    system("clear");
    cout << "Turn: " << turn << "\n" << "Select an Option\n" << "1.) Player Stats\n" << "2.) Buy Drugs\n" << "3.) Review Your Inventory\n" << "4.) Gun Store\n" << "5.) Change Location\n" << "6.) Buy Supplies\n" << "7.) Visit Loanshark\n" << "8.) Next Turn\n" << "9.) Sell Drugs\n" << "10.) Quit\n" << "?: ";
    cin >> temp;
    if(temp == 1) { //Player Stats
        goto playerstats;
    }else if(temp == 2) { //Buy Drugs
        goto buydrugs;
    }else if(temp == 3) { //Review Your Inventory
        goto playerinventory;
    }else if(temp == 4) { //Gun Store
        goto wip;
    }else if(temp == 5) { //Change Location
        goto wip;
    }else if(temp == 6) { //Buy Supplies
        goto wip;
    }else if(temp == 7) { //Visit Loanshark
        goto wip;
    }else if(temp == 8) { //Next Turn
        goto nextturn;
    }else if(temp == 9) { //Sell Drugs
        goto selldrugs;
    }else if (temp == 10) { //quit
        goto quit;
    }else{
        cin.ignore();
        cout << "\n\nHey, Fucking Moron. That wasnt an option.\nPress Enter to Try again.";
        cin.get();
        goto mainmenu;
    }


playerstats:
    system("clear");
    cin.ignore();
    cout << "Player Stats\n" << "Name: " << name << "\n" << "Level: " << level << "\n" << "Money: " << money << "$\n" << "Starting City: " << startcityname;
    cout << "\n" << "\n" << "Press Enter to return to the Main Menu";
    cin.get();
    goto mainmenu;
buydrugs:
    system("clear");
    cout << "Hey little bitch. Want to buy some drugs?\n";
    cout << "Money: $" << money << "\nInventory Space: " << druginventory;
    cout << "\n1.) Acid: $" << acid << "\n2.) Weed: $" << weed << "\n3.) Cocaine: $" << cocaine << "\n4.) Heroin: $" << heroin << "\n5.) Shrooms: $" << shrooms <<"\n6.) Leave" <<"\n?: ";
    cin >> temp;
    if(temp == 1) { //Acid
        if(money < acid) {
            cin.ignore();
            cout << "Bitch you dont have enough money for this shit. Try something else.\n" << "Press Enter to continue";
            cin.get();
            goto buydrugs;
        }else{
            system("clear");
            cout << "Dope, How much you want?\n" << "Your Money: $" << money << "\nPrice of Acid: $" << acid << "\nSpace in inventory: " << druginventory <<"\n?: ";
            cin >> temp;
            if(temp == 0){
                cin.ignore();
                cout << "\nStop fucking wasting my time.\n " << "Press enter to continue.";
                cin.get();
                goto buydrugs;
            }else if(temp * acid > money){
                cin.ignore();
                cout << "\nNahh you cant afford that.\n " << "Press enter to continue.";
                cin.get();
                goto buydrugs;
            }else if((druginventory - temp) < -1){
                cin.ignore();
                cout << "\nCut that shit out. I cant sell you that much.";
                cin.get();
                goto buydrugs;
            }else{                
                cin.ignore();
                cout << "\nIts great to do buiness with you.";
                druginventory = druginventory - temp;
                money = money - (temp * acid);
                acidinventory = acidinventory + temp;
                cout << "\nYour Money: $" << money << "\nInventory Space: " << druginventory << "\nPress enter to buy more drugs";
                cin.get();
                goto buydrugs;
            }
        }
    }else if(temp == 2) { //Weed
        if(money < weed) {
            cin.ignore();
            cout << "Bitch you dont have enough money for this shit. Try something else.\n" << "Press Enter to continue";
            cin.get();
            goto buydrugs;
        }else{
            system("clear");
            cout << "Dope, How much you want?\n" << "Your Money: $" << money << "\nPrice of Weed: $" << weed << "\nSpace in inventory: " << druginventory <<"\n?: ";
            cin >> temp;
            if(temp == 0){
                cin.ignore();
                cout << "\nStop fucking wasting my time.\n " << "Press enter to continue.";
                cin.get();
                goto buydrugs;
            }else if(temp * weed > money){
                cin.ignore();
                cout << "\nNahh you cant afford that.\n" << "Press enter to continue.";
                cin.get();
                goto buydrugs;
            }else if((druginventory - temp) < -1){
                cin.ignore();
                cout << "\nCut that shit out. I cant sell you that much.";
                cin.get();
                goto buydrugs;
            }else{
                cin.ignore();
                cout << "\nIts great to do buiness with you.";
                druginventory = druginventory - temp;
                money = money - (temp * weed);
                weedinventory = weedinventory + temp;
                cout << "\nYour Money: $" << money << "\nInventory Space: " << druginventory << "\nPress enter to buy more drugs";
                cin.get();
                goto buydrugs;
            }
        }
        
    }else if(temp == 3) { //Cocaine
        if(money < cocaine) {
            cin.ignore();
            cout << "Bitch you dont have enough money for this shit. Try something else.\n" << "Press Enter to continue";
            cin.get();
            goto buydrugs;
        }else{
            system("clear");
            cout << "Dope, How much you want?\n" << "Your Money: $" << money << "\nPrice of Cocaine: $" << cocaine << "\nSpace in inventory: " << druginventory <<"\n?: ";
            cin >> temp;
            if(temp == 0){
                cin.ignore();
                cout << "\nStop fucking wasting my time.\n " << "Press enter to continue.";
                cin.get();
                goto buydrugs;
            }else if(temp * cocaine > money){
                cin.ignore();
                cout << "\nNahh you cant afford that.\n " << "Press enter to continue.";
                cin.get();
                goto buydrugs;
            }else if((druginventory - temp) < -1){
                cin.ignore();
                cout << "\nCut that shit out. I cant sell you that much.";
                cin.get();
                goto buydrugs;
            }else{
                cin.ignore();
                cout << "\nIts great to do buiness with you.";
                druginventory = druginventory - temp;
                money = money - (temp * cocaine);
                cocaineinventory = cocaineinventory + temp;
                cout << "\nYour Money: $" << money << "\nInventory Space: " << druginventory << "\nPress enter to buy more drugs";
                cin.get();
                goto buydrugs;
            }
        }
    }else if(temp == 4) { //Heroin
        if(money < heroin) {
            cin.ignore();
            cout << "Bitch you dont have enough money for this shit. Try something else.\n" << "Press Enter to continue";
            cin.get();
            goto buydrugs;
        }else{
            system("clear");
            cout << "Dope, How much you want?\n" << "Your Money: $" << money << "\nPrice of Heroin: $" << heroin << "\nSpace in inventory: " << druginventory <<"\n?: ";
            cin >> temp;
            if(temp == 0){
                cin.ignore();
                cout << "\nStop fucking wasting my time.\n " << "Press enter to continue.";
                cin.get();
                goto buydrugs;
            }else if(temp * heroin > money){
                cin.ignore();
                cout << "\nNahh you cant afford that.\n " << "Press enter to continue.";
                cin.get();
                goto buydrugs;
            }else if((druginventory - temp) < -1){
                cin.ignore();
                cout << "\nCut that shit out. I cant sell you that much.";
                cin.get();
                goto buydrugs;
            }else{
                cin.ignore();
                cout << "\nIts great to do buiness with you.";
                druginventory = druginventory - temp;
                money = money - (temp * heroin);
                heroininventory = heroininventory + temp;
                cout << "\nYour Money: $" << money << "\nInventory Space: " << druginventory << "\nPress enter to buy more drugs";
                cin.get();
                goto buydrugs;
            }
        }
    }else if(temp == 5) { //Shrooms
        if(money < shrooms) {
            cin.ignore();
            cout << "Bitch you dont have enough money for this shit. Try something else.\n" << "Press Enter to continue";
            cin.get();
            goto buydrugs;
        }else{
            system("clear");
            cout << "Dope, How much you want?\n" << "Your Money: $" << money << "\nPrice of Shrooms: $" << shrooms << "\nSpace in inventory: " << druginventory <<"\n?: ";
            cin >> temp;
            if(temp == 0){
                cin.ignore();
                cout << "\nStop fucking wasting my time.\n " << "Press enter to continue.";
                cin.get();
                goto buydrugs;
            }else if(temp * shrooms > money){
                cin.ignore();
                cout << "\nNahh you cant afford that.\n " << "Press enter to continue.";
                cin.get();
                goto buydrugs;
            }else if((druginventory - temp) < -1){
                cin.ignore();
                cout << "\nCut that shit out. I cant sell you that much.";
                cin.get();
                goto buydrugs;
            }else{
                cin.ignore();
                cout << "\nIts great to do buiness with you.";
                druginventory = druginventory - temp;
                money = money - (temp * shrooms);
                shroomsinventory = shroomsinventory + temp;
                cout << "\nYour Money: $" << money << "\nInventory Space: " << druginventory << "\nPress enter to buy more drugs";
                cin.get();
                goto buydrugs;
            }
        }
    }else if(temp == 6) { //Return to Menu
        cin.ignore();
        cout << "\n\n\nAre you fucking kidding me? I drove a fucking hour for this. \nGo the fuck away." << "\nPress Enter to Return to the Main Menu.";
        cin.get();
        goto mainmenu;
    }else{
        cin.ignore();
        cout << "\n\n\nNigga, stop fucking around before I beat your ass. Do want to but some drugs or not?\n" << "Press enter to try again.";
        cin.get();
        goto buydrugs;
    }
playerinventory:
    system("clear");
    cin.ignore();
    cout << name << "'s Inventory\n" << "Spots left in Inventory: " << druginventory;
    cout << "\nDrugs:\n" << "Weed: " << weedinventory << "g's\n" << "Acid: " << acidinventory << " tabs\n" << "Cocaine: " << cocaineinventory << "g's\n" << "Heroin: " << heroininventory << "g's\n" << "Shrooms: " << shroomsinventory << "g's\n";
    cout << "\nWeapons:\n"; 
    cout << "Press Enter to go back to the Main Menu";
    cin.get();
    goto mainmenu;
gunstore:
    system("clear");
nextturn:
    cin.ignore();
    system("clear");
    srand(time(NULL));
    weed = (rand() % 100) + 1;
    acid = (rand() % 100) + 1;
    cocaine = (rand() % 100) + 1;
    heroin = (rand() % 100) + 1;
    shrooms = (rand() % 100) + 1;
    turn = turn + 1;
    if(debt > 0){
        debt = debt*1.14;
        system("clear");
    }else{}
    system("clear");
    goto mainmenu;
selldrugs:
    system("clear");
    cin.ignore();
    cout << "Hey man, what you got for me\n";
    cout << "\n1.) Acid: $" << acid << "\n2.) Weed: $" << weed << "\n3.) Cocaine: $" << cocaine << "\n4.) Heroin: $" << heroin << "\n5.) Shrooms: $" << shrooms <<"\n6.) Leave" <<"\n?: ";
    cin >> temp;
    if(temp == 1) {
      if(acidinventory < 1) {
        cin.ignore();
        cout << "what the fuck are you talking about, you dont have any acid. \nBe real man" << "\nPress Enter to continue";
        cin.get();
        goto selldrugs;
      }else{
        system("clear");
        cout << "Dope how much can I buy?\n" << "\nMoney: $" << money << "\nAcid: " << acidinventory << " tabs" << "?: ";
        cin >> temp;
        if(temp > acidinventory){
        cin.ignore();
        cout << "\nStop fucking around, you dont have that much.\n" << "Press Enter to continue";
        cin.get();
        }else{
        cin.ignore();
        cout << "\nAwesome, you're the man! \nhere's your " << (temp * acid) << "$.";
        acidinventory = (acidinventory - temp);
        druginventory = (druginventory + temp);
        money = money + (temp * acid);
        cout << "\nPress Enter to return to the main menu";
        cin.get();
        goto mainmenu;
        }



      }
      
    }else if(temp ==2) {
      if(weedinventory < 1) {
        cin.ignore();
        cout << "what the fuck are you talking about, you dont have any weed. \nBe real man" << "\nPress Enter to continue";
        cin.get();
        goto selldrugs;
      }else{
        system("clear");
        cout << "Dope how much can I buy?\n" << "\nMoney: $" << money << "\nWeed: " << weedinventory << " g's" << "?: ";
        cin >> temp;
        if(temp > weedinventory){
        cin.ignore();
        cout << "\nStop fucking around, you dont have that much.\n" << "Press Enter to continue";
        cin.get();
        }else{
        cin.ignore();
        cout << "\nAwesome, you're the man! \nhere's your " << (temp * weed) << "$.";
        weedinventory = (weedinventory - temp);
        druginventory = (druginventory + temp);
        money = money + (temp * weed);
        cout << "\nPress Enter to return to the main menu";
        cin.get();
        goto mainmenu;
        }



      }
    }else if (temp == 3) {
      if(cocaineinventory < 1) {
        cin.ignore();
        cout << "what the fuck are you talking about, you dont have any cocaine. \nBe real man" << "\nPress Enter to continue";
        cin.get();
        goto selldrugs;
      }else{
        system("clear");
        cout << "Dope how much can I buy?\n" << "\nMoney: $" << money << "\nCocaine: " << cocaineinventory << " g's" << "?: ";
        cin >> temp;
        if(temp > cocaineinventory){
        cin.ignore();
        cout << "\nStop fucking around, you dont have that much.\n" << "Press Enter to continue";
        cin.get();
        }else{
        cin.ignore();
        cout << "\nAwesome, you're the man! \nhere's your " << (temp * cocaine) << "$.";
        cocaineinventory = (cocaineinventory - temp);
        druginventory = (druginventory + temp);
        money = money + (temp * cocaine);
        cout << "\nPress Enter to return to the main menu";
        cin.get();
        goto mainmenu;
        }



      }
    }else if (temp == 4) {
      if(heroininventory < 1) {
        cin.ignore();
        cout << "what the fuck are you talking about, you dont have any heroin. \nBe real man" << "\nPress Enter to continue";
        cin.get();
        goto selldrugs;
      }else{
        system("clear");
        cout << "Dope how much can I buy?\n" << "\nMoney: $" << money << "\nHeroin: " << heroininventory << " g's" << "?: ";
        cin >> temp;
        if(temp > heroininventory){
        cin.ignore();
        cout << "\nStop fucking around, you dont have that much.\n" << "Press Enter to continue";
        cin.get();
        }else{
        cin.ignore();
        cout << "\nAwesome, you're the man! \nhere's your " << (temp * heroin) << "$." ;
        heroininventory = (heroininventory - temp);
        druginventory = (druginventory + temp);
        money = money + (temp * heroin);
        cout << "\nPress Enter to return to the main menu";
        cin.get();
        goto mainmenu;
        }



      }
    }else if (temp == 5) {
      if(shroomsinventory < 1) {
        cin.ignore();
        cout << "what the fuck are you talking about, you dont have any shrooms. \nBe real man" << "\nPress Enter to continue";
        cin.get();
        goto selldrugs;
      }else{
        system("clear");
        cout << "Dope how much can I buy?\n" << "\nMoney: $" << money << "\nShrooms: " << shroomsinventory << " g's" << "?: ";
        cin >> temp;
        if(temp > shroomsinventory){
        cin.ignore();
        cout << "\nStop fucking around, you dont have that much.\n" << "Press Enter to continue";
        cin.get();
        }else{
        cin.ignore();
        cout << "\nAwesome, you're the man! \nhere's your " << (temp * shrooms) << "$.";
        acidinventory = (shroomsinventory - temp);
        druginventory = (druginventory + temp);
        money = money + (temp * shrooms);
        cout << "Press Enter to return to the main menu";
        cin.get();
        goto mainmenu;
        }



      }
    }else if (temp == 6) {
        system("clear");
        goto mainmenu;
      
    }else{
      cin.ignore();
      cout << "\nWhat that fuck does that mean? Just tell me what you got man" << "\nPress enter to continue";
      cin.get();
      goto selldrugs;
    } 
test:
    cin.ignore();
    cout << (rand() % 10) + 1 << "\n";
    cout << (rand() % 10) + 1 << "\n";
    cout << (rand() % 10) + 1 << "\n";
    cout << (rand() % 10) + 1 << "\n";
    cout << (rand() % 10) + 1 << "\n";
    cout << (rand() % 10) + 1 << "\n";
    cout << "\n" << "\n" << "Press Enter to return to the Main Menu";
    cin.get();
    goto mainmenu;
wip:
    system("clear");
    cin.ignore();
    cout << "This Feature is currently not avalible. Please try again Later!\n" << "Press Enter to Continue\n";
    cin.get();
    goto mainmenu;
quit:
    cin.ignore();
    system("clear");
    cout << "Are you sure you want to quit?\n" << "1.) Yes\n" << "2.) No\n" << "?: ";
    cin >> temp;
    if(temp == 1){
        system("clear");
        cout << "\nWow, of course your quitting you little bitch. Goodbye.\n\n\n\n\n\n\n";
        exit(0);
    }else if(temp == 2){
        cin.ignore();
        cout << "\nGood Choice. You didnt look like a little bitch.\n" << "Press Enter to Return to the Mainmenu";
        cin.get();
        goto mainmenu;
    }else{
        cin.ignore();
        cout << "\nGod, did you get repeatedly dropped on your head as a child??\n" << "Try to put some fucking effort into it next time\n" << "Press Enter to try again....";
        cin.get();
        goto quit;
    }
}
