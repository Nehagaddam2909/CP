class Teacher{
    String name;
    String Qualification;
}	
interface College{
    String clgName="WCE";
}
class Department extends Teacher implements College{
    int deptNo;
    String deptName;
    void setData(String name,String Qualification,int deptNo,String deptName){
        this.name=name;
        this.Qualification=Qualification;
        this.deptNo=deptNo;
        this.deptName=deptName;
    }
    void display(){
        System.out.println("Name of teacher : "+name);
        System.out.println("Qualification of teacher : "+Qualification);
        System.out.println("College Name : "+clgName);
        System.out.println("Department number : "+deptNo);
        System.out.println("Department name : "+deptName);
    }
}
class Main { 
    public static void main(String[] args) {
        Department d=new Department();
        d.setData("Neha","BTech",4,"CSE");
        d.display();
    }
}
