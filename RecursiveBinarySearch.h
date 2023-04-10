#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H

#include <vector>
#include <math.h>

class RecursiveBinarySearch{
    private:
        bool searchRec(std::vector<int> list, int n, int left, int right);
    public:
        bool search(std::vector<int> list, int n);
};

#endif