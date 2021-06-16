#include "Vrash.h"

Vrash::Vrash(int max)
{
	Max_lenght = max;
	lenght = 0;
	baraban = new int[max];
	for (int i = 0;i < max;i++)
	{
		baraban[i] = rand() % 8;
	}
	slot1 = baraban[rand() % max];
	slot2 = baraban[rand() % max];
	slot3 = baraban[rand() % max];
}

Vrash::~Vrash()
{
	delete[]baraban;
}

void Vrash::Clear()
{
	lenght = 0;
}

bool Vrash::Empty()
{
	return lenght==0;
}

bool Vrash::Full()
{
	return lenght==Max_lenght;
}

void Vrash::vrash()
{
	_rand();
	for (int i = 0;i < 5;i++)
	{
		system("cls");
		cout << "\n**|   " << baraban[i+4] << "  ||  " << baraban[i + 1] << "  ||  " << baraban[i+2] << "   |**";
		for (int i = 0;i < 3;i++)
		{
			cout << "\n**|      ||     ||      |**";
		}
		cout<< "\n**|   " << baraban[i] << "  ||  " << baraban[i+2] << "  ||  " << baraban[i+3] << "   |**";
		for (int i = 0;i < 3;i++)
		{
			cout << "\n**|      ||     ||      |**";
		}
		cout << "\n**|   " << baraban[i+2] << "  ||  " << baraban[i+3] << "  ||  " << baraban[i] << "   |**";
		Sleep(500);
	}


	system("cls");
	cout << "\n**|   " << slot1 << "  ||  " << baraban[2] << "  ||  " << baraban[7] << "   |**";
	for (int i = 0;i < 3;i++)
	{
		cout << "\n**|      ||     ||      |**";
	}
	cout << "\n**|   " << baraban[8] << "  ||  " << baraban[5] << "  ||  " << baraban[6] << "   |**";
	for (int i = 0;i < 3;i++)
	{
		cout << "\n**|      ||     ||      |**";
	}
	cout << "\n**|   " << baraban[4] << "  ||  " << baraban[6] << "  ||  " << baraban[7] << "   |**";
	Sleep(500);


	system("cls");
	cout << "\n**|   " << baraban[4] << "  ||  " << slot2 << "  ||  " << baraban[2] << "   |**";
	for (int i = 0;i < 3;i++)
	{
		cout << "\n**|      ||     ||      |**";
	}
	cout << "\n**|   " << slot1 << "  ||  " << baraban[2] << "  ||  " << baraban[7] <<"   |**";
	for (int i = 0;i < 3;i++)
	{
		cout << "\n**|      ||     ||      |**";
	}
	cout << "\n**|   " << baraban[8] << "  ||  " << baraban[5] << "  ||  " << baraban[6] << "   |**";
	Sleep(500);


	system("cls");
	cout << "\n**|   " << baraban[4] << "  ||  " << baraban[5] << "  ||  " << slot3 << "   |**";
	for (int i = 0;i < 3;i++)
	{
		cout << "\n**|      ||     ||      |**";
	}
	cout << "\n**|   " << slot1 << "  ||  " << slot2 << "  ||  " << baraban[2] << "   |**";
	for (int i = 0;i < 3;i++)
	{
		cout << "\n**|      ||     ||      |**";
	}
	cout << "\n**|   " << baraban[8] << "  ||  " << baraban[2] << "  ||  " << baraban[7] << "   |**";
	Sleep(500);



	system("cls");
	cout << "\n**|   " << baraban[4] << "  ||  " << baraban[5] << "  ||  " << baraban[7] << "   |**";
	for (int i = 0;i < 3;i++)
	{
		cout << "\n**|      ||     ||      |**";
	}
	cout << "\n**|   " << slot1 << "  ||  " << slot2 << "  ||  " << slot3 << "   |**";
	for (int i = 0;i < 3;i++)
	{
		cout << "\n**|      ||     ||      |**";
	}
	cout << "\n**|   " << baraban[8] << "  ||  " << baraban[2] << "  ||  " << baraban[2] << "   |**";
	Sleep(500);


	if (slot1 == slot2&&slot1 == slot3&&slot2==slot3)
	{
		cout << "\n\n\n\n\n\nТы выиграл право оценить мою первую игру(вам её пришлют на почту через 20 лет)!!!!!";
	}
	else if (slot1 == slot2 || slot1 == slot3 || slot2 == slot3)
	{
		cout << "\n\n\n\n\n\nВы почти выиграли,не отчаивайтесь!!!";
	}
	else
	{
		cout << "\n\n\n\n\n\nВы проиграли,не отчаиваетесь,вы сможете ещё выиграть!!!(Заплатите 1 рубль за следующую попытку)";
	}
	Sleep(500);
}

void Vrash::_rand()
{
	for (int i = 0;i < Max_lenght;i++)
	{
		baraban[i] = rand() % 8;
	}
	slot1 = baraban[rand() % Max_lenght];
	slot2 = baraban[rand() % Max_lenght];
	slot3 = baraban[rand() % Max_lenght];
}
