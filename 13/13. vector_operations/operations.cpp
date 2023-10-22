#include <iostream>
#include <vector>

using namespace std;

int main()
{   
    vector<int> container;

    cout << "    VECTOR OPERATIONS    " << endl;
    cout << "-------------------------" << endl;
    cout << " Enter values to vector: " << endl;
    
    int num;
    while (cin >> num)
    {   
        container.push_back(num);
    }
    cout << endl;

    cout << "Your vector: " << endl;
    for (int i = 0; i < container.size(); i++)
    {
        cout << container[i] << " | ";
    }
    cout << endl;

    char where;
    cout << "Where do you want to add element? Paste 'f' for front and 'e' for end: ";
    cin.clear(); 
    cin >> where;
    
    int newElement;
    cout << "Paste new element: ";
    cin >> newElement;

    if(where == 'f')
    {
        container.insert(container.begin(), newElement);
    }
    else if(where == 'e')
    {
        container.emplace_back(newElement);
    }
    else
    {
        cout << "Something went wrong!";
    }
    cout << endl;

    cout << "Your vector after operation: ";
    cout << endl;
    for(int i = 0; i < container.size(); i++)
    {
        cout << container[i] << " | ";
    }
    cout << endl;

    cout << "Which element do you want to delete? Paste 'f' ora 'e': ";
    cin.clear(); 

    char deleteElement;
    cin >> deleteElement;

    if(deleteElement == 'f')
    {
        container.erase(container.begin());
    }
    else if(deleteElement == 'e')
    {
        container.erase(container.end());
    }
    else
    {
        cout << "Something went wrong!";
    }
    cout << endl;

    for (int i = 0; i < container.size(); i++)
    {
        cout << container[i] << " | ";
    }
    cout << endl;
    
   


    return 0;
}