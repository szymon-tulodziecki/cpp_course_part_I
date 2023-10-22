#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

bool isPalindrome(string t)
{
    transform(t.begin(), t.end(), t.begin(),::tolower);
    int sizeT = t.length();
    string t_clean, t_reversed;
    for(char c : t)
    {
        if(!ispunct(c))
        {
        t_clean += c;
        } 
    }
    
    int sizeTC = t_clean.length();
    for(int i = sizeTC-1; i>=0; i--)
    {
    t_reversed += t_clean[i];
    }
    return(t_clean == t_reversed);
        
}
    

int main()
{
    string text;
    cout<<"Enter the text: ";
    getline(cin, text);

        if(isPalindrome(text))
        {
            cout<<"The sentence is a palindrome."<<endl;
        }
        else
        {
            cout<<"The sentence is not a palindrome."<<endl;
        }
        
    return 0;
}