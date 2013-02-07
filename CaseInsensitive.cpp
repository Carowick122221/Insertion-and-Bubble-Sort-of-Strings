#include <string>
#include <iostream>
#include <cstring>

#include "CaseInsensitive.h"

using namespace std;

CaseInsensitive::CaseInsensitive()
{
    //ctor
}

CaseInsensitive::~CaseInsensitive()
{
    //dtor
}

void CaseInsensitive::insertion_sort(string pass[], int N)
{
    CaseInsensitive CIsort;
    string key="0";
    int i=0, j=0;

   for(i=0;i<N;i++)
    {
        key=pass[i];
        j=i-1;

    for (j = i-1; j >=0 && _strcmpi(pass[j].c_str(), key.c_str()) > 0; j--)
        {
            pass[j+1]=pass[j];
        }
            pass[j+1]=key;
    }
}

void CaseInsensitive::bubble_sort(string pass[], int N)
{

    string key = "0";
    int i=0, j=0;

    for( i = 0; i < N; i++)
		{
			for( j = 0; j < (N-1); j++)
				   if (_strcmpi(pass[j].c_str(), pass[j+1].c_str()) > 0)
                    {
                        key = pass[j];
                        pass[j] = pass[j+1];
                        pass[j+1] = key;
                    }
		}
}

