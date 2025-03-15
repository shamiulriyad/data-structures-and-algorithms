public class SetMain {
    public static void main(String[] args) {
        SeeterAndGeter s1 = new SeeterAndGeter();
        SeeterAndGeter s2 = new SeeterAndGeter();

        s1.setName("Riyad");
        s1.setAge(22);
        s1.setSchoolName("DHS");
        s1.setCollege("MCPSC");

        s2.setName("Nusrta");
        s2.setAge(21);
        s2.setSchoolName("DHS");
        s2.setCollege("gurudaspur");


        System.out.println(s1.getName());
        System.out.println(s1.getSchoolName());
        System.out.println(s1.getCollege());
        System.out.println(s1.getAge());
        System.out.println(s2.getName());
        System.out.println(s2.getSchoolName());
        System.out.println(s1.getCollege());
        System.out.println(s1.getAge());

    }
    
}
