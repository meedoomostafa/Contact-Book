#ifndef PHONENUMBER_H
#define PHONENUMBER_H
#include<string>
#include<iostream>
#include<windows.h>
using namespace std;
class PhoneNumber
{
    public:
        PhoneNumber();
        virtual ~PhoneNumber();

        void getphone();
        void showphone();
        int findph();
    protected:

    private:
        int num;
        string type;
};

#endif // PHONENUMBER_H
