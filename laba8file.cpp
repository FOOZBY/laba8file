#include "Header.h"

int main()
{
    SetConsoleCP(1251); // Ввод с консоли в кодировке 1251
    SetConsoleOutputCP(1251);
    string line, prim_file, final_file;

    cout << "Введите название файла, если он в директории программы, иначе введите путь к файлу: ";
    getstr(prim_file, line);

    changestr(line);
    cout << "Изменённая строка: " << endl << line << endl << endl;

    cout << "Введите название или путь к файлу, в котором хотите сохранить результат: ";
    savestr(line,final_file);

    cout << "End of program" << endl;
    system("pause");
    return 0;
}