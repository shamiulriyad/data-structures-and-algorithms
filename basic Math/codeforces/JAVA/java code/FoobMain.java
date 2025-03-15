public class FoobMain{
    public static void main(String[] args) {
         FoodItem vegetable = new Vegetable("Cauliflower");
         FoodItem fish = new Fish("small");

         double totalVegetablePrice = vegetable.getprice(2);
          double totalFishPrice = fish.getprice(3); 


          System.out.println("Total Price of Vegetables: " + totalVegetablePrice);
        System.out.println("Total Price of Fish: " + totalFishPrice);

    }

   
    }
