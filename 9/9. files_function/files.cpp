#include <iostream>
#include <fstream>

using namespace std;
string readFile(string file)
{
    fstream fileHelper;
    fileHelper.open(file, ios::in);
    if(fileHelper.good() == false)
    {
        cout<<"Something went wrong...";
    }
    string line, content;
    while(getline(fileHelper, line))
    {
        content += line + "\n";
    }
    return content;
}
int countLines(string file)
{
    fstream fileHelper;
    fileHelper.open(file, ios::in);
    if(fileHelper.good() == false)
    {
        cout<<"Something went wrong...";
        return -1;
    }

    int count = 0;
    string line;
    while (getline(fileHelper, line))
    {
        count++;
    }
    return count;
    
}
int main()
{   string file_name;
    cout <<"Enter name of the file: ";
    cin >>file_name;
    file_name = file_name + ".txt";

    cout<<readFile(file_name)<<endl;
    cout<<"Number of lines: "<<countLines(file_name);
}