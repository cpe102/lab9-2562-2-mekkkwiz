#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include<cstdlib>
using namespace std;

int main()
{
    double count=0;
    double sum_xe2=0,sd,x_bar,sum=0;
    string text;
    ifstream socre("C:\\Users\\ADVICE\\Desktop\\class c++\\VS code\\lab9-2562-2-mekkkwiz\\score.txt");

    while (getline(socre,text))
    {
        sum += atof(text.c_str());
        sum_xe2 += pow(atof(text.c_str()),2);
        count++;
    }

    x_bar = sum/count;

    sd = sqrt(((1/count)*sum_xe2)-(pow(x_bar,2)));

    cout << "Number of data = " << count << endl;
    cout << "Mean = " << x_bar << endl;
    cout << "Standard deviation = " << sd << endl;

    return 0;
}
//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";