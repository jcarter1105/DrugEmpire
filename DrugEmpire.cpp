//
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
    string currentlocationname;
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
    int damage;
    int currentlocation;
    int heat;
    int heatmodifier;
    int combatdiffmodifier;
    bool heataction;
    //This is the begining of the game, or what people see when they first start our program
start:
    system("clear");
    cout << "Hello! Welcome to Drug Empires\n" << "Version 0.1\n" << "Developed by Myles Charlesworth & James Carter\n";
    cout << "Please enter Your name to continue!: ";
    getline(cin, name);
    system("clear"); 
    cout << "Hello " << name << "\n" << "Enter the number for the city would you like to start in\n" << "1.) New York City\n" << "2.) Washington DC\n" << "3.) San Diego\n";
cityselect: //This is the part that sets the first city, but the more important part is that this is where the user gets the first variables assigned to them.

    cin >> startcity;
    if (startcity == 1) {
        startcityname = "New York";
        currentlocation = 1;
        currentlocationname= "Home";
        srand(time(NULL));
        weed = (rand()%(30-5 + 1) + 5);
        acid = (rand()%(25-5 + 1) + 5);
        cocaine = (rand()%(110-60 + 1) + 60);
        heroin = (rand()%(250-50 + 1) + 50);
        shrooms = (rand()%(40-10 + 1) + 10);
        system("clear");
        cout << "Hello " << name << " Welcome to New York City!\n";
        goto playerselect;
    }else if(startcity == 2) {
        startcityname = "Washington DC";
        currentlocation = 1;
        currentlocationname = "Home";
        srand(time(NULL));
        weed = (rand()%(30-5 + 1) + 5);
        acid = (rand()%(25-5 + 1) + 5);
        cocaine = (rand()%(110-60 + 1) + 60);
        heroin = (rand()%(250-50 + 1) + 50);
        shrooms = (rand()%(40-10 + 1) + 10);
        system("clear");
        cout << "Hello " << name << " Welcome to Washington DC!\n";
        goto playerselect;
    }else if(startcity == 3) {
        startcityname = "San Diego";
        currentlocation = 1;
        currentlocationname = "Home";
        srand(time(NULL));
        weed = (rand()%(30-5 + 1) + 5);
        acid = (rand()%(25-5 + 1) + 5);
        cocaine = (rand()%(110-60 + 1) + 60);
        heroin = (rand()%(250-50 + 1) + 50);
        shrooms = (rand()%(40-10 + 1) + 10);
        system("clear");
        cout << "Hello " << name << " Welcome to San Diego\n";
        goto playerselect;
    }else{
        cout << "Was " << startcity <<" one of the options? I dont think so.\nTry Again: ";
        goto cityselect;
    }
