#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<int, string> myMap;

    string txt = "";
    int i = 1;
    
    cout << "   Shopping List  " << endl;
    cout << "------------------" << endl;
    
    while (txt != "stop")
    {
        cout << "Add: " << i << ". product or paste 'stop' to stop: ";
        getline(cin, txt);

        if (txt != "stop")
        {
            myMap.insert(make_pair(i, txt));
            i++;
        }
    }
    
    cout << endl;
    cout << "Your Shopping List: " << endl;
    cout << "--------------------" << endl;
    
    for (const auto& pair : myMap)
    {
        cout << pair.first << ". " << pair.second << endl;
    }
    
    return 0;
}