#ifndef CONTACTBOOK_H
#define CONTACTBOOK_H
#include<Contact.h>
#include<string>
#include<iostream>
using namespace std;
class ContactBook
{
    public:
        ContactBook();
        virtual ~ContactBook();
        void adduser();
        void searchuser();
        void deleteuser();
        void showall();
        char k;

    protected:

    private:
        int count1 =0;
        Contact z[100];
};

#endif // CONTACTBOOK_H
