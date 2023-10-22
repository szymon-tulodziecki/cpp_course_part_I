#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <cctype>

using namespace std;

string removePunctation()
{   
    string text;
    cout<<"Enter the text to search: ";
    getline(cin, text);
    transform(text.begin(), text.end(), text.begin(),::tolower);    

    string result;
    for(char c : text)
    {
        if(!ispunct(c))
        {
        result += c;
        }
    }
return result;
}
main()
{   
    string text, word;
    
    text = removePunctation();
    cout<<"Enter the word You want to find in it: ";
    cin>>word;
    transform(word.begin(), word.end(), word.begin(),::tolower);


    
    istringstream iss(text);
    string helper;
    int count = 0;
    while(iss >> helper)
    {
        if(helper == word)
        {
            count++;
        }
    }
    cout<<endl<<"The word "<<word<<" occurs "<<count<<" times in given text.";
     
    return 0;
}