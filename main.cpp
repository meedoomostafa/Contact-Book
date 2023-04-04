#include <iostream>
#include<iomanip>
#include<windows.h>
#include<unistd.h>
#include<ContactBook.h>
using namespace std;

int main()
{
    ContactBook a;
    int n;
    char key;
    cout<<setw(60)<<"welcome"<<endl;

   do{

         cout<<"---------------------------"<<endl;
         cout<<" 1- add a new contact \n"<<" 2- delete contact \n"<<" 3- search for a contact \n"<<" 4- display all contacts \n"<<" 5- exit the program "<<endl;
         cout<<"---------------------------"<<endl;

        cout<<setw(69)<<"---------------------------------------------"<<endl;
        cout<<setw(70)<<"enter the num of the progress that you want : ";
        cin>>n;
        cout<<setw(69)<<"---------------------------------------------"<<endl;

        switch(n)
        {
        case 1 :
            a.adduser();
            system("cls");
            break;
        case 2 :
            a.deleteuser();
            system("cls");
            break;
        case 3 :
            a.searchuser();
            break;
        case 4 :
            a.showall();
            break;
        case 5 :
            system("cls");
            break;
        default:
            cout<<" (please enter number of progress from 1 to 5) "<<endl;
            continue;
        }
        cout<<"----------------------------------------"<<endl;
        cout<<" you want to do another progress ? (y/n)"<<endl;
        cout<<"----------------------------------------"<<endl;
        cin>>key;
        if(key == 'y' || key =='Y')
        {
             system("cls");
        }
    }while(key != 'n');
    cout<<setw(60)<<"--------------"<<endl;
    cout<<setw(60)<<" thank you :)"<<endl;
    cout<<setw(60)<<"--------------"<<endl;

    return 0;
}
