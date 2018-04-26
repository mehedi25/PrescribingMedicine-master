#include<bits/stdc++.h>
using namespace std;

int press,address;
int age,serial,num;
string name,gender,first_letter;
string nam[100];
string does[100];
string tim[100];
string arr[10]= {"Name: Mehedi\tAge: 23\tGender: M\tSerial: 1\n\n",
                 "Name: Sohel\tAge: 22\tGender: M\tSerial: 2\n\n",
                 "Name: Shakila\tAge: 21\tGender: F\tSerial: 3\n\n",
                 "Name: Adiba\tAge: 20\tGender: F\tSerial: 4\n\n",
                 "Name: Shayan\tAge: 24\tGender: M\tSerial: 5\n\n",
                 "Name: Zahed\tAge: 22\t\tGender: M\tSerial: 6\n\n",
                 "Name: Sumon\tAge: 24\t\tGender: M\tSerial: 7\n\n",
                 "Name: Taskin\tAge: 23\t\tGender: M\tSerial: 8\n\n",
                 "Name: Mukta\tAge: 19\t\tGender: F\tSerial: 9\n\n",
                 "Name: Muniya\tAge: 25\t\tGender: F\tSerial:10\n\n"
                };

string drug[100]= {"Acetaminophen","Adderall","Alprazolam","Amitriptyline","Amlodipine",
                   "Amoxicillin","Ativan","Atorvastatin","Azithromycin","Ciprofloxacin",
                   "Citalopram","Clindamycin","Clonazepam","Codeine","Cyclobenzaprine",
                   "Cymbalta","Doxycycline","Gabapentin","Hydrochlorothiazide","Ibuprofen",
                   "Lexapro","Lisinopril","Loratadine","Lorazepam","Losartan",
                   "Lyrica","Meloxicam","Metformin","Metoprolol","Naproxen",
                   "Omeprazole","Oxycodone","Pantoprazole","Prednisone","Tramadol",
                   "Trazodone","Viagra","Wellbutrin","Xanax","Zoloft"
                  };
void input_Item()
{
    cout<<"Change Item: ";
    cin>>num;
    cout<<endl;
    for(int j=0; j<num; j++)
    {
        cout<<"drug Name:::: ";
        cin>>nam[j];
        cout<<endl;
        cout<<"does:::: ";
        cin>>does[j];
        cout<<endl;
        cout<<"Eating time:::: ";
        cin>>tim[j];
        cout<<endl;
    }
    cout<<"\n\t"<<"Name: "<<arr[serial-1];
    for(int j=0; j<num; j++)
    {
        cout<<"\n\tdrug: "<<nam[j]<<"\tDoes: "<<does[j]<<"\tTime: "<<tim[j]<<endl<<endl;
    }
    cout<<endl<<"\t***** Confirm Prescription *****"<<endl<<endl;
}
void ok()
{
    cout<<endl<<endl<<"\t\t"<<arr[serial-1]<<endl<<endl;
    cout<<"drug Name: Napa_Extra\n\n\t\t1+0+1 after eating\n\n";
    cout<<"drug Name: Losectil\n\n\t\t1+0+0 before eating\n\n";
    cout<<"drug Name: Codeine\n\n\t\t1+0+1 sunday+friday after eating\n\n";
    cout<<"drug Name: Viagra\n\n\t\t1+0+1 only 1 in every month\n\n";
    cout<<"\t\t\t\t***** OK *****"<<endl;
}
void change()
{
    cout<<"\n\n\t\t****** Change your Modication *****"<<endl<<endl;
    cout<<"Change Item: ";
    cin>>num;
    cout<<endl;
    for(int j=0; j<num; j++)
    {
        cout<<"drug Name: ";
        cin>>nam[j];
        cout<<endl;
        cout<<"does: ";
        cin>>does[j];
        cout<<endl;
        cout<<"Eating time: ";
        cin>>tim[j];
        cout<<endl;
    }
    cout<<"\n\t"<<"Name: "<<arr[serial-1];
    for(int j=0; j<num; j++)
    {
        cout<<"\n\tdrug: "<<nam[j]<<"\tDoes: "<<does[j]<<"\tTime: "<<tim[j]<<endl<<endl;
    }
    cout<<endl<<"\t\t\t\t***** Confirm Prescription *****"<<endl<<endl;
}


