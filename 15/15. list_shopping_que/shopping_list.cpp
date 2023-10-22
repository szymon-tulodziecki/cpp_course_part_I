#include <iostream>
#include <list>

using namespace std;

struct que
{
 int client_nr;
 string imie;
};

int main()
{
    list<que> data;

    string im;
    int clt_nr;
    char where;

    cout << "Enter F-front /E-end / Q- to quit, Client number and name: " << endl;
    while(where != 'Q')
    {
        cout << "-> ";
        cin >> where >> clt_nr >> im;

        if(where == 'F')
        {
            data.push_front({clt_nr, im});
        }
        else if(where == 'E')
        {
            data.push_back({clt_nr, im});
        }
        else if(where == 'Q')
        {
            break;
        }
       
    }
    cout << endl;

   int i = 1;
   for(const auto& dt : data)
   {
    
     cout << i << ". (" << dt.client_nr << ") " << dt.imie << endl;
     i++;
   }


    return 0;
}