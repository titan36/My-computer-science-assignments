/*
  ===================================================================================================================
  =		Student Name                                          ID                                                    =
  =			Tito Hailu										14,159/19                                               =																
  =         Leka Mulugeta                                   14,053/19                                               =
  = 		Mahlet Manaye									13,038/19												=
  =			Samson Yonas									14,130/19												=
  = 		Mesud Jemal										13,097/19												= 
  =			Kirubel Getachew								13,339/19												=S
 ================================================================================================================	=
 */




#include <iostream>
#include <string>
using namespace std;

//start of class studentInfo
class studentData{  
	
	private:
		string firstName,lastName,id,department,sex;
		int age, section;
	
	public:
		//start of setter method
		void setFirstName(string firstName){
			this->firstName = firstName;
			}
		
		void setLastName(string lastname){
			this->lastName = lastname;
			}	
				
		void setId(string id){
			this->id = id;
			}
			
		void setAge(int age){
			this->age = age;
			}
			
		void setDepartment(string department){
			this->department = department;
			}
			
		void setSex(string sex){
			this->sex = sex;
			}
			
		void setSection(int section){
			this->section = section;
			}
				//end of setter method
		
		
		//start of getter method
		string getFirstName(){
			return this->firstName;
			}
			
		string getLastName(){
			return this->lastName;
			}
				
		string getId(){
			return this->id;
			}
			
		int getAge(){
			return this->age;
			}
			
		string getDepartment(){
			return this->department;
			}
			
		string getSex(){
			return this->sex;
			}
			
		int getSection(){
			return this->section;
			}	
		//end of gettte method
			
							
	}; //end of class studentData
	

int main(){
//class instantiation 

studentData *studentObj; 
//*studentObj1, *studentObj2, *studentObj3, *studentObj4, *studentObj5, *studentObj6
//variable declaration to accept data from the user
string firstName,lastName,department,sex,id;
int age,section;

//variable to store number of student to accept
int numOfStudent = 1;

	for(int counter = 0; counter <= numOfStudent; counter++){
			studentObj = new studentData[numOfStudent]; 
			//studentObj1 = new studentData[numOfStudent]; 
			//studentObj2 = new studentData[numOfStudent]; 
			//studentObj3 = new studentData[numOfStudent]; 
			//studentObj4 = new studentData[numOfStudent]; 
			//studentObj5 = new studentData[numOfStudent]; 
			//studentObj6 = new studentData[numOfStudent]; 
		cout<<"Please Enter FirstName of the student "<<counter + 1<<endl;
		cout<<">>";
		cin>>firstName;
		studentObj[counter].setFirstName(firstName);
		
		cout<<"Please Enter LastName of the student "<<counter + 1<<endl;
		cout<<">>";
		cin>>lastName;
		studentObj[counter].setLastName(lastName);
		
		cout<<"Please Enter Sex of the student "<<counter + 1<<endl;
		cout<<">>";
		cin>>sex;
		studentObj[counter].setSex(sex);
		
		cout<<"Please Enter Age of the student "<<counter + 1<<endl;
		cout<<">>";
		cin>>age;
		studentObj[counter].setAge(age);
		
		cout<<"Please Enter Id of the student "<<counter + 1<<endl;
		cout<<">>";
		cin>>id;
		studentObj[counter].setId(id);
		
		cout<<"Please Enter Section of the student "<<counter + 1<<endl;
		cout<<">>";
		cin>>section;
		studentObj[counter].setSection(section);
		
		cout<<"Please Enter Department of the student "<<counter + 1<<endl;
		cout<<">>";
		cin>>department;
		studentObj[counter].setDepartment(department);
		numOfStudent++;
		//Deallocation of studentObj		
	delete [] studentObj;
	//delete [] studentObj1;
	//delete [] studentObj2;
	//delete [] studentObj3;
	//delete [] studentObj4;
	//delete [] studentObj5;
	//delete [] studentObj6;		
		} //end of for looop	


return 0;	
	}
