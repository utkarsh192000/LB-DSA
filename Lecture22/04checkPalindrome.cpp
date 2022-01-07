#include <bits/stdc++.h>
using namespace std;



bool checkPalindrome(char name[],int n){
    int low=0;
    int high=n-1;
    while(low<=high){
        if(name[low]!=name[high]){
            return false;
        }
        low++;
        high--;
    }
    return true;
}

int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
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

    int len=getLength(name);
    cout<<"Length : "<<len<<endl;

    cout<<"Is Palindrome: "<<checkPalindrome(name,len)<<endl;


    return 0;
}

/*
=> for example we took Utkarsh as char Array
 ['U','t','k','a','r','s','h','\0']



*/

