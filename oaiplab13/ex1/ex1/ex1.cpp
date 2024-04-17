#include <iostream>
using namespace std;

int main()
{
    char str[100] = "This is a sample string.";
    char insertstr[100] = "inserted";
    int k = 5;

    int lenstr = strlen(str);
    int leninsertstr = strlen(insertstr);

    for (int i = lenstr - 1 ; i >= k; i--)
    {
        str[i + leninsertstr] = str[i];
    }

    for (int i = 0; i < leninsertstr; i++)
    {
        str[k + i] = insertstr[i];
    }

    cout << "Line after insertion: " << str << endl;
    return 0;
}
