#include <string>

#ifndef CASEINSENSITIVE_H
#define CASEINSENSITIVE_H

using namespace std;


class CaseInsensitive
{
    public:
        CaseInsensitive();
        virtual ~CaseInsensitive();
        void insertion_sort(string pass[], int N);
        void bubble_sort(string pass[], int N);
    protected:
    private:
};

#endif // CASEINSENSITIVE_H
