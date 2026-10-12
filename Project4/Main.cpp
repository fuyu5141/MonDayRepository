#include<iostream>
#include"Player.h"
#include"Enemy.h"
using namespace std;
int main(void)
{
	string playerName;
	string enemyName;
	string bossName;


	cout << "名前を入力してください。" << endl;
	cout << "勇者：" << endl;
	cin >> playerName;
	cout << "敵：" << endl;
	cin >> enemyName;
	cout << "ボス：" << endl;
	cin >> bossName;


	Player player("プレイヤー");
	Enemy enemy("敵");

	
	
	
	
	player.Attack();
	enemy.Attack();
		
	return 0;
}