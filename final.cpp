#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
using namespace std;
class medicine
{
	
public :
	int select;
	 
			char ch;
	
	ifstream fin;
void
 display()
{

	start:
	        
	cout<<"                                                                          \n ";	
cout<<"*~*~*~*~*~*~*~*~*~* MEDICINE MANAGEMENT SYSTEM OF VARANASI  *~*~*~*~*~*~*~*~*~*\n\n ";	
cout<<"                                                                              \n ";



cout<<"\n1--Famous medical shops in the city";
cout<<"\n\n2--Famous Hospital in the city";
cout<<"\n\n3--Normally Diseases";
cout<<"\n\n4--Most use medicine with mrp";
cout<<"\n\n5--Out of stock going medicine with mrp";
cout<<"\n\n\nEnter the option you want to check=";
cin>>select;
system("cls");


switch(select)
{
    case 1:
        fin.open("shops.txt");
        ch=fin.get();
        while(!fin.eof())
        {
            cout<<ch;
            ch=fin.get();
        }
        fin.close();
        break;
        case 2:
        fin.open("hospitals.txt");
        ch=fin.get();
        while(!fin.eof())
        {
            cout<<ch;
            ch=fin.get();
        }
        fin.close();
        break;
        case 3:
            fin.open("Diseases.txt");
            ch=fin.get();
            while(!fin.eof())
            {
                cout<<ch;
                ch=fin.get();
            }
            fin.close();
            break;
            case 4:
                fin.open("max selling medicine.txt");
                ch=fin.get();
                while(!fin.eof())
                {
                    cout<<ch;
                    ch=fin.get();
                }
                fin.close();
                break;
                case 5:
                    fin.open("out of stock medicine.txt");
                    ch=fin.get();
                while(!fin.eof())
                {
                    cout<<ch;
                    ch=fin.get();
                }
                fin.close();
                break;
                
                
                
                default:
                    cout<<"Invalid option selected";
    }	
    
    cout<<"\n\n\n\n to again go through option press 1 and to exit press 0=";
    int g;
    cin>>g;
    system("cls");
    if(g==1)
    {
        goto start;
    }
    else
    {
        if(g==0)
        {
            exit(0);
        }
        else
        {
            cout<<"Invalid No data to show";
        }
    }
        }
};
int main()
{
    medicine c1;
    c1.display();
    return 0;
}
