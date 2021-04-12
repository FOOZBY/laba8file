#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include <conio.h>
using namespace std;

void getstr(string prim_file, string &line)
{
    while (true)
    {
        getline(cin, prim_file);
        ifstream in;
        in.open(prim_file); // �������� ���� ��� ������
        if (in.is_open())
        {
            getline(in, line, '\0');
            cout << "����������� ������: " << endl << line << endl << endl;
            break;
        }
        else
        {
            cout << "���� �� ���������� � ��������� �����." << endl;
            cout << "������� ���/���� ����� ���������" << endl;
            cin.clear();
            cin.ignore(32767, '\n');
        }
        cin.seekg(0, ios::end);
        cin.clear();
        in.close();
    }    // ��������� ����
}

void changestr(string &line)
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

void savestr(string &line, string final_file)
{
    while (true)
    {
        getline(cin, final_file);
        ofstream out;
        out.open(final_file); // �������� ���� ��� ������
        if (out.is_open())
        {
            out << line;
            cout << "��������� �������" << endl << endl;
            break;
        }
        else
        {
            cout << "�� ����������� ������� ���� � ����� ���/� �� ������� ��� �����. ������� ���� � ��� ����� ������" << endl;
            cin.clear();
            cin.ignore(32767, '\n');
        }
        cin.seekg(0, ios::end);
        cin.clear();
        out.close();// ��������� ����
    }    
}