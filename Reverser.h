#ifndef REVERSER_H
#define REVERSER_H

#include <string>

class Reverser{
    private:

    public:
        Reverser();
        int reverseDigit(int value);
        std::string reverseString(std::string characters);
        ~Reverser();
};

#endif