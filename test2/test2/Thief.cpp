#include "Theif.h"
#include <iostream>
using namespace std;

Warrior::Warrior()
{
	job_name = "Theif";
	HP += 50;
	power += 10;
	defence += 5;
}

Warrior::Warrior(string nickname)
{
	job_name = "Theif";
	setNickname(nickname);
	HP += 50;
	power += 10;
	defence += 5;
}

void Warrior::attack()
{
	cout << "Theif 가 공격했다." << endl;
}
