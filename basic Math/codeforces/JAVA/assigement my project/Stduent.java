public class Stduent {
    private int Stduent_id;
    private String Student_name;
    private double CGPA;
    

    public Stduent(){

    }

    public Stduent(int Stduent_id,String Student_name,double CGPA){
        this.Stduent_id = Stduent_id;
        this.Student_name = Student_name;
        this.CGPA = CGPA;
    }

    public int getStduent_id() {
        return Stduent_id;
    }

    public String getStudent_name() {
        return Student_name;
    }

    public double getCGPA() {
        return CGPA;
    }

    public void setStduent_id(int stduent_id) {
        Stduent_id = stduent_id;
    }

    public void setStudent_name(String student_name) {
        Student_name = student_name;
    }

    public void setCGPA(double cGPA) {
        CGPA = cGPA;
    }
    @Override
    public String toString() {
            return "Student[ID="+Stduent_id + ", Name=" + Student_name + ",CGPA=" + CGPA +"]";
    }   
}
