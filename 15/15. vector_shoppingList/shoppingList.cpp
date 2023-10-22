#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> shoppingList;

    string product;
    
    cout << "Add products on your shopping list: " << endl;
    while(getline(cin, product))
    {   
        cout << "+ ";
        if(product == "quit")
        {
            break;
        }
        shoppingList.push_back(product);
        
    }
    if(cin.eof())
    {
        cout << "End of input reached." << endl;
    }
    else
    {
        cout << "Input error occurred. " << endl;
    }
   
    for(int i = 0; i < shoppingList.size(); i++)
    {
        cout << i + 1 << ". " << shoppingList[i] << endl;
    } 
    
    cout << "Size: " << shoppingList.size() << endl;
    
    return 0;
}