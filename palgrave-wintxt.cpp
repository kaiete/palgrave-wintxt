#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
    cout << "< Hello!\n(press any key)\n";
    int getchnum;
    getchnum = _getch();
    string textin;
    while (1) {
        cout << "> ";
        cin >> textin;
        if (textin == "hello") {
            cout << "Hello to you too!";
        }
        if (textin == "exit") {
            exit(1);
        }
        if (textin.find("number")) {
            string favtext = "My favourite number is ";
            string favnum = favtext + to_string(getchnum);
            cout << favnum;
        }
        cout << "\n";
    }
}