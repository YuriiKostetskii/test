#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    string* words = new string[s.length()];
    int j = 0;
    for (int i = 0;i < s.length();i++)
    {
        if (s[i] != ';')
        {
            words[j] += s[i];
        }
        else
        {
            words[j] += s[i];
            j++;
        }
    }
    string a;
    for (int i = 0;i <= j;i++)
    {
        if (words[i][words[i].length() - 1] == ';')
        {
            for (int k = words[i].length() - 2;k >= 0;k--)
            {
                a += words[i][k];
            }
            a += words[i][words[i].length() - 1];
        }
       
        else
        {
            for (int k = words[i].length() - 1;k >= 0;k--)
            {
                a += words[i][k];
            }
        }
    }
    cout << a;
}