playerselect:
    system("clear");
    cin.ignore();
    cout << "Player Select" << "\n1.) Character 1" << "\n2.) Character 2" << "\n3.) Character 3" << "\n4.) Character 4" << "\n5.) Character 5" << "\n?: ";
    cin >> temp;
    if(temp == 1){
        system("clear");
        cin.ignore();
        cout << "Player Stats" << "\nStarting Capital: 200$";
        cout << "\nDo you want to use this character?" << "\n1.) Yes" << "\n2.) No" << "\n?: ";
        cin >> temp;
            if(temp == 1){
                cin.ignore();
                turn = 1;
                level = 1;
                money = 200;
                druginventory = 100;
                health = 100;
                heat = 0;
                heataction = false;
                heatmodifier = 1;
                combatdiffmodifier = 1;
                debt = 1500;
                system("clear");
            }else if(temp == 2){
                cin.ignore();
                system("clear");
                goto playerselect;
            }else{
                cin.ignore();
                cout << "\nwhat the fuck does that mean?" << "Press Enter to try an actual options.";
                cin.get();
                goto playerselect;
            }
    }else if(temp == 2){
                system("clear");
        cin.ignore();
        cout << "Player Stats" << "\nStarting Capital: 200$";
        cout << "\nDo you want to use this character?" << "\n1.) Yes" << "\n2.) No" << "\n?: ";
        cin >> temp;
            if(temp == 1){
                cin.ignore();
                turn = 1;
                level = 1;
                money = 200;
                druginventory = 100;
                health = 100;
                heat = 0;
                heataction = false;
                heatmodifier = 1;
                combatdiffmodifier = 1;
                debt = 1500;
                system("clear");
            }else if(temp == 2){
                cin.ignore();
                system("clear");
                goto playerselect;
            }else{
                cin.ignore();
                cout << "\nwhat the fuck does that mean?" << "Press Enter to try an actual options.";
                cin.get();
                goto playerselect;
            }

    }else if(temp == 3){
                system("clear");
        cin.ignore();
        cout << "Player Stats" << "\nStarting Capital: 200$";
        cout << "\nDo you want to use this character?" << "\n1.) Yes" << "\n2.) No" << "\n?: ";
        cin >> temp;
            if(temp == 1){
                cin.ignore();
                turn = 1;
                level = 1;
                money = 200;
                druginventory = 100;
                health = 100;
                heat = 0;
                heataction = false;
                heatmodifier = 1;
                combatdiffmodifier = 1;
                debt = 1500;
                system("clear");
            }else if(temp == 2){
                cin.ignore();
                system("clear");
                goto playerselect;
            }else{
                cin.ignore();
                cout << "\nwhat the fuck does that mean?" << "Press Enter to try an actual options.";
                cin.get();
                goto playerselect;
            }

    }else if(temp == 4){
                system("clear");
        cin.ignore();
        cout << "Player Stats" << "\nStarting Capital: 200$";
        cout << "\nDo you want to use this character?" << "\n1.) Yes" << "\n2.) No" << "\n?: ";
        cin >> temp;
            if(temp == 1){
                cin.ignore();
                turn = 1;
                level = 1;
                money = 200;
                druginventory = 100;
                health = 100;
                heat = 0;
                heatmodifier = 1;
                heataction = false;
                combatdiffmodifier = 1;
                debt = 1500;
                system("clear");
            }else if(temp == 2){
                cin.ignore();
                system("clear");
                goto playerselect;
            }else{
                cin.ignore();
                cout << "\nwhat the fuck does that mean?" << "Press Enter to try an actual options.";
                cin.get();
                goto playerselect;
            }

    }else if(temp == 5){
                system("clear");
        cin.ignore();
        cout << "Player Stats" << "\nStarting Capital: 200$";
        cout << "\nDo you want to use this character?" << "\n1.) Yes" << "\n2.) No" << "\n?: ";
        cin >> temp;
            if(temp == 1){
                cin.ignore();
                turn = 1;
                level = 1;
                money = 200;
                druginventory = 100;
                health = 100;
                heat = 0;
                heataction = false;
                heatmodifier = 1;
                combatdiffmodifier = 1;
                debt = 1500;
                system("clear");
            }else if(temp == 2){
                cin.ignore();
                system("clear");
                goto playerselect;
            }else{
                cin.ignore();
                cout << "\nwhat the fuck does that mean?" << "Press Enter to try an actual options.";
                cin.get();
                goto playerselect;
            }

    }else{
        cin.ignore();
        cout << "\nBitch what the fuck are you talking about." << "\n" << "Press enter to continue";
        cin.get();
        goto playerselect;

    }

