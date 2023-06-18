#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int choice, i, j, w{}, h{}, step{};
    const int size = 10;
    //Task_1
    cout << "Выберите тип треугольника для рисовки:" << "\n";
    cout << "1 - Вариант А" << "\n";
    cout << "2 - Вариант Б" << "\n";
    cout << "3 - Вариант В" << "\n";
    cout << "4 - Вариант Г" << "\n";
    cout << "5 - Вариант Д" << "\n";
    cout << "6 - Вариант Е" << "\n";
    cout << "7 - Вариант Ж" << "\n";
    cout << "8 - Вариант З" << "\n";
    cout << "9 - Вариант И" << "\n";
    cout << "10 - Вариант К" << "\n";
    cin >> choice;
    switch (choice) {
    case 1:
    {
        for (int i = 1; i < size; i++) {
            for (j = 0; j < size; j++) {
                if (j >= i)
                {
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }
            cout << "\n";
        }
    }
    break;
    case 2: {
        for (i = 0; i < size; i++)
        {
            for (j = 0; j <= i; j++)
            {
                cout << "*";
            }
            cout << "\n";
        }
    }
          break;
    case 3: {
        for (int i = size; i >= 0; i--) {
            for (int j = 0; j < size - i; j++) {
                cout << " ";
            }
            for (int k = 0; k < (2 * i) - 1; k++) {
                cout << "*";
            }
            cout << "\n";
        }

    }
          break;
    case 4: {
        for (int i = 0; i < size; i++) {
            for (int j = size - i; j > 1; j--) {
                cout << " ";
            }
            for (int k = 0; k <= i; k++) {
                cout << "* ";
            }
            cout << "\n";
        }
    }
          break;
    case 5: {
        for (i = 0; i < size; i++)
        {
            if (i <= size / 2 - 1) {
                for (j = 0; j <= size - i; j++)
                {
                    if (j >= i)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                cout << "\n";
            }
            else
            {
                for (j = 0; j < i; j++)
                {
                    if (j >= i - step)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                step = step + 2;
                cout << "\n";
            }

        }
    }
          break;
    case 9: {
        for (int i = size + 1; i >= 0; i--) {
            for (int j = 0; j > size + i + 1; j++) {
                cout << " ";
            }
            for (int k = 0; k <= i; k++) {
                cout << "* ";
            }
            cout << "\n";
        }
    }
          break;
    case 10: {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                cout << "  ";
            }
            for (int j = 0; j <= i; j++) {
                cout << "* ";
            }
            cout << "\n";
        }
    }
           break;
    }
}