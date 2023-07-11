#include<iostream>
#include<string>
using namespace std;

bool is_pall(char str[])//function to check for pallindrome
{
    int len =0;
    while (str[len] != '\0') 
    {
        len++;
    }
    int start=0, end=len-1;
    while(start!=end)
    {
        if(str[start]!=str[end])
        return false;
        break;
    }

 return true;    
}
int main()
{
   const int MAX_SIZE = 100;
    char str[MAX_SIZE];
   cout << "Enter a string: ";
    gets(str);

    is_pall(str);

    cout << str<<" is ";
if(is_pall(str))
cout<<"a Pallindrome"<<endl;
else
cout<<"not a Pallindrome"<<endl;
    return 0;
}
