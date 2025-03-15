public class Second {
    public String name;

    public void eat() {
        System.out.println("I want to eat first.");
    } 
    class Dittio extends Second {
        public void display() {
            System.out.println("My name is " + name);
        }
    }
}

