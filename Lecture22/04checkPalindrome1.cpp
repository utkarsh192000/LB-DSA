#include <bits/stdc++.h>
using namespace std;

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        // find a difference b/w  ch-'A' which will be distance between ch and capital A 
        // then we will add the distanec to 'a' to find the actual lowercase value 
        return temp;
    }
}

bool checkPalindrome(char name[], int n)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        if (toLowerCase(name[low]) != toLowerCase(name[high]))
        {
            return false;
        }
        low++;
        high--;
    }
    return true;
}

int getLength(char name[])
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

    char name[20];

    cout << "Enter your Name" << endl;
    cin >> name;

    cout << "Your name is ";
    cout << name << endl;

    int len = getLength(name);
    cout << "Length : " << len << endl;

    cout<<toLowerCase('a')<<endl;
    // since it is already in lowercase so as it is would be returned 
    cout<<toLowerCase('A')<<endl;
    // it would be converted in 'a'

    cout << "Is Palindrome: " << checkPalindrome(name, len) << endl;

    return 0;
}



/*
=> for example we took Utkarsh as char Array
 ['U','t','k','a','r','s','h','\0']



*/
