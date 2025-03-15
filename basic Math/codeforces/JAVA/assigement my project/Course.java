import java.util.ArrayList;

public class Course {
    private String courseid;
    private String coursetitle;
    private double credit;
    private ArrayList<Stduent>studentList = new ArrayList<>();
    private Faculty faculty;
    
    public Course(){

    }
    public Course(String courseid,String coursetitle,double credit){
        this.courseid= courseid;
        this.coursetitle= coursetitle;
        this.credit = credit;
    }

    public String getCourseid() {
        return courseid;
    }

    public String getCoursetitle() {
        return coursetitle;
    }

    public double getCredit() {
        return credit;
    }

    public ArrayList<Stduent> getStudentList() {
        return studentList;
    }

    public Faculty getFaculty() {
        return faculty;
    }

    public void setCourseid(String courseid) {
        this.courseid = courseid;
    }

    public void setCoursetitle(String coursetitle) {
        this.coursetitle = coursetitle;
    }

    public void setCredit(double credit) {
        this.credit = credit;
    }

    public void setStudentList(ArrayList<Stduent> studentList) {
        this.studentList = studentList;
    }

    public void setFaculty(Faculty faculty) {
        this.faculty = faculty;
    }

    public void addStduent(Stduent stduent){
        studentList.add(stduent);
    }
    public void dropStduent(int Stduent_id){
        studentList.removeIf(stduent->stduent.getStduent_id()==Stduent_id);
    }
    public void addFaculty(){
        this.faculty= null;
    }
    public void printStduentList(){
        System.out.println("Student enroll in" + coursetitle + " : ");
        for(Stduent stduent : studentList){
            System.out.println(stduent);
        }
    }
    @Override
    public String toString() {
        return "Course [ID=" + courseid + ", Title=" + coursetitle + ", Credit=" + credit + ", Faculty=" + (faculty != null ? faculty.getFacultyname() : "None") + "]";
    }
}
