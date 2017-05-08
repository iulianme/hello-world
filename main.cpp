#include <iostream>
#include <time.h>
#include <string.h>
#include <cstdlib>

using namespace std;
string question,password;
string pass_letters="aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
string pass_numbers="0123456789";
string pass_symbols="`~!@#$%^&*()_-+={}[]\|:;<>,.?/";
int answer=0, pass_length,sy=0,nu=0;

int main()
{
    cout<<"what will be the length of the password?\n";
    cin>>pass_length;
    if(pass_length>25)
    {
        pass_length=25;
        cout<<"Sorry but the maximum length of this current password is "<<pass_length<<endl;
    }

    cout<<"\nAre Symbols allowed?\n";
    cout<<"\n-YES-for the positive answer\n";
    cout<<"-NO-for the negative answer\n";
    cout<<"-anything else is excluded-\n";
    cout<<"\nYour Answer is?\n";
    cin>>question;

    do
    {

        if(question=="yes"||question=="YES")
        {
            cout<<"Symbols are allowed!\n";
            answer=1;
            sy=1;
        }

        else
        {
            if(question=="no"||question=="NO")
            {
                cout<<"Symbols are not allowed!\n";
                answer=1;
            }

            else
            {
                 cout<<"Enter a correct answer!\n";
                 cin>>question;
            }

        }

    }while(answer!=1);

    cout<<"\nAre Numbers allowed?\n";
    answer=0;
    cin>>question;
    do{
        if(question=="yes"||question=="YES")
        {
            cout<<"Numbers are allowed!\n";
            answer=1;
            nu=1;
        }
        else
            if(question=="no"||question=="NO")
            {
                cout<<"Numbers are not allowed!\n";
                answer=1;
            }
            else
            {
                cout<<"enter a correct answer!\n";
                cin>>question;
            }

    }while(answer!=1);
    cout<<"\nLetters are allowed anyway!\n";

    srand(time(0));
    if(pass_length<=0)
    {
        cout<<"it can't generate a password!";
    }

    else
    {
         cout<<"\nYour password has the following elements:\n";
        if(sy==1)
        {
            if(nu==1)
            {
                cout<<"1.Symbol\n";
                cout<<"2.Number\n";
                cout<<"3.Letter\n";
            }
            else
                {
                    cout<<"1.Symbol\n";
                    cout<<"2.Letter\n";
                }
        }
        else
        {
            if(nu==1)
            {
                {
                    cout<<"1.Number\n";
                    cout<<"2.letter\n";
                }
            }
            else
                cout<<"1.Letter\n";
        }

        cout<<"\nYour password is:\n";
        if((nu==1)&&(sy==1))
        {
            for(int i=1;i<=pass_length/3;i++)
            {
                password=password+pass_symbols[rand()%30+1]+pass_letters[rand()%52+1]+pass_numbers[rand()%10+1];
            }
        }
        else
            if(nu==1)
            {
                for(int i=1;i<=pass_length/2;i++)
                    password=password+pass_letters[rand()%52]+pass_numbers[rand()%10];
            }
            else
            {
                if(sy==1)
                {
                    password=password+pass_letters[rand()%52]+pass_symbols[rand()%30];
                }
                else
                {
                   for(int i=1;i<=pass_length;i++)
                       password=password+pass_letters[rand()%52];
                }

            }

        cout<<password<<endl;
        }

    return 0;
}
