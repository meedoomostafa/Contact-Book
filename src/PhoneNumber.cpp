#include "PhoneNumber.h"
#include<windows.h>
PhoneNumber::PhoneNumber()
{
    //ctor
}

PhoneNumber::~PhoneNumber()
{
    //dtor
}

        void PhoneNumber::getphone()
        {
            cout<<"enter your phone number : ";
            cin>>num;
            cout<<"enter the type of your phone ( home/work...) : ";
            cin>>type;
        }
        void PhoneNumber::showphone()
        {
            cout<<"phone number : "<<num<<endl;
            cout<<"type of phone : "<<type<<endl<<endl<<endl;
            cout<<"------------------------------------------";
        }
        int PhoneNumber::findph()
        {
            return num;
        }
