#include "Magician.h"
#include <iostream>
using namespace std;

Warrior::Warrior()
{
	job_name = "Magician";
	HP += 50;
	power += 10;
	defence += 5;
}

Warrior::Warrior(string nickname)
{
	job_name = "Magician";
	setNickname(nickname);
	HP += 50;
	power += 10;
	defence += 5;
}

void Warrior::attack()
{
	cout << "Magician 이 공격했다." << endl;
}
