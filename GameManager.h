#ifndef GAMEMANAGER_H_
#define GAMEMANAGER_H_

#include <cstdlib>
#include <ctime>

#include "Character.h"
#include "Shop.h"
#include "Inventory.h"
#include "Item.h"
#include "Inventory.h"

using namespace std;

// Text RPG���� GameManager�� �� �ϳ��� �����ؾ� �ϹǷ� �̱��� ���
class GameManager
{
private:
	// ���� ��� ������ �̱��� �ν��Ͻ��� ����
	static GameManager* instance;

	GameManager()
	{
	};

	~GameManager()
	{
	};

	GameManager(const GameManager&) = delete;
	GameManager& operator=(const GameManager) = delete;


public:
	// �̱��� �ν��Ͻ� ���� �޼���
	static GameManager* getInstance()
	{
		if (instance == nullptr)
		{
			instance = new GameManager();
		}
		return instance;
	}

	// ���� �湮
	void visitShop(Character* player)
	{
		displayItems();
		buyItem();
		sellItem();
	}

	// �κ��丮 ǥ��
	void displayInventory(Character* player)
	{
		cout << "======���� ������ ������======" << endl;
		for (*item item : player->inventory)
		{
			cout << "\"" << item->getName() << "\"" << endl;
		}
		cout << "==============================." << endl;
	}

};

#endif // !GAMEMANAGER_H_