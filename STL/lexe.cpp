#include <bits/stdc++.h>
using namespace std;

// Function to find the new string thus
// formed by removing characters
string newString(string s, int k)
{
    // new string
    string X = "";

    // Remove characters until
    // the string  is empty
    while (s.length() > 0)
    {

        char temp = s[0];

        // Traverse to find the smallest character in the
        // first k characters
        for (long long i = 1; i < k and i < s.length(); i++)
        {
            if (s[i] < temp)
            {
                temp = s[i];
            }
        }

        // append the smallest character
        X = X + temp;

        // removing the lexicographically smallest
        // character from the string
        for (long long i = 0; i < k; i++)
        {
            if (s[i] == temp)
            {

                s.erase(s.begin() + i);
                break;
            }
        }
    }

    return X;
}

// Driver Code
int main()
{

    string s = "gaurang";
    int k = 3;

    cout << newString(s, k);
}