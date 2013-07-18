
public class Student {
	
	private int StudentNumber;
	private String StudentName;
	private String StudentSex;
	private int StudentAge;
	private int StudentClassNumber;
	
	public Student(int StudentNumber, String StudentName, String StudentSex, int StudentAge, int StudentClassNumber){
		this.StudentNumber=StudentNumber;
		this.StudentName=StudentName;
		this.StudentSex=StudentSex;
		this.StudentAge=StudentAge;
		this.StudentClassNumber=StudentClassNumber;
	}
	
	public void setStudentNumber(int StudentNumber){
		this.StudentNumber = StudentNumber;
	}
	
	public int getStudentNumber(){
		return StudentNumber;
	}
	
	public void setStudentName(String StudentName){
		this.StudentName = StudentName;
	}
	
	public String getStudentName(){
		return StudentName;
	}
	
	public void setStudentSex(String StudentSex){
		this.StudentSex = StudentSex;
	}
	
	public String getStudentSex(){
		return StudentSex;
	}
	
	public void setStudentAge(int StudentAge){
		this.StudentAge = StudentAge;
	}
	
	public int getStudentAge(){
		return StudentAge;
	}
	
	public void setStudentClassNumber(int StudentClassNumber){
		this.StudentClassNumber = StudentClassNumber;
	}
	
	public int getStudentClassNumber(){
		return StudentClassNumber;
	}
	

}