mainmenu: //This is our main player menu.
    system("clear");
    cout << "Turn: " << turn << "\n" << "Select an Option\n" << "1.) Player Stats\n" << "2.) Player Inventory\n" << "3.) Buy Drugs\n" << "4.) Sell Drugs\n" << "5.) Gun Store\n" << "6.) Visit Loanshark\n" << "7.) Change Location\n" << "8.) Next Turn\n" << "9.) Quit\n" << "?: ";
    cout << "\n" << heatmodifier;
    cout << "\n" << heat;
    cin >> temp;
    if(temp == 1) { //Player Stats
        goto playerstats;
    }else if(temp == 2) { //Player Inventory
        goto playerinventory;
    }else if(temp == 3) { //Buy Drugs
        goto buydrugs;
    }else if(temp == 4) { //Sell Drugs
        goto selldrugs;
    }else if(temp == 5) { //Gun Store
        goto gunstore;
    }else if(temp == 6) { //Visit Loanshark
        goto loanshark;
    }else if(temp == 7) { //Change Location
        goto changelocation;
    }else if(temp == 8) { //Next Turn
        goto nextturn;
    }else if(temp == 9) { //Quit
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
    cout << "Player Stats\n" << "Name: " << name << "\n" << "Level: " << level << "\n" << "Money: " << money <<"$\n" <<"Health: " << health << "\n" << "Debt: " << debt << "$\n" << "Heat: "<< heat << "\n" <<"Starting City: " << startcityname;
    cout << "\n" << "\n" << "Press Enter to return to the Main Menu";
    cin.get();
    goto mainmenu;

playerinventory:
    system("clear");
    cin.ignore();
    cout << name << "'s Inventory\n" << "Spots left in Inventory: " << druginventory;
    cout << "\nDrugs:\n" << "Weed: " << weedinventory << "g's\n" << "Acid: " << acidinventory << " tabs\n" << "Cocaine: " << cocaineinventory << "g's\n" << "Heroin: " << heroininventory << "g's\n" << "Shrooms: " << shroomsinventory << "g's\n";
    cout << "\nWeapon: ";
    if(weaponinventory == 1){
        cout<< "Switchblade\n";
    }else if(weaponinventory == 2){
        cout << "Handgun\n";
    }else if(weaponinventory == 3){
        cout << "AR-15\n";
    } else if(weaponinventory){
        cout << "Grenade Launcher\n";
    }else{
        cout << "Unarmed\n";
    } 
    cout << "Press Enter to go back to the Main Menu";
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
            cout << "Dope, How much you want?\n" << "Your Money: $" << money << "\nPrice of Acid: $" << acid << "\nSpace in inventory: " << druginventory << "\nMax Buy: "; 
            if(money/acid <= 100){
                cout << money/acid << "\n?: ";
            }else{
                cout << druginventory << "\n?: ";
            }
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
                heataction = true;
                heat = heat + 1;
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
            cout << "Dope, How much you want?\n" << "Your Money: $" << money << "\nPrice of Weed: $" << weed << "\nSpace in inventory: " << druginventory << "\nMax Buy: ";
            if(money/weed <= 100){
                cout << money/weed << "\n?: ";
            }else{
                cout << druginventory << "\n?: ";
            }
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
                heataction = true;
                heat = heat + 1;
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
            cout << "Dope, How much you want?\n" << "Your Money: $" << money << "\nPrice of Cocaine: $" << cocaine << "\nSpace in inventory: " << druginventory << "\nMax Buy: ";
            if(money/cocaine <= 100){
                cout << money/cocaine << "\n?: ";
            }else{
                cout << druginventory << "\n?: ";
            }
            cin >> temp;
            if(temp == 0){
                cin.ignore();
                cout << "\nStop fucking wasting my time.\n " << "Press enter to continue.";
                cin.get();
                goto buydrugs;
            }else if(temp * cocaine > money){
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
                money = money - (temp * cocaine);
                cocaineinventory = cocaineinventory + temp;
                heataction = true;
                heat = heat + 1;
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
            cout << "Dope, How much you want?\n" << "Your Money: $" << money << "\nPrice of Heroin: $" << heroin << "\nSpace in inventory: " << druginventory << "\nMax Buy: ";
            if(money/heroin <= 100){
                cout << money/heroin << "\n?: ";
            }else{
                cout << druginventory << "\n?: ";
            }
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
                heataction = true;
                heat = heat + 1;
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
            cout << "Dope, How much you want?\n" << "Your Money: $" << money << "\nPrice of Shrooms: $" << shrooms << "\nSpace in inventory: " << druginventory << "\nMax Buy: ";
            if(money/shrooms <= 100){
                cout << money/shrooms << "\n?: ";
            }else{
                cout << druginventory << "\n?: ";
            }
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
                heataction = true;
                heat = heat + 1;
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
        heataction = true;
        heat = heat + 1;
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
        heataction = true;
        heat = heat + 1;
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
        heataction = true;
        heat = heat + 1;
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
        heataction = true;
        heat = heat + 1;
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
        shroomsinventory = (shroomsinventory - temp);
        druginventory = (druginventory + temp);
        money = money + (temp * shrooms);
        heataction = true;
        heat = heat + 1;
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

gunstore:
    system("clear");
    cout << "Welcome to Dirk's Pawnshop where the motto is...\n" << "if you lost it someone probably stole it and sold it off to here";
    cout << "\n";
    cout << "Money: $" << money << "\nWeapon Inventory: " << weaponinventory;
    cout << "\n1.) Switchblade: $" << 20 << "\n2.) Handgun: $" << 500 << "\n3.) AR-15: $" << 5000 << "\n4.) Grenade Launcher: $" << 20000 <<"\n5.) Exit Gun Store.";
    cout << "\n?: ";
    cin >> temp;
    if(temp == 1){
        if (weaponinventory > 0){
            cin.ignore();
            cout << "\nYou already have a better weapon equiped\n" << "Press Enter to Continue";
            cin.get();
            goto gunstore;
        }else{
            if(money < 20){
                cin.ignore();
                cout << "\nnot enough money\n" << "Press Enter to Continue";
                cin.get();
                goto gunstore;
            }else{
                cin.ignore();
                cout << "\n Switchblade added to your inventory." <<"\n Press Enter to Continue";
                money = money - 20;
                weaponinventory = 1;
                damage = 20;
                cin.get();
                goto gunstore;
            }
        }                 
    }else if(temp == 2){
        if (weaponinventory > 1){
            cin.ignore();
            cout << "\nYou already have a better weapon equiped" << "\nPress Enter to Continue";
            cin.get();
            goto gunstore;
        }else if (weaponinventory == 1){      
            cin.ignore();
            cout << "\nYou already have a this weapon equiped" << "\nPress Enter to Continue";
            cin.get();
            goto gunstore;
        }else{
            if (money < 500){
                cin.ignore();
                cout << "\nnot enough money\n" << "Press Enter to Continue";
                cin.get();
                goto gunstore;
            }else{
                cin.ignore();
                cout << "\n Handgun added to your inventory." <<"\n Press Enter to Continue";
                money = money - 500;
                weaponinventory = 2;
                damage = 50;
                cin.get();
                goto gunstore;
                }
            }
    }else if (temp == 3){
        if (weaponinventory > 2){
            cin.ignore();
            cout << "\nYou already have a better weapon equiped." << "\nPress Enter to Continue.";
            cin.get();
            goto gunstore;
        }else if (weaponinventory == 2){
            cin.ignore();
            cout << "\nYou already have a this weapon equiped." << "\nPress Enter to Continue.";
            cin.get();
            goto gunstore;
        }else{
            if (money < 5000){
                cin.ignore();
                cout << "\nnot enough money" << "\nPress Enter to Continue";
                cin.get();
                goto gunstore;
            }else{
                cin.ignore();
                cout << "\n AR-15 added to your inventory." <<"\n Press Enter to Continue";
                money = money - 5000;
                weaponinventory = 3;
                damage = 500;
                cin.get();
                goto gunstore;
            }
        }
        
    }else if (temp == 4){
        if (weaponinventory > 3)
        {
            cin.ignore();
            cout << "\nYou already have a better weapon equiped." << "\nPress Enter to Continue.";
            cin.get();
            goto gunstore;
        }else if(weaponinventory == 3){
            cin.ignore();
            cout << "\nYou already have a this weapon equiped." << "\nPress Enter to Continue.";
            cin.get();
            goto gunstore;
        }else{
            if (money < 20000)
            {
                cin.ignore();
                cout << "\nnot enough money" << "\nPress Enter to Continue.";
                cin.get();
                goto gunstore;
            }else{
                cin.ignore();
                cout << "\n Grenade Launcher added to your inventory." <<"\n Press Enter to Continue";
                money = money - 20000;
                weaponinventory = 4;
                damage = 10000;
                cin.get();
                goto gunstore;
            }
        }
    
    }else if (temp == 5){
        cin.ignore();
        cout << "\nGoodbye" << "\nPress Enter to Continue.";
        cin.get();
        goto mainmenu;
    }else{
        cin.ignore();
        cout << "unacceptable action" <<"\nPress Enter to Continue";
        cin.get();
        goto gunstore;
    }

loanshark:
    cin.ignore();
    system("clear");
    cout << "What are you here for?\n" << "1.) Pay Off My Loan\n" << "2.) Take out a Loan\n" << "3.) Go Home\n" << "?: ";
    cin >> temp;
    if(temp == 1) {    
        cin.ignore();
        system("clear");
        cout << "Dope, you got my money?" << "\nMoney: " << money << "$" << "\nDebt: " << debt << "$" << "\n1.) Yes\n" << "2.) No\n" << "?: ";
        cin >> temp;
        if (temp == 1){
            cin.ignore();
            system("clear");
            cout << "\nGood how much are you paying me back?" << "\nMoney: " << money << "$" << "\nDebt: " << debt << "$" << "?: ";
            cin >> temp;
                if(temp > money) {
                    cin.ignore();
                    cout << "\nWhat the fuck are you talking about. You dont have that much money\n" << "Press enter to go back";
                    cin.get();
                    goto loanshark;
                }else if(temp > debt){
                    cin.ignore();
                    cout << "\nhey man you dont owe me that much\n" << "Press enter to continue";
                    cin.get();
                    goto loanshark;
                }else{
                    money = money - temp;
                    debt = debt - temp;
                    cin.ignore();
                    cout << "It was good doing buiness with you man." << "Press Enter to Continue";
                    cin.get();
                    goto mainmenu;
                }
        }else if(temp == 2){
            cin.ignore();
            system("clear");
            goto mainmenu;
        }else{
            cin.ignore();
            cout << "\nWhat the fuck you talking bout willis\n?" << "Press Enter to Continue";
            cin.get();
            goto loanshark;
        }
    }else if(temp == 2){
        system("clear");
        cin.ignore();
        cout << "How much money do you want?\n" << "?: ";
        cin >> temp;
        if(temp < 500){
            cin.ignore();
            cout << "Sorry Man I dont give out loans that small. Not worth my time." << "\nPress enter to continue";
            cin.get();
            goto loanshark;
        }else if (temp >= (10*money) && temp < 500){
            system("clear");
            cin.ignore();
            cout << "Its good doing buiness with you man.";
            money = money + temp;
            debt = debt + temp;
            cout << "Money: " << money << "$\n" << "Debt: " << debt << "$\n" << "Press Enter to continue";
            cin.get();
            goto mainmenu;
        }else{
            cin.ignore();
            cout << "\nWhat the Fuck are you talking about?" << "\nPress enter to contine.";
            cin.get();
            goto loanshark;
        }
    }else if(temp == 3){
        system("clear");
        cin.ignore();
        goto mainmenu;
    }else{
        cin.ignore();
        cout << "\nWhat the fuck are you talking about?" << "\nPress Enter to continue.";
        cin.get();
        goto loanshark;
    }

changelocation:
    cin.ignore();
    system("clear");
    cout << "Current Location: " << currentlocationname << "\n" << "Where would you like to go?\n" << "1.) Home\n" << "2.) Suburbs\n" << "3.) Ghetto\n" << "4.) Downtown\n" << "5.) Uptown\n" << "6.) Industrial District\n" << "7.) Main Menu\n" <<"?: ";
    cin >> temp;
    if(currentlocation == temp){
        cin.ignore();
        cout << "\nYou're already here dumbass." << "\nPress Enter to Continue.";
        cin.get();
        goto changelocation;
    }else{
        if(temp == 1){
            currentlocation = 1;
            currentlocationname = "Home";
            cout << "\nMoving to Home..." << "\n Press Enter to Continue.";
            cin.get();
            goto nextturn;

        }else if(temp == 2){
            currentlocation = 2;
            currentlocationname = "Suburbs";
            cout << "\nMoving to Suburbs..." << "\n Press Enter to Continue.";
            cin.get();
            goto nextturn;

        }else if(temp == 3){
            currentlocation = 3;
            currentlocationname = "Ghetto";
            cout << "\nMoving to Ghetto..." << "\n Press Enter to Continue.";
            cin.get();
            goto nextturn;

        }else if(temp == 4){
            currentlocation = 4;
            currentlocationname = "Downtown";
            cout << "\nMoving to Downtown..." << "\n Press Enter to Continue.";
            cin.get();
            goto nextturn;

        }else if(temp == 5){
            currentlocation = 5;
            currentlocationname = "Uptown";
            cout << "\nMoving to Uptown..." << "\n Press Enter to Continue.";
            cin.get();
            goto nextturn;

        }else if(temp == 6){
            currentlocation = 6;
            currentlocationname = "Industrial District";
            cout << "\nMoving to Industrical District..." << "\n Press Enter to Continue.";
            cin.get();
            goto nextturn;
        

        }else if(temp == 7){
            system("clear");
            goto mainmenu;

        }else{
            cin.ignore();
            cout << "\nWhere do you think you're going?" << "\nPress Enter to Continue.";
            cin.get();
            goto changelocation;
        }
    }


    
nextturn:
    cin.ignore();
    system("clear");
    srand(time(NULL));
    weed = (rand()%(30-5 + 1) + 5);
    acid = (rand()%(25-5 + 1) + 5);
    cocaine = (rand()%(110-60 + 1) + 60);
    heroin = (rand()%(250-50 + 1) + 50);
    shrooms = (rand()%(40-10 + 1) + 10);
    turn = turn + 1;
    if(debt > 0){
        debt = debt*1.14;
        system("clear");
    }else{}

    if(heataction == false){
        if(heat >= 5){
            heat = heat - 5;
            heatmodifier = heatmodifier * heat;
        }else{
            heat = 0;
            heatmodifier = heatmodifier - (heatmodifier/4);
        }
        
    }else{
        heataction = false;
        heatmodifier = heatmodifier * heat;
    }
    system("clear");
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



}