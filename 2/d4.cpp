/* Write a program to insert string and display total number of 
words of the string*/
#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    char str[50];
    int count = 0, i; 
    cout << "Enter a string : ";
    cin>>str;
    for (i = 0; str[i] != '\0';i++)
    {
        if (str[i] == ' ')
            count++;    
    }
    cout << "Number of words in the string are: " << count + 1;
    return 0;
}
/*Enter a string : drashti patoliya
Number of words in the string are: 2*/