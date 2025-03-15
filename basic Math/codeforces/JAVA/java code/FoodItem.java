public class FoodItem{
   public double c, z;
   public String t;
public double getprice(double amount){
    return c*amount*(1+z/100);
}
class Vegetable extends FoodItem {
    public void setparameter(String t) {
        if (t.equals("Spinach")) {
            c = 20;
            z = 15;
        } else if (t.equals("Cauliflower")) {
            c = 25;
            z = 18;
        }
        this.t = t;
    }

    public Vegetable(String t) {
        setparameter(t);
    }
}


class Fish extends FoodItem {
    public void setparameter(String t) {
        if (t.equals("Carp")) {
            c = 300;
            z = 15;
        } else if (t.equals("medium")) {
            c = 250;
            z = 20;
        } else if (t.equals("small")) {
            c = 200;
            z = 25;
        }
        this.t = t;
    }

    public Fish(String t) {
        setparameter(t);
    }

}
}