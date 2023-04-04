#include "ContactBook.h"
#include<PhoneNumber.h>
ContactBook::ContactBook()
{
    //ctor
}

ContactBook::~ContactBook()
{
    //dtor
}

        void ContactBook::adduser()
        {
            do
                {
                    z[count1].user();
                    count1++;
                    cout<<"-------------------------"<<endl;
                    cout<<"want add another ?"<<"y/n"<<endl;
                    cout<<"-------------------------"<<endl;
                    cin>>k;
                }while(k!='n');
        }

        void ContactBook::searchuser()
        {
            int x;
            cout<<endl;
            cout<<"find user by  1-phone number OR 2-position : ";
            cin>>x;
            cout<<endl;

            if(x==1)
            {
                int ph;
                cout<<"------------------------"<<endl;
                cout<<"enter the phone number : ";
                cin>>ph;
                cout<<"------------------------"<<endl;
                for(int i=0;i<count1;i++)
                {
                    if(ph==z[i].search1())
                    {
                        z[i].show();
                        break;
                    }
                    else
                    {
                        continue;
                        cout<<"not founded"<<endl;
                    }
                }
            }
            else if(x==2)
            {
                int pos;
                cout<<"-------------------------------"<<endl;
                cout<<"enter the position of the user ";
                cin>>pos;
                cout<<"-------------------------------"<<endl;
                if((pos-1)<=count1)
                {
                    z[pos-1].show();
                }
                else
                {
                    cout<<"not founded"<<endl;
                }
            }
        }
        void ContactBook::deleteuser()
        {
            int deluser;
            cout<<"enter the position of user that you want delete him : ";
            cin>>deluser;
            if((deluser-1)<=count1)
            {
                for(int i = deluser-1;i<count1;i++)
                {
                    z[i]=z[i+1];
                }
                 count1--;

            }
            else
            {
                cout<<"not found"<<endl;
            }
        }
        void ContactBook::showall()
        {
            for(int i=0;i<count1;i++)
            {
                z[i].show();
            }
        }
