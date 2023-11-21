#include<iostream>
#include<string>
#include<ctime>
#include<Windows.h>
#include<algorithm>
#include<fstream>

using namespace std;
int Level1 = 1, Level2 = 1, Level3 = 1;
class Warrior {
private:
	long long maxattack, maxblock;
public:
	string name;
	long long  health;
	Warrior(string name, long long health,
		long long maxattack, long long maxblock) {
		this->name = name;
		this->health = health;
		this->maxattack = maxattack;
		this->maxblock = maxblock;
	}
	long long TheAttach() { return rand() % maxattack; }
	long long TheBlock() { return rand() % maxblock; }
	void show() {
		cout << "Warrior Name : " << name << "      Warrior Health : " << health <<
			"      Warrior  maxattack : " << maxattack << "      Warrior maxblock : " << maxblock << endl;
	}
	string showname() {
		return name;
	}
};
class BattelLevel1  {
public:
	static string  StartgameLevel1(Warrior& w1, Warrior& w2) {
		while (true) {
			if (ResultOfBattel1(w1, w2).compare("Game Over") == 0) {
				return w1.name;
			}
			if (ResultOfBattel1(w2, w1).compare("Game Over") == 0) {
				return w2.name;
				break;
			}
		}

	}


	static string ResultOfBattel1(Warrior& w1, Warrior& w2) {
		int TheAttack = w1.TheAttach();
		int TheBlock = w2.TheBlock();
		int damage = TheAttack - TheBlock;
		if (damage <= 0)damage = 0;
		w2.health = w2.health - damage;
		Sleep(1500);
		cout << "\n                                                  ROUND " << Level1 << "                  \n";
		Level1++;
		cout << "                                   "<<w1.name << " Attack " << w2.name << " And Deal Him " << damage << " Damage . \n";
		cout << "                                   " << w2.name << " Down To " << w2.health << " Health " << endl<<endl;
		if (w2.health <= 0) {
			return "Game Over";
		}
		else {
			return" ";
		}
	}
};
class BattelLevel2  {

public:
	static string  StartgameLevel2(Warrior& w1, Warrior& w2) {
		while (true) {
			if (ResultOfBattel2(w1, w2).compare("Game Over") == 0) {
				return w1.name;
			}
			if (ResultOfBattel2(w2, w1).compare("Game Over") == 0) {
				return w2.name;
				break;
			}
		}

	}


	static string ResultOfBattel2(Warrior& w1, Warrior& w2) {
		int TheAttack = w1.TheAttach();
		int TheBlock = w2.TheBlock();
		int damage = TheAttack - TheBlock;
		if (damage <= 0)damage = 0;
		w2.health = w2.health - damage;
		Sleep(150);
		cout << "\n                                                  ROUND " << Level2 << "                  \n";
		Level2++;
		cout << "                                   " << w1.name << " Attack " << w2.name << " And Deal Him " << damage << " Damage . \n";
		cout << "                                   " << w2.name << " Down To " << w2.health << " Health " << endl << endl;
		if (w2.health <= 0) {
			return "Game Over";
		}
		else {
			return" ";
		}
	}

};
class BattelLevel3  {

public:
	static string  StartgameLevel3(Warrior& w1, Warrior& w2) {
		while (true) {
			if (ResultOfBattel3(w1, w2).compare("Game Over") == 0) {
				return w1.name;
			}
			if (ResultOfBattel3(w2, w1).compare("Game Over") == 0) {
				return w2.name;
				break;
			}
		}

	}

