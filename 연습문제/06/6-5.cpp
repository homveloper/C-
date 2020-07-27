#include <iostream>
using namespace std;

int getLength(const char word[]);

void main()
{

    char word[100];
    int alphabet[26] = {0};

    cin >> word;

    for (int i = 0; i < getLength(word); i++)
    {
        ++alphabet[(int)(word[i] - 'a')];
    }

    for (int i = 0; i < 26; i++)
    {
        cout << (char)('a' + i) << " : " << alphabet[i] << endl;
    }

    cout << endl;
}

int getLength(const char word[])
{
    int length = 0;
    int i = 0;

    while (word[i] != '\0')
    {
        length++;
        i++;
    }
    
    return length;
}