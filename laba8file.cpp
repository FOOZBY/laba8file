#include "Header.h"

int main()
{
    SetConsoleCP(1251); // Ввод с консоли в кодировке 1251
    SetConsoleOutputCP(1251);
    string line, prim_file, final_file;

    getstr(prim_file, line);

    changestr(line);
    cout << endl << "Изменённая строка: " << endl << line << endl << endl;

    savestr(final_file, line);

    cout << "End of program" << endl;
    system("pause");
    return 0;
}