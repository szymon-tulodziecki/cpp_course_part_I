#include <iostream>
#include <list>

using namespace std;

struct student
{
    int index;
    string imie;
    string nazwisko;
    float matematyka;
    float polski;
    float angielski;
    float informatyka;
};
void dodajStudenta(list<student>* st_list)
{

    string im, naz;
    float mat, pol, ang, inf;

    cout << "DODAJ STUDENTA:" << endl;
    cout << "---------------" << endl;
    cout << "Imie / Nazwisko / Matematyka / Polski / Angielski / Informatyka" << endl;

    for(int i = 0; i < 3; i++)
    {
        cout << i + 1 << ". ";
        cin >> im >> naz >> mat >> pol >> ang >> inf;
        st_list->push_back({i + 1, im, naz, mat, pol, ang, inf });
    }
}
void usunStudenta(list<student>& dl_student)
{   
    int del_index;
    
    while(del_index != -1)
    {

        cout << "ENTER STUDENT INDEX WHICH YOU WANT TO DELETE (or paste -1 to stop): ";
        cin >> del_index;

        auto it = dl_student.begin();
        while(it != dl_student.end())
        {
            if(it->index == del_index)
            {
                it = dl_student.erase(it);
                break;
            }
            else
            {
                ++it;
            }
        }
    }
}

void ZnajdzStudenta(const list<student>& f_student )
{
    int f_index;
    cout << "Enter Student INDEX WHICH YOUT WANT TO FIND (or paste -1 to stop): ";
    cin >> f_index;

    while(f_index != -1)
    {
        for(auto it = f_student.begin(); it !=  f_student.end(); it++)
        {
            if(it->index == f_index)
            {
                cout << "Found student: " << it->imie << " " << it->nazwisko << endl;
                break;
            }
        }
        cout << "Enter Student INDEX WHICH YOU WANT TO FIND (or paste -1 to stop): ";
        cin >> f_index;
    }
}
int main()
{   

    list<student> student_list;

    dodajStudenta(&student_list);
    cout << endl;
    cout << "_______________________________________________" << endl;

    for(const auto& st : student_list)
    {
        cout << st.index << ". " << st.imie << " " << st.nazwisko << "\n Matematyka: " << st.matematyka << "\n Polski: " << st.polski << "\n Angielski: " << st.angielski << "\n Informatyka: " << st.informatyka << endl;
        cout << "-------------------------" << endl;
        cout << endl;
    }

    usunStudenta(student_list);
    
    cout << endl;
    cout << "_______________________________________________" << endl;

    for(const auto& st : student_list)
    {
        cout << st.index << ". " << st.imie << " " << st.nazwisko << "\n Matematyka: " << st.matematyka << "\n Polski: " << st.polski << "\n Angielski: " << st.angielski << "\n Informatyka: " << st.informatyka << endl;
        cout << "-------------------------" << endl;
        cout << endl;
    }

    ZnajdzStudenta(student_list);
    return 0;
}