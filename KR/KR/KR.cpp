#include <iostream>
#include <vector>
#include "windows.h"
#include "Tchar.h"
#include <fstream>
#include <locale.h>

using namespace std;

int main()
{
    HANDLE file1;
    DWORD m;
    int len = 0;
    int size = 0;
    char cBuffer[1024] = { 0 };
    string text;
    fstream file("test.txt");
    
    
    setlocale(LC_ALL, "Russian");

    file1 = CreateFile(L"CONIN$", GENERIC_READ, FILE_SHARE_READ, 0, OPEN_EXISTING, 0, 0);
    ReadFile(file1, cBuffer, sizeof(cBuffer), &m, NULL);
    
    text = cBuffer;
    len = text.length() - 2;
    cout << "Введённый текст весит: ";
    if (len < 1024) cout << len << " байт" << endl;
    else cout << 1024 << " байт" << endl;

    file.seekg(0, ios::end);
    size = file.tellg();
    cout << "Файл весит: " << size << " байт" << endl;
    file.close();
    
    return 1;
}
