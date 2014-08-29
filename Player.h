#include <iostream>
#include <cstring>
using namespace std;

struct Player
{
	char name[64];
	int str;
	int dex;
	int wis;
	int cHP;
};

Player PlayerConstructor(char *n, int s, int d, int w, int hp)
{
	Player p = {"",s,d,w,hp};
	strcpy_s(p.name, 64, n);
	return p;
}

void PrintPlayer(Player &p)
{
	cout << "Name       : " << p.name << endl
		 << "Strength   : " << p.str << endl 
		 << "Dexterity  : " << p.dex << endl 
		 << "Wisdom     : " << p.wis << endl 
		 << "Hit Points : " << p.cHP << endl;
}

void DoCombat(Player &p1, Player &p2)
{
	// Calculate the fight here...
	// etc.
}