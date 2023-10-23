#include<iostream>
#include<iomanip>
using namespace std;

int pborder=5,eborder=22,id=7,pno=12,eno=16;
struct emergency_contact
{
	string FEmergency_contact,LEmergency_Contact,Emergency_telephone;
};
struct address
{
	string woreda,kebele,house_no;
	emergency_contact er;
};

struct Residance_id
{	
	string gender, FName, Lname, date, month, year,personal_telephone;
	address add;
};

Residance_id person[3];

void info ();
void address();
void emergency_contact();
void fin();
void otp();

int main()
{	
	system ("color f0");
	info();
	system("cls");
	emergency_contact();
	system("cls");
	address();
	system("cls");
	fin();
	otp();
	return 0;
}

void info()
{
	cout<<"\t\tPersonal Information \n";
	cout<<"Fill the forum given below\n";
	for(int i=0;i<3; i++)
	{
	cout<<"Enter fullname: ";
	cin>>person[i].FName>>person[i].Lname;
	cout<<"Enter "<<person[i].FName<<"'s phone number (if you dont have any enter 0.):";
	cin>>person[i].personal_telephone;
	cout<<"Enter Date, month and year of birth of "<<person[i].FName<<"'s respectively: ";
	cin>>person[i].date>>person[i].month>>person[i].year;
	cout<<"Enter "<<person[i].FName<<"'s gender (M or F): ";
	cin>>person[i].gender;
	}	
}

void emergency_contact()
{	
	cout<<"\tFill the forum given below for your emergency contact\n";
	for(int i=0;i<3;i++)
	{
		cout<<"Enter Fullname of "<<person[i].FName<<"'s emergency contact: ";
		cin>>person[i].add.er.FEmergency_contact>>person[i].add.er.LEmergency_Contact;
		cout<<"Enter "<<person[i].FName<<"'s  emergency contacts' phone number (if you dont have any enter 0.): ";
		cin>>person[i].add.er.Emergency_telephone;
	}
}

void address()
{
	for(int i=0;i<3; i++)
	{
		cout<<"\tFill in address of\n";
		cout<<"Enter woreda of "<<person[i].FName<<" : ";
		cin>>person[i].add.woreda;
		cout<<"Enter your kebele of "<<person[i].FName<<" : ";
		cin>>person[i].add.kebele;
		cout<<"Enter house number of "<<person[i].FName<<" : ";
		cin>>person[i].add.house_no;
	}		
}

