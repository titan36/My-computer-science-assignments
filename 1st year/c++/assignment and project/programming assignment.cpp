#include <iostream>
#include <string>
using namespace std;

class StudentSystem{  //create class StudentSystem
	
		private:
		string Name,Sex,Id,Department;
		int Section;
	
		public:
		
		//start setter method
		void setName(string name){
			this->Name = name;
			}
		
		void setId(string id){
			this->Id = id;
			}
			
		void setDepartment(string department){
			this->Department = department;
			}
			
		void setSex(string sex){
			this->Sex = sex;
			}
			
		void setSection(int section){
			this->Section = section;
			}
		//end setter method
		
		
		//start getter method
		string getName(){
			return this->Name;
			}
				
		string getId(){
			return this->Id;
			}
				
		string getDepartment(){
			return this->Department;
			}
			
		string getSex(){
			return this->Sex;
			}
			
		int getSection(){
			return this->Section;
			}	
		//end gettter method
			
							
	}; //end of class StudentSystem
	
int main(){
//class instantiation or pointer object creation	
//It is perfectly valid to create pointers that point to classes
//This is a pointer to an object of class studentData.
StudentSystem *StudentName, *StudentId, *StudentSex, *StudentDepartment, *StudentSection; 

//variable declaration to accept data from the user
string name,department,sex,id;
int section;

//variable to store number of student to accept
int totalStudent;

//ask the user to enter the number of student want to accept
	cout<<"enter the Number of student"<<endl;
	cin>>totalStudent;


 //Dynamically allocate an array large enough to hold that many student data
	StudentName = new StudentSystem[totalStudent];  		//an array large enough to hold that many student Name
	StudentId = new StudentSystem[totalStudent]; 			//an array large enough to hold that many student ID
	StudentSex = new StudentSystem[totalStudent]; 			//an array large enough to hold that many student Sex
	StudentDepartment = new StudentSystem[totalStudent]; 	//an array large enough to hold that many student Department
	StudentSection = new StudentSystem[totalStudent]; 		//an array large enough to hold that many student Section
	

//iterate over the array and accept all student data
//or start of for loop

	for(int x = 0; x < totalStudent; x++){
		cout<<"Enter Name of the student "<<x + 1<<endl;
		cin>>name; //accept name of student
		StudentName[x].setName(name);  //here call the setName mathod in our class and give the name as an argument
		
		cout<<"Enter Sex of the student "<<x + 1<<endl;
		cin>>sex;  //accept Sex of student
		StudentSex[x].setSex(sex);  //here call the setSex mathod in our class and give the Sex as an argument
		
		cout<<"Enter Id of the student "<<x + 1<<endl;
		cin>>id;  //accept Id of student
		StudentId[x].setId(id);  //here call the setId mathod in our class and give the ID as an argument
		
		cout<<"Enter Section of the student "<<x + 1<<endl;
		cin>>section;  //accept section of student
		StudentSection[x].setSection(section); //here call the setSection mathod in our class and give the section as an argument
		
		cout<<"Enter Department of the student "<<x + 1<<endl;
		cin>>department;   //accept department of student
		StudentDepartment[x].setDepartment(department); //here call the setDepartment mathod in our class and give the department as an argument
				
		} //end of for looop	

//displaying Student Data
//here \t is tab
	cout<<"FirstName\t\tSex\t\tId\t\tSection\t\tDepartment"<<endl;  //header of table
	cout<<"========================================================================================================"<<endl;
	for(int x = 0; x < totalStudent; x++){
		
	//below simply show the address of each data the user enterd 
	//Compile madreg kasfelege commentun matifat bicha new
	
	/*
		cout<<&StudentName[x]<<"\t";
		cout<<&StudentSex[x]<<"\t";
		cout<<&StudentId[x]<<"\t";
		cout<<&StudentSection[x]<<"\t";
		cout<<&StudentDepartment[x]<<"\t"<<endl;
	*/
	
	//below display the data we enter 	
		cout<<StudentName[x].getName()<<"\t\t\t"<<StudentSex[x].getSex()<<"\t\t"<<StudentId[x].getId()<<"\t\t"<<StudentSection[x].getSection()<<"\t\t"<<StudentDepartment[x].getDepartment()<<endl;
		}

//Deallocation of All alocated memory		
	delete [] StudentName;
	delete [] StudentSex;
	delete [] StudentId;
	delete [] StudentSection;
	delete [] StudentDepartment;
	
	
	
return 0;	
	}
