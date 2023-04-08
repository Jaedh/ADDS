#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H

#include <vector>
#include <math.h>

class RecursiveBinarySearch{
    private:

    public:
        bool search(std::vector<int> list, int n);
        bool searchRec(std::vector<int> list, int n, int left, int right);
};

#endif