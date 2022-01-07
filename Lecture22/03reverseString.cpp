#include <bits/stdc++.h>
using namespace std;



void reverse(char name[],int n){
    int low=0;
    int high=n-1;
    while(low<=high){
        swap(name[low],name[high]);
        low++;
        high--;
    }
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


    reverse(name,len);
    cout<<"Your name is : "<<name<<endl;


    return 0;
}

/*
=> for example we took Utkarsh as char Array
 ['U','t','k','a','r','s','h','\0']



*/

