public class SecondMain {
    public static void main(String[] args) {
        // Create an instance of the inner class Dittio
        Second.Dittio lal = new Second().new Dittio();
        lal.name = "Riyad";
        lal.display(); // Calls the display method from Dittio
        lal.eat();     // Calls the eat method from Second
    }
}
