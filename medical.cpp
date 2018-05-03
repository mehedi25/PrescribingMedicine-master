#include<bits/stdc++.h>
using namespace std;

int press,address;
int age,serial,num;
string name,gender,first_letter;
string nam[100];
string does[100];
string tim[100];
string arr[100]= {"Name: Mehedi\tAge: 23\t\tGender: M\tSerial: 1\n\n",
                 "Name: Sohel\tAge: 22\t\tGender: M\tSerial: 2\n\n",
                 "Name: Shakila\tAge: 21\t\tGender: F\tSerial: 3\n\n",
                 "Name: Adiba\tAge: 20\t\tGender: F\tSerial: 4\n\n",
                 "Name: Shayan\tAge: 24\t\tGender: M\tSerial: 5\n\n",
                  "Name: Sohel\tAge: 22\t\tGender: M\tSerial: 2\n\n",
                 "Name: Shakila\tAge: 21\t\tGender: F\tSerial: 3\n\n",
                 "Name: Adiba\tAge: 20\t\tGender: F\tSerial: 4\n\n",
                 "Name: Shayan\tAge: 24\t\tGender: M\tSerial: 5\n\n",
                 "Name: Mehedi\tAge: 22\t\tGender: M\tSerial: 6\n\n",
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
                   "Trazodone","Viagra","Wellbutrin","Xanax","Zoloft","Valium""Acetaminophen"
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
void ok()                                                            // it is previous prescription
{
    cout<<endl<<endl<<"\t\t"<<arr[serial-1]<<endl<<endl;
    cout<<"drug Name: Napa_Extra\n\n\t\t1+0+1 after eating\n\n";
    cout<<"drug Name: Losectil\n\n\t\t1+0+0 before eating\n\n";
    cout<<"drug Name: Codeine\n\n\t\t1+0+1 sunday+friday after eating\n\n";
    cout<<"drug Name: Seclo\n\n\t\t1+0+1 only 1 in every month\n\n";
    cout<<"\t\t\t\t***** OK *****"<<endl;
}
/*void change()
the not need able code section
{
    
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
*/


void searchbox()                              // add seach medicine
{
    cout<<"Enter Drug First Name: ";
    cin>>first_letter;                      // Input Medicine First Letter
    if(first_letter=="A" || "a")            // OPtion check overall medicine for first letter A
    {
        cout<<"\n\t\tAcetaminophen"<<"\n\t\tAdderall"<<"\n\t\tAlprazolam"<<"\n\t\tAmitriptyline"<<"\n\t\tAmlodipine"<<
            "\n\t\tAmoxicillin"<<"\n\t\tAtivan"<<"\n\t\tAtorvastatin"<<"\n\t\tAzithromycin"<<endl;
    }
    else if(first_letter=="C" || "c")     // OPtion check overall medicine for first letter C
    {
        cout<<"\n\t\tCiprofloxacin"<<
            "\n\t\tCitalopram"<<"\n\t\tClindamycin"<<"\n\t\tClonazepam"<<"\n\t\tCodeine"<<"\n\t\tCyclobenzaprine"<<
            "\n\t\tCymbalta"<<endl;       // Show All Medicine which First Letter Is C 
    }
    else if(first_letter=="D" || "d")     // OPtion check overall medicine for first letter D
    {
        cout<<"\n\t\tDoxycycline"<<endl;  //Given Medine Name of Doxycycline, First Letter is D
    }
    else if(first_letter=="G" || "g")
    {
        cout<<"\n\t\tGabapentin"<<endl;
    }

    else if(first_letter=="H" || "h")
    {
        cout<<"\n\t\tHydrochlorothiazide"<<endl;
    }
    else if(first_letter=="I" || "i")
    {
        cout<<"\n\t\tIbuprofen"<<endl;
    }
    else if(first_letter=="L" || "l")
    {
        cout<<"\n\t\tLexapro"<<"\n\t\tLisinopril"<<"\n\t\tLoratadine"<<"\n\t\tLorazepam"<<"\n\t\tLosartan"<<
            "\n\t\tLyrica"<<endl;
    }
    else if(first_letter=="M" || "m")
    {
        cout<<"\n\t\tMeloxicam"<<"\n\t\tMetformin"<<"\n\t\tMetoprolol"<<endl;
    }
    else if(first_letter=="N" || "n")
    {
        cout<<"\n\t\tNaproxen"<<endl;
    }
    else if(first_letter=="O" || "o")
    {
        cout<<"\n\t\tOmeprazole"<<"\n\t\tOxycodone"<<endl;
    }
    else if(first_letter=="P" || "p")
    {
        cout<<"\n\t\tPantoprazole"<<"\n\t\tPrednisone"<<endl;
    }
    else if(first_letter=="T" || "t")
    {
        cout<<"\n\t\tTramadol"<<"\n\t\tTrazodone"<<endl;
    }
    else if(first_letter=="V" || "v")
    {
        cout<<"\n\t\tValium"<<endl;
    }
    else if(first_letter=="W" || "w")
    {
        cout<<"\n\t\tWellbutrin"<<endl;
    }
    else if(first_letter=="X" || "x")
    {
        cout<<"\n\t\tXanax"<<endl;
    }
    else if(first_letter=="Z" || "z")
    {
        cout<<"\n\t\tZoloft"<<endl;
    }
  else                                        // If no medicine then show not available
  {
      cout<<"\n\t\tMedicine is not available"<<endl;  
  }

}
void medistore()
{
    cout<<"Enter Your Serial: ";
    cin>>serial;
    if(serial==1||2||3||4||5||6||7||8||9||10)
    {
        cout<<endl<<"Select Your modication field:\n\n\t\t1.Current Modication     (press 1)\n\t\t2.New Modication         (press 2)\n\t\t3.formulary              (press 3)\n\n"<<endl;
        cout<<"Please! You Have Press: ";
        cin>>press;
        switch(press)
        {
        case 1:
            cout<<endl<<"Modication Your Address:\n\n\t\t1.OK      (press 1)\n\t\t2.Change  (Press 2)"<<endl<<endl;
            cout<<"Data Modification: ";
            cin>>address;
            if(address==1)
            {
                ok();
            }
            else
            {
                cout<<"\n\n\t\t****** Change your Medication *****"<<endl<<endl;
                input_Item();
            }
            break;

        case 2:
            cout<<"\n\n\t\t****** Change your Modication *****"<<endl<<endl;
            
            input_Item();
            break;

        case 3:
       
            cout<<"\n\t\t***** Search Your Drug *****\n"<<endl;
            searchbox();
            break;

        default:                             
            cout<<"You are not patient\n";
            break;
        }
    }
}
int main()
{
    cout<<endl<<"\t\t\t_____ This Is Patient Record _____"<<endl<<endl<<endl;

    for(int i=0; i<10; i++)
    {
        cout<<"\t";
        cout<<arr[i]<<endl;
    }
    cout<<endl<<endl;

    medistore();
}
int main()
{
    cout<<endl<<"\t\t\t_____ This Is Patient Record _____"<<endl<<endl<<endl;

    for(int i=0; i<10; i++)
    {
        cout<<"\t";
        cout<<arr[i]<<endl;
    }
    cout<<endl<<endl;

    medistore();
}
