#ifndef CONTACT_H
#define CONTACT_H
#include<PhoneNumber.h>
#include<string>
#include<iostream>
using namespace std;
class Contact
{
    public:
        Contact();
        virtual ~Contact();

        void user();
        int search1();
        void show();



    private:
        string id,name,city,email;
        PhoneNumber b;

};

#endif // CONTACT_H
