#include<bits/stdc++.h>
using namespace std;
class customer                                                                              ///main class
{
public:
    string cname,cpass,cnum,cdate;
    int cbal,cbalan,with;
};
class cur_acct : public customer                                                            /// current class for current account
{
    public:
    void signup()
    {
        cout<<"Please insert below data's"<<endl;
        cout<<"User name - ";
        cin>>cname;
        cout<<"Password - ";
        cin>>cpass;
        cout<<"Mobile number - ";
        cin>>cnum;
        cout<<"Input balance to your acoount - ";
        cin>>cbalan;
        cout<<"example 2022"<<endl;
        cout<<"Year of money input - ";
        cin>>cdate;

    }
    void deposit()
    {
        cout<<"input your ammount - ";
        cin>>cbal;
        cbalan=cbal+cbalan;
        cout<<"your current balance now -- "<<cbalan<<endl;
    }
    void withdraw()
    {
        cout<<"how much do you want to withdraw -- ";
        cin>>with;
        if(with<=cbalan)
        {
                cbalan=cbalan-with;
                cout<<cbalan;
        }
        else
        {
                cout<<"sorry amount is bigger than current balance"<<endl;
        }
    }
    void penalty()
    {
        cout<<"Our bank has rule that custamers current account minumum ammount will 10000"<<endl;
        cout<<"Below 10000 taka costamer will face penalty of 1000tk dedicated"<<endl;
        if(cbalan>10000)
        {
            cout<<"your balance after the penalty is -- "<<cbalan-1000<<endl;
        }
        else
        {
            cout<<"NO penalty charge"<<endl;
        }

    }

};
class sav_acct : public customer                                                        /// saving class for saving accoount
{
public:
    void signup()
    {
        cout<<"Please insert below data's"<<endl;
        cout<<"User name - ";
        cin>>cname;
        cout<<"Password - ";
        cin>>cpass;
        cout<<"Mobile number - ";
        cin>>cnum;
        cout<<"Input balance to your acoount - ";
        cin>>cbalan;
         cout<<"example 2022"<<endl;
        cout<<"Year of money input - ";
        cin>>cdate;

    }
    void deposit()
    {
        cout<<"input your ammount - ";
        cin>>cbal;
        cbalan=cbal+cbalan;
        cout<<"your current balance now -- "<<cbalan<<endl;
    }
    void withdraw()
    {
        cout<<"how much do you want to withdraw -- ";
        cin>>with;
        if(with<=cbalan)
        {
                cbalan=cbalan-with;
                cout<<cbalan;
        }
        else
        {
                cout<<"sorry amount is bigger than current balance"<<endl;
        }
    }
    void interest()
    {
        cout<<"ON our company standard we will give 10% interest to your account"<<endl;
        cout<<"after the interest you balance will be -- "<<(cbalan*0.1)+cbalan<<endl;
    }
};
int main()
{
    cur_acct cacc[100];
    sav_acct sacc[100];
    int key1,key2,i=0,m;
    bool fname,fpass;                                       ///flag for pass and name both check
    while(1)
    {
        cout<<"WELCOME"<<endl;
        cout<<"1-LOG IN "<<endl;
        cout<<"2-SIGN UP "<<endl;
        cout<<"3-EXIT "<<endl;
        cout<<"ENTER KEY - ";
        cin>>key1;
        if(key1==1)
        {
           string name,pass;
           cout<<"enter the following data"<<endl;
           cout<<"Username - ";
           cin>>name;
           cout<<"Password - ";
           cin>>pass;
           fname = false;
           fpass = false;
           for(int j=0;j<100;j++)                                               ///searching for username and password
           {
               if(cacc[j].cname==name)
               {
                   fname = true;
               }
               if(cacc[j].cpass==pass)
               {
                   fpass = true;
               }
                if(fname && fpass)
                {
                   m=j;
                   break;
                }


           }
           if(fname && fpass)
           {

                while(1)
                {


                    cout<<"welcome to your current account"<<endl;
                cout<<"1 - Deposit balance"<<endl;
                cout<<"2 - Display balance"<<endl;
                 cout<<"3 - permit withdraw"<<endl;
                cout<<"4 - Penalty check"<<endl;
                cout<<"5 - EXIT"<<endl;

                cout<<"ENTER KEY - ";
                cin>>key2;
                if(key2==1)
                {
                    cacc[m].deposit();
                }
                else if(key2==2)
                {
                    cout<<"your current balance -- ";
                    cout<<cacc[m].cbalan<<endl;
                }
                else if(key2==3)
                {
                     cacc[m].withdraw();
                }
                else if(key2==4)
                {
                     cacc[m].penalty();
                }
                else
                {
                    break;
                }
                }



           }
           else
           {
                fname = false;                                                                          ///searching for saving account username and pass
                fpass = false;
               for(int j=0;j<100;j++)
                {
               if(sacc[j].cname==name)
               {
                   fname = true;
               }
               if(sacc[j].cpass==pass)
               {
                   fpass = true;
               }


                }
            if(fname && fpass)
                {

                cout<<"welcome to your saving account";
                cout<<"1 - Deposit balance"<<endl;
                cout<<"2 - Display balance"<<endl;
                 cout<<"3 - Interest"<<endl;
                cout<<"4 - permit withdraw"<<endl;
                cout<<"5 - EXIT"<<endl;

                cout<<"ENTER KEY - ";
                cin>>key2;
                if(key2==1)
                {
                    sacc[m].deposit();
                }
                else if(key2==2)
                {
                    cout<<"your current balance -- ";
                    cout<<sacc[m].cbalan<<endl;
                }
                else if(key2==3)
                {
                     sacc[m].interest();
                }
                else if(key2==4)
                {
                     sacc[m].withdraw();
                }
                else
                {
                    break;
                }

                }

           }

        }
        else if(key1==2)                                                                /// for sign up
        {
            cout<<"What type of account do you want to create?"<<endl;
            cout<<"1-Current account"<<endl;
            cout<<"2-Saving account"<<endl;
            cout<<"ENTER KEY - ";
            cin>>key2;
            if(key2==1)
            {
                cacc[i].signup();
                i++;
            }
            else if(key2==2)
            {
                sacc[i].signup();
                i++;
            }
        }
        else
        {
            break;
        }


    }
}


