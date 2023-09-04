#include<iostream>
#include<fstream>
#include<string.h>
#include<conio.h>
#include<unistd.h>
#include<windows.h>
using namespace std;
void details(){
	cout<<"Hospital details"<<endl;
	cout<<"Hospital is a place where the sick and the injured are taken for treatment."<<endl;
    cout<<"The doctors and nurses are readily available there for admitting and attending."<<endl;
    cout<<"on their patients.The dedicated team of doctors and nurses delivers the message"<<endl;
	cout<<"of hope to their patients in the hospitals.All over the world,hospitals are built"<<endl;
	cout<<"to treat and cure thousands of the sick patients.As these hospitals,there are very"<<endl;
	cout<<"well-equipped facilities and expert doctors.These hospitals are considered the best"<<endl;
	cout<<"place for effective treatment.The doctor and nurses do their work with a dedication"<<endl;
	cout<<"and maintain the pleasant atmosphere of the hospitals so that the patient feel comfortable and better"<<endl;
	cout<<endl;
}
void app(){
	ofstream MyFile("PatientDetails.txt",ios::in|ios::out|ios::app);
	string fname, lname, pprob,padd;
	int page,ppay,ch,doc ;
	double pnum, pay;
	cout<<endl;
            

	cout<<"Patient Appointment"<<endl;
	cout<<"Enter your credentials"<<endl;
	cout<<"Enter your first name:"<<endl;
    cin>>fname;
    cout<<"Enter your last name:"<<endl;
    cin>>lname;
	cout<<"Enter your number:"<<endl;
	cin>>pnum;
	
	cout<<"Enter your age:"<<endl;
	cin>>page;
	cout<<"Enter the problem for which you want the consultation(1/2/3/4)"<<endl;
    cout<<" 1.Dr.Maryam Khan/ Gynaecologist"<<endl;
	cout<<" 2.Dr.Abdulllah/  Eye specialist"<<endl;
	cout<<" 3.Dr.Tariq/    Heart specialist"<<endl;
	cout<<" 4.Dr.Uzma/    Kidney specialist"<<endl;
	cout<<" 5.Dr.Ali/Neurologist specialist"<<endl;
    cin>>doc;
    
	   if(doc==1){
	
	
			cout<<"Your appointment is confirmed with Dr.Maryam"<<endl;}
		
		  else if(doc==2){
		
			cout<<"Your appointment is confirmed with Dr.Abdullah"<<endl;}
			
		   else if(doc==3){
			
	
			cout<<"Your appointment is confirmed with Dr.Tariq"<<endl;}
			
			else if(doc==4){
			
		
			cout<<"Your appointment is confirmed with Dr.Uzma"<<endl;}
			
			else if(doc==5){
				
			cout<<"Your appointment is confirmed with Dr.Ali"<<endl;}
			
			else{
				cout<<"Invalid Input"<<endl;
			}
			
	     
        MyFile <<"Patient Name :"<< fname << lname << "," << "Mobile Number : " << pnum  << "," << "Age : " <<page << "," << "Assigned Doctor : " << doc <<endl;
       
         
}


int main(){
		ofstream MyFile("PatientDetails.txt",ios::in|ios::out|ios::app);	
			string fname, lname, pprob,padd;
	int page,ppay,ch,doc ;
	double pnum, pay;
	
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout<<"\t\t\t\t\t@@ ___________ @@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                  WELCOME TO                                           |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                           HOSPITAL MANAGEMENT SYSTEM                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|___________|@@\n";
cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
system("pause");


	do {
	
	cout<<"Enter from one of the choices given"<<endl;
	cout<<"1.Hospital Details"<<endl;
	cout<<"2.Patient appointment"<<endl;
	cout<<"3.Treament Payment"<<endl;
	cout<<"4. Exit"<<endl;
	cin>>ch;
	system("cls");
	if(ch==1){
	details();
}

    else if(ch==2){
              
			app();
		}
	  else if(ch==3){
		cout<<"Enter the number for the doctor you want to make payment"<<endl;
		cout<<" 1.Dr.Maryam Khan/Gynaecologist"<<endl;
	    cout<<" 2.Dr.Abdulllah/ Eye specialist"<<endl;
	    cout<<" 3.Dr.Tariq /  Heart specialist"<<endl;
	    cout<<" 4.Dr.Uzma /  Kidney specialist"<<endl;
	    cout<<" 5.Dr.Ali /         Neurologist"<<endl;
        cin>>pay;
		if(pay==1){
		
		do{
			
			
				cout<<" Amount is 2000 rupees "<<endl;
				cout<<"Enter payment"<<endl;
				cin>>ppay;
				if(ppay<2000){
					cout<<"Payment should be greater or equal than the amount"<<endl;
				}
			
	     
        MyFile <<"Amount paid:" <<ppay <<endl;
         
         
			}while(ppay!=2000);
			
		}
	   else	if(pay==2){
		do{
			
			
				cout<<" Amount is 3000 rupees "<<endl;
				cout<<"Enter payment"<<endl;
				cin>>ppay;
				MyFile <<"Amount paid:" <<ppay <<endl;
			
				if(ppay<3000){
					cout<<"Payment should be greater or equal than the amount"<<endl;
				}
			
	     
        
         
         
			}while(ppay!=3000);
			
		}
		else if(pay==3){
		
		do{
			
	
				cout<<" Amount is 2500 rupees "<<endl;
				cout<<"Enter payment"<<endl;
				cin>>ppay;
				if(ppay<2500){
					cout<<"Payment should be greater or equal than the amount"<<endl;
				}
			
	     
        MyFile <<"Amount paid:" <<ppay <<endl;
         
         
			}
			while(ppay!=2500);
		}
		
		else if(pay==4){
		
		do{
			
		
				cout<<" Amount is 1000 rupees "<<endl;
				cout<<"Enter payment"<<endl;
				cin>>ppay;//put filing here
				if(ppay<1000){
					cout<<"Payment should be greater or equal than the amount"<<endl;
				}
			
	      MyFile <<"Amount paid:" <<ppay <<endl;
	      
         
         
		  }
		   while(ppay!=1000);
		   
	     }
	     
	     else if(pay==5){
		 
		do{
			
		
				cout<<" Amount is 1500 rupees "<<endl;
				cout<<"Enter payment"<<endl;
				cin>>ppay;
				 MyFile <<"Amount paid:" <<ppay <<endl;
				 
				if(ppay<1500){
					cout<<"Payment should be greater or equal than the amount"<<endl;
				}
		
              MyFile <<"Amount paid:" <<ppay <<endl;
			}
			  
			  while(ppay!=1500);
	    
	    	} 
	    	
		else if(ch==4){
			cout<<"Exit"<<endl;
			cout<<"Thank you for visiting our hospital"<<endl;
		}
		else{
			cout<<"Invalid input";
		}
		 }
		 }while(ch!=4);
		 
			
		system("cls");	
		
		 
		
			
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout<<"\t\t\t\t\t@@ ___________ @@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                               THANK YOU FOR USING                                     |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                            HOSPITAL MANAGEMENT SYSTEM                                 |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|___________|@@\n";
cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
}
