public class ConstructorOverlaping {
    int a; 
    double b; 
    String c;

    // Default cons
    ConstructorOverlaping() {
        a = 100; 
        b = 45.32; 
        c = "ankit";
    }

    // Constructor with an integer parameter
    ConstructorOverlaping(int x) {
        a = x;
       
    }

    // Constructor with double and String parameters
    ConstructorOverlaping(double y, String z) {
    
        b = y;
        c = z;
    }

    // Overriding the toString() method to display object details
    @Override
    public String toString() {
        return "ConstructorOverlaping [a=" + a + ", b=" + b + ", c=" + c + "]";
    }

    public static void main(String[] args) {
        ConstructorOverlaping r = new ConstructorOverlaping();
        ConstructorOverlaping r2 = new ConstructorOverlaping(10);
        ConstructorOverlaping r3 = new ConstructorOverlaping(23.89, "Ankush");

        System.out.println(r);   // Prints details of the first object
        System.out.println(r2);  // Prints details of the second object
        System.out.println(r3);  // Prints details of the third object
    }
}