void fin()
{
	//border
	for(int i=0;i<3;i++)
	{
		if(person[i].add.er.FEmergency_Contact.length()+person[i].add.er.LEmergency_Contact.length()>=eborder)
		{
			eborder=pborder+person[i].add.er.FEmergency_Contact.length()+person[i].add.er.LEmergency_Contact.length();
		}
	}
	
	for(int i=0;i<3;i++)
		{
			if(person[i].FName.length()+person[i].Lname.length()>=pborder)
			{
				pborder=person[i].FName.length()+person[i].Lname.length()+2;
			}
		}
		
	for(int i=0;i<3;i++)
	{
		id=person[i].add.woreda.length()+person[i].add.kebele.length()+id;
	}
			
	for(int i=0;i<3;i++)
		{
			if(pno<=person[i].personal_telephone.length())
			{
				pno=person[i].personal_telephone.length();
			}
		}
		
	for(int i=0;i<3;i++)
		{
			if(eno<=person[i].add.er.Emergency_telephone.length())
			{
				eno=person[i].add.er.Emergency_telephone.length();
			}
		}
		
	cout<<"\t\t\tPersonal Residence Id and Individual Information.\n\n";
	
	//top line
	cout<<"+";
	for(int k=1;k<pborder;k++)
	cout<<"-";
	cout<<"+";
	for(int k=1;k<id+1;k++)
	cout<<"-";
	cout<<"+";
	for(int k=1;k<=pno;k++)
	cout<<"-";
	cout<<"+";
	for(int k=1;k<4;k++)
	cout<<"-";
	cout<<"+";
	for(int k=1;k<14;k++)
	cout<<"-";
	cout<<"+";
	for(int k=1;k<eborder+1;k++)
	cout<<"-";
	cout<<"+";
	for(int k=1;k<=eno;k++)
	cout<<"-";
	cout<<"+";
	cout<<endl;
	
	cout<<left<<setw(pborder)<<"|Name"<<setw(id+1)<<"|ID Number "<<setw(pno)<<"|Phone Number"<<setw(4)<<"|Sex"<<setw(14)<<"|Date of Birth"
	<<setw(eborder)<<"|Emergency Contact Name"<<setw(eno)<<"|Emergency Number"<<"|"<<endl;
		
	for(int i=0;i<3;i++)
	{
	
	//between 	 
	cout<<"+";
	for(int k=1;k<pborder;k++)
	cout<<"-";
	cout<<"+";
	for(int k=1;k<id+1;k++)
	cout<<"-";
	cout<<"+";
	for(int k=1;k<=pno;k++)
	cout<<"-";
	cout<<"+";
	for(int k=1;k<4;k++)
	cout<<"-";
	cout<<"+";
	for(int k=1;k<14;k++)
	cout<<"-";
	cout<<"+";
	for(int k=1;k<eborder+1;k++)
	cout<<"-";
	cout<<"+";
	for(int k=1;k<=eno;k++)
	cout<<"-";
	cout<<"+";
	cout<<endl;
	
	cout<<left<<setw(pborder)<<"|"+person[i].FName+" "+person[i].Lname<<"|"
		<<setw(id)<<"AA/W/"+person[i].add.woreda+"/"+person[i].add.kebele+"/22"<<"|"
		<<setw(pno)<<person[i].personal_telephone<<"|"
		<<setw(3)<<person[i].gender<<"|"
		<<setw(13)<<person[i].date+"/"+person[i].month+"/"+person[i].year<<"|"
		<<setw(eborder)<<person[i].add.er.FEmergency_Contact+" "+person[i].add.er.LEmergency_Contact<<"|"
		<<setw(eno)<<person[i].add.er.Emergency_telephone	
		<<"|"<<endl;	
	}
	
	//bottom line
	cout<<"+";
	for(int k=1;k<pborder;k++)
	cout<<"-";
	cout<<"+";
	for(int k=1;k<id+1;k++)
	cout<<"-";
	cout<<"+";
	for(int k=1;k<=pno;k++)
	cout<<"-";
	cout<<"+";
	for(int k=1;k<4;k++)
	cout<<"-";
	cout<<"+";
	for(int k=1;k<14;k++)
	cout<<"-";
	cout<<"+";
	for(int k=1;k<eborder+1;k++)
	cout<<"-";
	cout<<"+";
	for(int k=1;k<=eno;k++)
	cout<<"-";
	cout<<"+";
	cout<<endl;	
}

void otp()
{
	int x,y;
	cout<<"The above data is only for the kebele if you want to print your data press 1.";
	cin>>x;
	if(x==1)
	{
		system("cls");
		cout<<"Press 1 for "<<person[0].FName<<"'s official id.\n"
			<<"Press 2 for "<<person[1].FName<<"'s official id.\n"
			<<"Press 3 for "<<person[2].FName<<"'s official id.\n";
		cin>>y;
		if(y==1||y==2||y==3)
		{
			system("cls");
			cout<<"\t\tRESIDENCE ID CARD";
			cout<<"\n\tAddis Abeba City Resident Id Card";
			cout<<"\nId Number: AA/W/"<<person[y].add.woreda<<"/"<<person[y].add.house_no<<"/22";
			cout<<"\nFull Name: "<<person[y].FName<<" "<<person[y].Lname;
			cout<<"\nDate of birth: "<<person[y].date<<"/"<<person[y].month<<"/"<<person[y].year;
			cout<<"\nSex: "<<person[y].gender;
			cout<<"\nPhone Number: "<<person[y].personal_telephone;
			cout<<"\nIssued Date: 04/06/2022";
			cout<<"\nExpiry Date: 04/06/2025";
			cout<<"\n\tEmergency Contact Info";
			cout<<"\nName: "<<person[y].add.er.FEmergency_Contact<<" "<<person[y].add.er.LEmergency_Contact;
			cout<<"\nPhone No. : "<<person[y].add.er.Emergency_telephone;
		}
	}
}
	


