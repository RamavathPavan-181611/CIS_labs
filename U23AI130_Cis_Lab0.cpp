#include <iostream>
using namespace std;

string CaesarCipher(string s, int k)
{
    string result = s;
    for (auto &c : result)
    {
        if (isalpha(c))
        {
            if (islower(c))
            {
                c = 'a' + (c - 'a' + k) % 26;
            }
            else if (isupper(c))
            {
                c = 'A' + (c = 'A' + k) % 26;
            }
        }
    }
    return result;
}

int main()
{
    string s = "pavan";
    int k = 6;
    cout << CaesarCipher(s, k);

    return 0;
}