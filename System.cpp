#include<iostream>
using namespace std;



struct tokenGenerator
{
    int travel_visa = 0;
    int med_visa = 0;
    int bus_visa = 0;
    int gov_visa= 0;


};


int main()
{
    int exitORrun;
    tokenGenerator t;


    while(exitORrun !='q'){


        cout<<"\t\tWelcome to  Embassy Consulate Service system"<<endl;
        cout<<"\tPlease select one.."<<endl<<endl;
        cout<<"\t1.Travel Visa (TR)"<<endl;
        cout<<"\t2.Medical Visa (MED)"<<endl;
        cout<<"\t3.Business Visa (BS) "<<endl;
        cout<<"\t4.Government Officials Visa (GO) "<<endl;



        int user;
        cin>>user;
        if(user == 1)
        {
            t.travel_visa++;
            cout<<"Token issued.\n";
            cout<<"Token no: TR-"<<t.travel_visa<<endl<<endl;

        }
    }
}

