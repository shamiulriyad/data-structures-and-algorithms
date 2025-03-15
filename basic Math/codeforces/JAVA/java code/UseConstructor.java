public class UseConstructor {
    public String name;
    public String Gender;
    public int phone;

    // using overlaping //

    public UseConstructor() {
        System.out.println("No value");
    }
     public  UseConstructor (String n, String g){
        name = n;
        Gender = g;
    
    }

    public  UseConstructor (String n, String g, int p){
        name = n;
        Gender = g;
        phone = p;
    }

    

    




}
