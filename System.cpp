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

    cout<<"\t\tWelcome to  Embassy Consulate Service system"<<endl;


    while(exitORrun !='q'){



        cout<<"\tPlease select one.."<<endl<<endl;
        cout<<"\t1.Travel Visa (TR)"<<endl;
        cout<<"\t2.Medical Visa (MED)"<<endl;
        cout<<"\t3.Business Visa (BS) "<<endl;
        cout<<"\t4.Government Officials Visa (GO) "<<endl;
        cout<<"\t-------------------------------------------\n\n";



        int user;
        cout<<">>> ";cin>>user;
        if(user == 1)
        {
            t.travel_visa++;
            if(t.travel_visa<=25){

                    cout<<"----------------------------------------\n\n";
                    cout<<"|\tTravel Token issued.\n";
                    cout<<"|\tToken no: TR-"<<t.travel_visa<<endl<<endl;
                    cout<<"-----------------------------------------\n\n";

            }else
            {
                cout<<"\tsorry, Quota full\n\n";
            }

        }

        if(user == 2)
        {
            t.med_visa++;
            if(t.med_visa <=2){
                cout<<"----------------------------------------\n\n";
                cout<<"\tMedical Token issued.\n";
                cout<<"\tToken no: MED-"<<t.med_visa<<endl<<endl;
                cout<<"----------------------------------------\n\n";
            }
                else{ cout<<"\tSorry, Quota full.\n\n";}
        }

        if(user == 3){cout<<"\tSorry Business visa quota is currently full\n\n";}

        if(user == 4){cout<<"\tSorry Gov. visa quota is currently full\n\n";}



    }
}

