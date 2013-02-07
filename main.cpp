#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

#include "CaseInsensitive.h"

using namespace std;

int main()
{
    CaseInsensitive CIsort;
    int x = 0, N=100;
    string pass[100];
    string line;
    fstream myfile;
    myfile.open("top_passwords.txt");

    while(myfile.good())
    {
        getline(myfile,line);
        pass[x] = line;
        x++;
    }

    cout<<"----------------------------"<<endl;
    cout<<"     Sorting Passwords      "<< endl;
    cout<<"----------------------------"<<endl;
    cout<<"Using Insertion Sort:" << endl;

    CIsort.insertion_sort(pass,N);

    for(x = 0; x<100; x++)
    {
    cout<<pass[x]<<endl;
    }

    cout<<"\n============================"<<endl;
    cout<<"\nUsing Bubble Sort:" << endl;

    CIsort.bubble_sort(pass,N);

    for(x = 0; x<100; x++)
    {
    cout<<pass[x]<<endl;
    }

    myfile.close();
    return 0;
}
