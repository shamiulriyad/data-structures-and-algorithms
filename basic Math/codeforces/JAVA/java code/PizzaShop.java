public class PizzaShop {
    private int pizza_price = 320;
    private int drink_price = 40;
    private int fries_price = 100;

    // Default Constructor
    PizzaShop() {
        System.out.println("Welcome to pizza shop");
    }

    // Method to calculate the bill for pizzas and drinks
    public void order(int pizzas, int drinks) {
        int total = (pizzas * pizza_price) + (drinks * drink_price);
        System.out.println("You ordered " + pizzas + " pizzas, " + drinks + " drinks");
        System.out.println("Total bill: " + total + " taka");
    }

    // Method to calculate the bill for pizzas, drinks, and fries
    public void order(int pizzas, int drinks, int fries) {
        int total = (pizzas * pizza_price) + (drinks * drink_price) + (fries * fries_price);
        System.out.println("You ordered " + pizzas + " pizzas, " + drinks + " drinks, " + fries + " fries");
        System.out.println("Total bill: " + total + " taka");
    }

    // Method to calculate the bill for pizzas only
    public void order(int pizzas) {
        int total = pizzas * pizza_price;
        System.out.println("You ordered " + pizzas + " pizzas");
        System.out.println("Total bill: " + total + " taka");
    }
}
