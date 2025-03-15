public class Faculty {
    private int facultyID;
    private String facultyname;
    private String facultyposition;


    public Faculty(){

    }

    public Faculty(int facultyID, String facultyname, String facultypositon){
        this.facultyID=facultyID;
        this.facultyname= facultyname;
        this.facultyposition = facultypositon;
    }

    public int getFacultyID() {
        return facultyID;
    }

    public String getFacultyname() {
        return facultyname;
    }

    public String getFacultyposition() {
        return facultyposition;
    }

    public void setFacultyID(int facultyID) {
        this.facultyID = facultyID;
    }

    public void setFacultyname(String facultyname) {
        this.facultyname = facultyname;
    }

    public void setFacultyposition(String facultyposition) {
        this.facultyposition = facultyposition;
    }

    @Override
    public String toString(){
        return "Faculty[ID=" +facultyID + ",Name ="+facultyname+",Positon="+facultyposition+"]";
    }  
}
