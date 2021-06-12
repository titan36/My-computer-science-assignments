class Student{
	private String sfname;
	private String slname;
	private long sphone;
	private int Id;
    private float GPA;
    
public void setFname(String sfname){
    this.sfname = sfname;
}

public void setLname(String slname){
    this.slname = slname;
}

public void setPhone(long sphone){
    this.sphone = sphone;
}

public void setId(int Id){
    this.Id = Id;
}

public void setGPA(float GPA){
    this.GPA = GPA;
}

public String getFname(){
    return sfname;
}

public String getLname(){
    return slname;

}
public long getPhone(){
    return sphone;

}
public int getId(){
    return Id;
}

public float getGPA(){
    return GPA;
}
	}
