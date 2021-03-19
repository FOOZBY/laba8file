#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251); // Ввод с консоли в кодировке 1251
    SetConsoleOutputCP(1251);
    string line;
    ifstream in("prim_file.txt"); // окрываем файл для чтения
    if (in.is_open())
        while (getline(in, line))
            cout << "Изначальная строка: " << endl << line << endl;
    else
    {
        cout << "Файл не существует в указанном месте(репозиторий проекта)" << endl;
        system("pause");
        return 0;
    }
    in.close();     // закрываем файл
    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] > 64 && line[i] < 91 || line[i] > 96 && line[i] < 123)
        {      
            line.erase(i, 1);
            i--;
        }
    }
    cout << "Изменённая строка: " << endl << line << endl;
    ofstream out;
    out.open("final_file.txt");
    if (out.is_open())
        out << line;
    out.close();
    cout << "End of program" << endl;
    system("pause");
    return 0;
}