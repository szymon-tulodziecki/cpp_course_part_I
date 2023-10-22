#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> studentMarks;
    
    cout << "Enter the mark (paste '-1' tu stop): " << endl;

    int mark;
    while(cin >> mark)
    {
        if(mark == -1) break;

        studentMarks.push_back(mark);
    }    

    double average = 0.0;
    if(!studentMarks.empty())
    {
    int sum = 0;
        for(int i = 0; i < studentMarks.size(); i++)
        {
            sum += studentMarks[i];
        }
    average = static_cast<double>(sum) /(studentMarks.size());
    }
   

    for(int i = 0; i < studentMarks.size(); i++)
    {
        cout << studentMarks[i] << " | ";
    }
    cout << endl;
    cout << "Average: " << average;

    return 0;
}