#include <iostream>
#include <fstream>

using namespace std;
//function declarations

class Menu{
	
public:

	int menu()
     {
        int choice;
    	cout<<"           Mini School Management System"<<endl;
        cout<<"1.Enroll a student\n";
        cout<<"2.Enroll a teacher\n";
        cout<<"3.Get Students info\n";
        cout<<"4.Get Teachers info\n";
        cout<<"0.Quit\n";
        cout << "\n";
        cout << " Please Select your option: ";
        cin >> choice;
        return choice;
     }
	
	void exit(){
		exit();
		}
	
	};


class Student{

		//variable declaration for student
public:		
		char student_fname[20][80];
		char student_lname[20][80]; 
		int student_id[20]; 
		int student_section[20];
		float student_mark[20];
		int num,tnum;
//get student		

	void get_student()
     {
        int i;
        for(i=0; i < num; i++)
           {
                cout << "Full Name: " << student_fname[i] <<" "<<student_lname[i]<< "    "<< "Phone: " << student_id[i]
                <<"  Section "<<student_section[i]<<"  Total Mark "<<student_mark[i]<< "\n";
                cout << '\n';
           }
     }
     
//create student
     
	void enter_student()
     {
          int i;
          cout<<"please enter the number of student";
          cin>>num;
          for(i=0; i<num; i++)
             {
                   cout << "First name: ";
                   cin >> student_fname[i];
                   cout << "Last name: ";
                   cin >> student_lname[i];
                   cout << "Phone number: ";
                   cin >> student_id[i];
                   cout << "Section: ";
                   cin >> student_section[i];
                   cout << "Mark: ";
                   cin >> student_mark[i];

             }
      }
     	
};


class Teacher{

		//Variable declaration for teacher
public:
		char teacher_fname[20][80];
		char teacher_lname[20][80]; 
		int teacher_phone[20]; 
		int teacher_section[20];
		float teacher_salary[20];
		int num,tnum;
	
	void get_teacher()
     {
           int j;
           for(j=0; j < tnum; j++)
                {
                     cout << "Full Name: " << teacher_fname[j] <<" "<<teacher_lname[j]<<"     "
                     <<"phone "<<teacher_phone[j]<<"     "<<"Section "<<teacher_section[j]<<"     "<< "Salary: " << teacher_salary[j] << "\n";
                     cout << '\n';
                }
     }
          
     
	void enter_teacher(){
            int j;
            cout<<"please enter the number of student";
            cin>>tnum;
            for(j=0; j<tnum; j++)
                {
                    cout << "First name: ";
                    cin >> teacher_fname[j];
					cout << "Last name: ";
					cin >> teacher_lname[j];
					cout << "Phone number: ";
					cin >> teacher_phone[j];
					cout << "Section: ";
					cin >> teacher_section[j];
					cout << "Salary: ";
					cin >> teacher_salary[j];
                 }
      }
	

};
// Global declaration

Student stu;
Teacher tech;
Menu men;

//main function
int main()
   {
	    cout<<"          ///////////////              ((////////|| "<<endl;
	    cout<<"          //           //             ((         || "<<endl;	
	    cout<<"          //           //             ((         || "<<endl;	
		cout<<"          //                            ///((/))/|| "<<endl;
		cout<<"          //                                     || "<<endl;	
		cout<<"          //       ///////////   =====           || "<<endl;	
		cout<<"          //           //                        || "<<endl;	
		cout<<"          //           //                        || "<<endl;	
		cout<<"          ///////////////              //////////|| "<<endl;
	cout<<"            Any Foolish Write A Code That Computers Can Uderstand,\n But A Good Coder Write Code That Human Being's Can Understand."<<endl;
    cout<<"                by:..........\n\n"<<endl;
	cout<<"Student Name:     Student_id"<<endl;
	cout<<"Tito Hailu      14,159/19\n\n"<<endl;
      int choice;
      while(1)
           {
              choice = men.menu(); 
              switch(choice)
               {
                    case 0: men.exit();
						break;
                    case 1: stu.enter_student();
						break;
                    case 2: tech.enter_teacher();
						break;
                    case 3: stu.get_student(); 
						break;
                    case 4: tech.get_teacher(); 
						break;
                    default: 
                           cout << "Try again.\n\n";
                }
           }
return(0);
   }


