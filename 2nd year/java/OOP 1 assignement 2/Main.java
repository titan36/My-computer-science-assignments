/*
                    Sudent Name                 Id
                    1, Ruth Endale                13/084/19
                    2, Tito Hailu                 14,159/19
                    3, Kewser Jemal               13/005/18
                    4, Mehlat Manaye              13/106/19
                    5, Loza Abraham               13/091/19 
                    6, Melat Tadesse              13/023/19
                    
*/  


import java.util.Scanner;

public class Main{
	
	Teacher teach = new Teacher();
	Student stud = new Student();
	Scanner sc = new Scanner(System.in);
	
	public static void Display(){
		System.out.println("Teacher and Student Registration System");
		System.out.println("To register Student enter 1");
		System.out.println("To register Teacher enter 2");				
		System.out.println("To Display Teacher enter 3");		
		System.out.println("To Display Student enter 4");
		System.out.println("To Close the program enter 0");
	}
	
	public void teacherRegistreation(){
	System.out.println("Enter Teacher First Name");
	String fname = sc.next();
	teach.setFname(fname);
	
	System.out.println("Enter Teacher Last Name");
	String lname = sc.next();
	teach.setLname(lname);  
	
	System.out.println("Enter Teacher Phone Number");
	long phone = sc.nextLong();
	teach.setPhone(phone);
	
	System.out.println("Enter Teacher Age");
	int age = sc.nextInt();
	teach.setAge(age);   
	}
	
	public void studentRegistreation(){
	
	System.out.println("Enter Student First Name");
	String fname = sc.next();
	stud.setFname(fname);
	
	System.out.println("Enter Student Last Name");
	String lname = sc.next();
	stud.setLname(lname);  
	
	System.out.println("Enter Student Phone Number");
	long phone = sc.nextLong();
	stud.setPhone(phone);
	
	System.out.println("Enter Student Id");
	int id = sc.nextInt();
	stud.setId(id);   
	
	System.out.println("Enter Student GPA");
	float gpa = sc.nextFloat();
	stud.setGPA(gpa);   
	
	}
	
	public void teacherDisplay(){
	
	System.out.println("First Name    "+teach.getFname());
	System.out.println("Last Name    "+teach.getLname());
	System.out.println("Phone No    "+teach.getPhone());
	System.out.println("Age    "+teach.getAge());
	
	}
	
	public void studentDisplay(){
	
	System.out.println("First Name    "+stud.getFname());
	System.out.println("Last Name    "+stud.getLname());
	System.out.println("Phone No    "+stud.getPhone());
	System.out.println("Age    "+stud.getId());
	System.out.println("GPA    "+stud.getGPA());
	
	}
	public static void main(String[] args){
		Scanner sc1 = new Scanner(System.in);
		Main m = new Main();
		Display();
		int num;
		num = sc1.nextInt();
		if(num == 1){
			m.studentRegistreation();
			Display();
			num = sc1.nextInt();
			}
			
		if(num == 2){
			m.teacherRegistreation();
			Display();
			num = sc1.nextInt();
        }
        
        if(num == 3){
			m.teacherDisplay();
			Display();
			num = sc1.nextInt();
        }
        
        if(num == 4){
			m.studentDisplay();
			Display();
			num = sc1.nextInt();
        }
        
        if(num == 0){
			System.out.print("Bye Bye\n");
        }
		if(num >= 5 & num < 0){
				System.out.println("Invalid Input");
				Display();
				num = sc1.nextInt();
				}	
		
		}	
	}
