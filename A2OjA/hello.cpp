#include<bits/stdc++.h>
using namespace std;

int main()
{
     // Creation of ofstream class object
    ofstream fout;
 
    string line;
 
    // by default ios::out mode, automatically deletes
    // the content of file. To append the content, open in ios:app
    // fout.open("sample.txt", ios::app)
    fout.open("sample.txt");
 
    // Execute a loop If file successfully opened
    while (fout) {
 
        // Read a Line from standard input
        getline(cin, line);
 
        // Press -1 to exit
        if (line == "-1")
            break;
 
        // Write line in file
        fout << line << endl;
    }
    fout.close();

    ifstream fin;
    fin.open("sample.txt");
    while(getline(fin,line))
    {
        cout<<line<<endl;
    }
    fin.close();


}