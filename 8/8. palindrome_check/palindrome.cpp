#include <iostream>
#include <algorithm>    //including the <algorithm> library to change case
#include <string>       //including the <string> library to check if the user gave empty text
#include <windows.h>    //including the <windows.h> library to operate the cleaning in console

using namespace std;

string text, inverted_text; 
int text_lenght;    //creating variables to handle the program

int main()
{
do {    //main loop which give another chance, when the text is not the palindrome
    
do {    //second loop wchich work, when the anwser is empty
cout<<"Enter the text to check if it is a palindrome: ";    //getting text from the user
getline(cin, text);

if(text.empty())
{
system("cls");
cout<<"The given text is empty. Please enter the text again."<<endl;
}
} while(text.empty());

transform(text.begin(), text.end(), text.begin(),::tolower);    //changing the case of the downloaded text
text_lenght = text.length();    //text lenght check

for (int i = text_lenght-1; i>=0; i--)   //text inverting in loop
{
inverted_text += text[i];
}

if (inverted_text == text)
{
cout<<"The given text is a palindrome!"; //final result, when the text is a palindrome
}
else if (inverted_text != text)
{
system("cls");
cout<<"The given text is not a palindrome! Try again!"<<endl; 
}

} while (inverted_text != text);
return 0;
}


