//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ifstream cheerbook("C:\\Users\\ADVICE\\Desktop\\class c++\\VS code\\lab9-2562-2-mekkkwiz\\cheerbook.txt");
    ofstream cheerbook_copy("C:\\Users\\ADVICE\\Desktop\\class c++\\VS code\\lab9-2562-2-mekkkwiz\\cheerbook_copy.txt");
    string textline;


    cheerbook_copy << "-------------------- SOTUS ---------------------" << endl;

    while (getline(cheerbook,textline))
    {
        cheerbook_copy << textline << endl;
    }

    cheerbook_copy << "-------------------- SOTUS ---------------------";
    cheerbook_copy.close();
    cheerbook.close();

    return 0;
}