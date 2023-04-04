#include "Contact.h"
#include<string>
using namespace std;

Contact::Contact()
{
    //ctor
}

Contact::~Contact()
{
    //dtor
}
        void Contact::user()
        {
            cout<<"enter your id : ";
            cin>>id;
            cout<<"enter your city : ";
            cin>>city;
            cout<<"enter your email : ";
            cin>>email;
            cout<<"enter yore name : ";
            cin>>name;
            b.getphone();
        }
        int Contact::search1()
        {
            return b.findph();
        }
        void Contact::show()
        {

            cout<<" id : "<<id<<endl;
            cout<<" name : "<<name<<endl;
            cout<<" email : "<<email<<endl;
            cout<<" city : "<<city<<endl;
            b.showphone();

        }


