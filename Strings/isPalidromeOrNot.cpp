#include <bits/stdc++.h>
using namespace std;

// Function to check whether string is Palimdrome or not
bool checkPalindrome(char a[], int n)
{
    int st = 0;
    int en = n - 1;
    while (st <= en)
    {
        if (a[st] != a[en])
        {
            return false;
        }
        else
        {
            st++;
            en--;
        }
    }
    return true;
}

int findLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char ch[10];
    cout << "Enter the name: ";
    cin >> ch;

    int len = findLength(ch);
    cout << "The length of an string is " << len << endl;
    cout << endl;

    cout << "Palidrome or not: " << checkPalindrome(ch, len) << endl;

    return 0;
}