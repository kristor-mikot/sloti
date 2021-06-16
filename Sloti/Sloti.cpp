#include "Vrash.h"
int main()
{
    string resh;
    srand(time(0));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    system("cls");
    Vrash baraban(10);
    while (true)
    {
        cout << "\nХотите сыграть?";
        cin >> resh;
        if (resh == "да")
        {
            baraban.vrash();
        }
        else
        {
            cout << "\nКак хотите.\nДо следующей встречи!!!";
            break;
        }
    }
}