	static string ResultOfBattel3(Warrior& w1, Warrior& w2) {
		int TheAttack = w1.TheAttach();
		int TheBlock = w2.TheBlock();
		int damage = TheAttack - TheBlock;
		if (damage <= 0)damage = 0;
		w2.health = w2.health - damage;
	
		Sleep(150);
		
		cout << "\n                                                  ROUND " << Level3 << "                  \n";
		Level3++;
		cout << "                                   " << w1.name << " Attack " << w2.name << " And Deal Him " << damage << " Damage . \n";
		cout << "                                   " << w2.name << " Down To " << w2.health << " Health " << endl << endl;
		if (w2.health <= 0) {
			return "Game Over";
		}
		else {
			return" ";
		}
	}

};
int main() {
	srand(time(NULL));
	// Warrior of level 1

									// LEVEL 1

	Warrior w1level1("Snow", 150, 10, 25), w2level1("Fire", 100, 30, 15), w3level1("Wind", 155, 10, 30);
	Warrior BootOfLevel1("Werner ", 90, 15, 10);
	int chocieWarrior, chocie;


	cout << "                                          ------------------------------ LEVEL 1 ------------------------------\n";
	cout << "Warriars : " << endl;
	cout << "1) "; w1level1.show();
	cout << "2) "; w2level1.show();
	cout << "3) "; w3level1.show();
	cout << "Chose Warrior to Strat The Fight of LEVEL 1 : "; cin >> chocieWarrior;


	Sleep(1000);
	system("cls");

	//hero number 1 
	if (chocieWarrior == 1) {
		// info about fight 
		cout << w1level1.showname() << " Will Figth  " << BootOfLevel1.showname() << endl;
		cout << "\nThe Warrior You will Fight proprties \n\n";
		BootOfLevel1.show();
		cout << "\nThe Fight Will Start After 8 seconds ";
		Sleep(8000);
		system("cls");
		cout << "The Figth Strated " << endl;




		// the fight
		if (BattelLevel1::StartgameLevel1(w1level1, BootOfLevel1) == BootOfLevel1.name) {// if the pc won the game the game will ended  
			Sleep(2000);
			cout << BootOfLevel1.name << " WON the Game \n";
			cout << "Game over \n";
			system("pause");
			return 0;

		}

		else {// if the hero won the game the game will continue if he want 
			Sleep(8000);
			system("cls");
			//DISPLAY THAT HE WON
			cout << "                                              Congratulation Your Hero " << w1level1.name << " Won The Game \n";
			Sleep(2000);
			// ASK FOR CONTINUE 
			cout << "                                   To Continue The Game press 1 : \n                                   And Any Key To Exit :\n";
			cin >> chocie;
			if (chocie == 1) {
				goto level2;// IF HE WANT TO GO TO LEVEL 2
			}
			else {
				system("pause");
				return 0;
			}
		}
	}


	// HERO NUMBER 2
	else if (chocieWarrior == 2) {
		// INFO ABOUT FIGHT 
		cout << w2level1.showname() << " Will Figth  " << BootOfLevel1.showname() << endl;
		cout << "\nThe Warrior You will Fight proprties \n\n";
		BootOfLevel1.show();
		cout << "\nThe Fight Will Start After 8 seconds ";
		Sleep(8000);
		system("cls");
		cout << "The Figth Strated " << endl;


		// THE FIGTH
		if (BattelLevel1::StartgameLevel1(w2level1, BootOfLevel1) == BootOfLevel1.name) {// IF PC WON THE GAME THE GAME  WILL BE ENDED
			Sleep(2000);
			cout << BootOfLevel1.name << " WON the Game \n";
			cout << "               Game over \n";
			system("pause");
			return 0;
		}

		else { // IF HERO WON THE GAME THE GAME WILL CONTINUE IF HE WANT 
			Sleep(8000);
			system("cls");
			//DISPLAY THAT HE WON
			cout << "                                             Congratulation Your Hero " << w2level1.name << " Won The Game \n";
			Sleep(2000);
			// ASK FOR CONTINUE 
			cout << "                                   To Continue The Game press 1 : \n                                   And Any Key To Exit :\n";
			cin >> chocie;
			if (chocie == 1) {
				goto level2;// IF HE WANT TO GO TO LEVEL 2
			}
			else {
				system("pause");
				return 0;
			}
		}
	}


	//HERO NUMBER 3
	else if (chocieWarrior == 3) {
		// INFO ABOUT FIGHT  
		cout << w3level1.showname() << " Will Figth  " << BootOfLevel1.showname() << endl;
		cout << "\nThe Warrior You will Fight proprties \n\n";
		BootOfLevel1.show();
		cout << "\nThe Fight Will Start After 8 seconds ";
		Sleep(8000);
		system("cls");
		cout << "The Figth Strated " << endl;


		//THE FIGHT 
		if (BattelLevel1::StartgameLevel1(w3level1, BootOfLevel1) == BootOfLevel1.name) {// IF PC WON THE GAME THE GAME  WILL BE ENDED
			Sleep(3000);
			cout << BootOfLevel1.name << " WON the Game \n";
			cout << "Game over \n";
			system("pause");
			return 0;
		}

		else {// IF HERO WON THE GAME THE GAME WILL CONTINUE IF HE WANT 
			Sleep(8000);
			system("cls");
			//DISPLAY THAT HE WON
			cout << "                                           Congratulation Your Hero " << w3level1.name << " Won The Game \n";
			Sleep(2000);
			// ASK FOR CONTINUE 
			cout << "                                   To Continue The Game press 1 : \n                                   And Any Key To Exit :\n";
			cin >> chocie;
			if (chocie == 1) {
				goto level2;// IF HE WANT TO GO TO LEVEL 2
			}
			else {
				system("pause");
				return 0;
			}
		}
	}


	//LEVEL2
/*
tools
	int chocieWarrior, chocie;
	Warrior w1level2("Snow", 150, 10, 25), w2level2("Fire", 100, 30, 15), w3level2("Wind", 155, 10, 30);
	Warrior BootOfLevel2("Pc Warrior ", 90, 10, 10);

*/




level2:


	Sleep(2000);
	system("cls");
	cout << "                                                 Great Job You Are passed Level1 Now Lets Start Level 2     \n\n";


	Warrior w1level2("Gunner", 150, 25, 30), w2level2("Harvey", 200, 20, 35), w3level2("Ramon ", 200, 15, 30);
	Warrior BootOfLevel2("Reima ", 250, 10, 30);


	cout << "                                          ------------------------------ LEVEL 2 ------------------------------\n";
	Sleep(3000);
	cout << "Warriars : " << endl;
	cout << "1) "; w1level2.show();
	cout << "2) "; w2level2.show();
	cout << "3) "; w3level2.show();
	cout << "Chose Warrior to Strat The Fight of LEVEL 2 : "; cin >> chocieWarrior;

	Sleep(1000);
	system("cls");


	if (chocieWarrior == 1) {


		// info about fight 
		cout << w1level2.showname() << " Will Figth  " << BootOfLevel2.showname() << endl;
		cout << "\nThe Warrior You will Fight proprties \n\n";
		BootOfLevel2.show();
		cout << "\nThe Fight Will Start After 8 seconds ";
		Sleep(8000);
		system("cls");
		cout << "The Figth Strated " << endl;




		// the fight
		if (BattelLevel2::StartgameLevel2(w1level2, BootOfLevel2) == BootOfLevel2.name) {// if the pc won the game the game will ended  
			Sleep(2000);
			cout << "Pc Warrior WON the Game \n";
			cout << "Game over \n";
			system("pause");
			return 0;

		}



		else {// if the hero won the game the game will continue if he want 
			Sleep(8000);
			system("cls");
			//DISPLAY THAT HE WON
			cout << "Congratulation Your Hero " << w1level2.name << " Won The Game \n";
			Sleep(2000);
			// ASK FOR CONTINUE 
			cout << "To Continue The Game press 1 : \nAnd Any Key To Exit :\n";
			cin >> chocie;
			if (chocie == 1) {
				goto level3;// IF HE WANT TO GO TO LEVEL 3
			}
			else {
				system("pause");
				return 0;
			}
		}
	}


	else if (chocieWarrior == 2) {


		// info about fight 
		cout << w2level2.showname() << " Will Figth  " << BootOfLevel2.showname() << endl;
		cout << "\nThe Warrior You will Fight proprits \n\n";
		BootOfLevel2.show();
		cout << "\nThe Fight Will Start After 8 seconds ";
		Sleep(8000);
		system("cls");
		cout << "The Figth Strated " << endl;




		// the fight
		if (BattelLevel2::StartgameLevel2(w2level2, BootOfLevel2) == BootOfLevel2.name) {// if the pc won the game the game will ended  
			Sleep(2000);
			cout << BootOfLevel2.name << " WON the Game \n";
			cout << "Game over \n";
			system("pause");
			return 0;

		}


		else {// if the hero won the game the game will continue if he want 
			Sleep(8000);
			system("cls");
			//DISPLAY THAT HE WON
			cout << "Congratulation Your Hero " << w2level2.name << " Won The Game \n";
			Sleep(2000);
			// ASK FOR CONTINUE 
			cout << "To Continue The Game press 1 : \nAnd Any Key To Exit :\n";
			cin >> chocie;
			if (chocie == 1) {
				goto level3;// IF HE WANT TO GO TO LEVEL 3
			}
			else {
				system("pause");
				return 0;
			}
		}

	}


	else  if (chocieWarrior == 3) {
		// info about fight 
		cout << w3level2.showname() << " Will Figth  " << BootOfLevel2.showname() << endl;
		cout << "\nThe Warrior You will Fight proprits \n\n";
		BootOfLevel2.show();
		cout << "\nThe Fight Will Start After 8 seconds ";
		Sleep(8000);
		system("cls");
		cout << "The Figth Strated " << endl;




		// the fight
		if (BattelLevel2::StartgameLevel2(w3level2, BootOfLevel2) == BootOfLevel2.name) {// if the pc won the game the game will ended  
			Sleep(2000);
			cout << BootOfLevel2.name << " WON the Game \n";
			cout << "Game over \n";
			system("pause");
			return 0;

		}



		else {// if the hero won the game the game will continue if he want 
			Sleep(8000);
			system("cls");
			//DISPLAY THAT HE WON
			cout << "                                  Congratulation Your Hero " << w3level2.name << " Won The Game \n";
			Sleep(2000);
			// ASK FOR CONTINUE 
			cout << "                        To Continue The Game press 1 : \n                        And Any Key To Exit :\n";
			cin >> chocie;
			if (chocie == 1) {
				goto level3;// IF HE WANT TO GO TO LEVEL 3
			}
			else {
				system("pause");
				return 0;
			}
		}
	}





	//LEVEL 3
/*
tools
	int chocieWarrior, chocie;
	Warrior w1level2("Snow", 150, 10, 25), w2level2("Fire", 100, 30, 15), w3level2("Wind", 155, 10, 30);
	Warrior BootOfLevel2("Pc Warrior ", 90, 10, 10);

*/




level3:


	Sleep(2000);
	system("cls");
	cout << "                                                 Great Job You Are passed Level1 Now Lets Start Level 3   \n\n";


	Warrior w1level3("Olivar", 300, 50, 40), w2level3("Kemp  ", 400, 30, 50), w3level3("Faris ", 350, 40, 50);
	Warrior BootOfLevel3("Xosha ", 450, 40, 35);


	cout << "                                          ------------------------------ LEVEL 3 ------------------------------\n";
	Sleep(3000);
	cout << "Warriars : " << endl;
	cout << "1) "; w1level3.show();
	cout << "2) "; w2level3.show();
	cout << "3) "; w3level3.show();
	cout << "Chose Warrior to Strat The Fight of LEVEL 3 : "; cin >> chocieWarrior;

	Sleep(1000);
	system("cls");

	if (chocieWarrior == 1) {


		// info about fight 
		cout << w1level3.showname() << " Will Figth  " << BootOfLevel3.showname() << endl;
		cout << "\nThe Warrior You will Fight proprties \n\n";
		BootOfLevel3.show();
		cout << "\nThe Fight Will Start After 8 seconds ";
		Sleep(8000);
		system("cls");
		cout << "The Figth Strated " << endl;




		// the fight
		if (BattelLevel3::StartgameLevel3(w1level3, BootOfLevel3) == BootOfLevel3.name) {// if the pc won the game the game will ended  
			Sleep(2000);
			cout << BootOfLevel3.name << " Warrior WON the Game \n";
			cout << "Game over \n";
			system("pause");
			return 0;

		}



		else {// if the hero won the game the game will continue if he want 
			Sleep(8000);
			system("cls");
			//DISPLAY THAT HE WON
			cout << "                                Congratulation Your Hero " << w1level3.name << " Won The Game \n";
			Sleep(4000);
		}


	}
	else if (chocieWarrior == 2) {


		// info about fight 
		cout << w2level3.showname() << " Will Figth  " << BootOfLevel3.showname() << endl;
		cout << "\nThe Warrior You will Fight proprties \n\n";
		BootOfLevel3.show();
		cout << "\nThe Fight Will Start After 8 seconds ";
		Sleep(8000);
		system("cls");
		cout << "The Figth Strated " << endl;




		// the fight
		if (BattelLevel3::StartgameLevel3(w2level3, BootOfLevel3) == BootOfLevel3.name) {// if the pc won the game the game will ended  
			Sleep(2000);
			cout << BootOfLevel3.name << " Warrior WON the Game \n";
			cout << "Game over \n";
			system("pause");
			return 0;

		}



		else {// if the hero won the game the game will continue if he want 
			Sleep(8000);
			system("cls");
			//DISPLAY THAT HE WON
			cout << "                 Congratulation Your Hero " << w2level3.name << " Won The Game \n";
			Sleep(3000);

		}

	}
	else if (chocieWarrior == 3) {


		// info about fight 
		cout << w3level3.showname() << " Will Figth  " << BootOfLevel3.showname() << endl;
		cout << "\nThe Warrior You will Fight proprties \n\n";
		BootOfLevel3.show();
		cout << "\nThe Fight Will Start After 8 seconds ";
		Sleep(8000);
		system("cls");
		cout << "The Figth Strated " << endl;




		// the fight
		if (BattelLevel3::StartgameLevel3(w3level3, BootOfLevel3) == BootOfLevel3.name) {// if the pc won the game the game will ended  
			Sleep(2000);
			cout << BootOfLevel3.name << " Warrior WON the Game \n";
			cout << "Game over \n";
			system("pause");
			return 0;

		}



		else {// if the hero won the game the game will continue if he want 
			Sleep(8000);
			system("cls");
			//DISPLAY THAT HE WON
			cout << "                               Congratulation Your Hero " << w3level3.name << " Won The Game \n";
			Sleep(3000);
		}

	}



	cout << "\n\n\n\n\n\n";


	cout << "                                                       What Amazing Fights You Done !!                              \n";
	cout << "                                                    Congratulation You finshed the game                                          \n";

	system("pause");
}