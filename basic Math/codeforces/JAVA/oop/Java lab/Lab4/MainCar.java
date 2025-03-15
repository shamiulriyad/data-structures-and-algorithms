public class MainCar {
  
    public static void main(String[] args){
        Car myCar = new Car();
        myCar.setProperty("Toyota", "Supra", "ABC123", "Gas", 180.0f);
 
 
        System.out.println(" " + myCar.CarBrandName);
        System.out.println(" " + myCar.CarModelName);
        System.out.println(" " + myCar.CarNumber);
        System.out.println(" " + myCar.CarFuleType);
        System.out.println(" " + myCar.speed );
    } 
 }