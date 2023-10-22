#include <iostream>
#include <list>

using namespace std;

struct list_name
{
    int index;
    string name;
    string surname;
    int age;
};

void namesInput(list<list_name>& list)
{
    cout << "Name, Surname, Age" << endl;
    cout << "Enter data:" << endl;

    string s, n;
    int a;

    for(int i = 0; i < 5; i++)
    {   
        cin >> n >> s >> a;
        list.push_back({i + 1, n, s, a});
    }
}
int main()
{
    list<list_name> names;

    namesInput(names);

    cout << "Your Data: " << endl;

    for(const auto& person : names)
    {
        cout << person.index << ". " << person.name << " " << person.surname << " " << person.age << endl;
    }

    cout << endl;

    return 0;
}