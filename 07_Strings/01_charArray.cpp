#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main()
{
    // char str[] = {'1', '2', '3'};
    // char str[] = {'a', 'b', 'c', '\0'};
    // char str1[] = "Shelli";

    // cout << strlen(str) << endl;
    // cout << strlen(str1) << endl;
    // cout << str[2] << endl;
    // cout << str1[5] << endl;
    // cout << str << endl;

    // char str[10];

    // cout << "Enter a character Array : ";
    // // cin >> str;
    // cin.getline(str, 100, '$');
    // cin.getline(str, 10);

    // for (char ch : str)
    // {
    //     cout << ch << " ";
    // }
    // cout << endl;

    char str[] = "Shellipal";
    int len = 0;

    for (int i = 0; i < str[i]; i++)
    {
        len++;
    }
    cout << "length of string : " << len << endl;
    return 0;
}

// character array are not changeble....its not dynamic .....so we use string ....because its dynamic (resize during runtime.........)