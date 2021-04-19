#include "Header.h"

void getstr(string prim_file, string& line)
{
    cout << "Введите название файла, если он в директории программы, иначе введите путь к файлу: ";
    while (true)
    {
        getline(cin, prim_file);
        ifstream in;
        in.open(prim_file); // окрываем файл для чтения
        if (in.is_open())
        {
            getline(in, line, '\0');
            cout << endl << "Изначальная строка: " << endl << line << endl << endl;
            break;
        }
        else
        {
            cout << "Файл не существует в указанном месте." << endl;
            cout << "Укажите имя/путь файла корректно" << endl;
            cin.clear();
            cin.ignore(32767, '\n');
        }
        cin.seekg(0, ios::end);
        cin.clear();
        in.close();
    }    // закрываем файл
}

void changestr(string& line)
{
    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] > 64 && line[i] < 91 || line[i] > 96 && line[i] < 123)
        {
            line.erase(i, 1);
            i--;
        }
    }
}

void savestr(string final_file, string& line)
{
    cout << "Введите название или путь к файлу, в котором хотите сохранить результат: ";
    while (true)
    {
        getline(cin, final_file);
        ofstream out;
        out.open(final_file); // окрываем файл для записи
        if (out.is_open())
        {
            out << line;
            cout << "Результат сохранён" << endl << endl;
            break;
        }
        else
        {
            cout << "Вы неправильно указали путь к файлу или/и не указали имя файла. Укажите путь и имя файла заново" << endl;
            cin.clear();
            cin.ignore(32767, '\n');
        }
        cin.seekg(0, ios::end);
        cin.clear();
        out.close();// закрываем файл
    }
}