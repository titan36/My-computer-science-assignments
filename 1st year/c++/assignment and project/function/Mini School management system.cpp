/*

Any Foolish Write A Code That Computers Can Uderstand But A Good Coder Write Code That Human Being's Can Understand.
           by:..........

Student Name:     Student_id
* Tito Hailu      14,159/19
* 

											
											*        
											*       //////////   //     //         //\\        //            /////////////
											*    ///             //     //        //  \\       //                 //
		       Submited to: 			    * /// 				 //     //       //////\\      //                 // 
					Chali 					* ///                /////////      //      \\     //                 // 
											* ///                //     //     //        \\    //                 //
											*   ///              //     //    //          \\   //       /?        // 
											*     ////////////   //     //   //            \\  ///////////   /////////////
											*                 
											* 																
*/
#include <iostream>
using namespace std;
//function declarations
int menu();
void enter_student();
void enter_teacher();
void get_student();
void get_teacher();

//variable declaration for student
char student_fname[20][80];
char student_lname[20][80]; 
int student_id[20]; 
int student_section[20];
float student_mark[20];

//Variable declaration for teacher
char teacher_fname[20][80];
char teacher_lname[20][80]; 
int teacher_phone[20]; 
int teacher_section[20];
float teacher_salary[20];
int num,tnum;

//main function
int main()
   {
      int choice;
      while(1)
           {
              choice = menu(); 
              switch(choice)
               {
                    case 0:
break;
                    case 1: enter_student();
break;
                    case 2: enter_teacher();
break;
                    case 3: get_student(); 
break;
                    case 4: get_teacher(); 
break;
                    default: 
                           cout << "Try again.\n\n";
                }
           }
return(0);
   }


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


void get_student()
     {
        int i;
        for(i=0; i < num; i++)
           {
			    cout<<"\n";
                cout <<"Full Name: " <<student_fname[i]<<" "<<student_lname[i]<< "     "<< "Phone: " << student_id[i]
                <<"     "<<"Section: "<<student_section[i]<<"     "<<"Total Mark "<<student_mark[i]<< "\n";
                cout << '\n';
           }
     } 

void get_teacher()
     {
           int j;
           for(j=0; j < tnum; j++)
                {
					 cout<<"\n";
                     cout << "Full Name: " << teacher_fname[j] <<" "<<teacher_lname[j]<<"     "
                     <<"phone: "<<teacher_phone[j]<<"     "<<"Section: "<<teacher_section[j]<<"     "
                     << "Salary: " << teacher_salary[j] << "\n";
                     cout << '\n';
                }
     }


void enter_student()
     {
          int i;
          cout<<"please enter the number of student\n";
          cout<<">";
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

void enter_teacher()
     {
            int j;
            cout<<"please enter the number of student\n";
            cout<<">";
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

