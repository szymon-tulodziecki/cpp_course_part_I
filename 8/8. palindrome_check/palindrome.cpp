#include <iostream>
#include <algorithm>
#include <string>
#include <windows.h>

using namespace std;

string text, inverted_text;
int text_lenght;

int main()
{
do {    //main loop which give another chance, when the text is not the palindrome

do {    //second loop wchich work, when the anwser is empty
cout<<"Enter the text to check if it is a palindrome: ";
getline(cin, text);

if(text.empty())
{
system("cls");
cout<<"The given text is empty. Please enter the text again."<<endl;
}
} while(text.empty());

transform(text.begin(), text.end(), text.begin(),::tolower);
text_lenght = text.length();

for (int i = text_lenght-1; i>=0; i--)   //text inverting in loop
{
inverted_text += text[i];
}

if (inverted_text == text)
{
cout<<"The given text is a palindrome!";
}
else if (inverted_text != text)
{
system("cls");
cout<<"The given text is not a palindrome! Try again!"<<endl;
}

} while (inverted_text != text);
return 0;
}


