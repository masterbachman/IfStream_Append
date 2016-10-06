#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in1, in2;
    ofstream a;
   
    in1.open("file1");
    if (in1.fail()) return 1;
    
    in2.open("file2");
    if (in2.fail()) return 2;
   
    a.open("file3");
    if (a.fail()) return 3;

    string line;

    getline(in1, line);
    while (!in1.eof())
    {
        a << line << endl;
        getline(in1, line);
    }
    
    getline(in2, line);
    while (!in2.eof())
    {
        a << line << endl;
        getline(in2, line);
    }
   
    in1.close();
    in2.close();
    a.close();
}
