#include <iostream>
#include <string>
using namespace std;

bool checkEqual(int a[26], int b[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }
    return true;
}

bool checkInclusion(string s1, string s2)
{

    if (s1.length() > s2.length())
    {
        return false;
    }

    // characteer count array for s1
    int count1[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] = 'a';
        count1[index]++;
    }

    // traverse s2 in a window of size s1.length() and compare
    int count2[26] = {0};
    int windowSize = s1.length();

    for (int i = 0; i < windowSize; i++)
    {
        int index = s2[i] - 'a';
        count2[index]++;
    }

    // check for first window
    if (checkEqual(count1, count2))
    {
        return true;
    }

    // process the remaining window / slide the window
    for (int i = windowSize; i < s2.length(); i++)
    {
        char newChar = s2[i];
        int newIndex = newChar - 'a';
        count2[newIndex]++;

        char oldChar = s2[i - windowSize];
        int oldIndex = oldChar - 'a';
        count2[oldIndex]--;

        if (checkEqual(count1, count2))
        {
            return true;
        }
    }

    return false;
}