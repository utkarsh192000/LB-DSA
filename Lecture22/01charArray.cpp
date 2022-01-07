#include<bits/stdc++.h>
using namespace std;

int main(){

    char name[20];

    cout<<"Enter your Name"<<endl;
    cin>>name;

    name[2]='\0';
    // we have added a NULL character at the 2nd index of name array 
    // now cout while printing would terminate at 2nd index 
    // will only print till 1st index 

    cout<<"Your name is ";
    cout<<name<<endl;


    return 0;
}


/*
=> for example we took Utkarsh as char Array 
 ['U','t','k','a','r','s','h','\0']



*/