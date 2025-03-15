public class Car {
    public String CarBrandName;
    public String CarModelName;
    public String CarNumber;
    public String CarPrice;
    public String CarFuleType;
    public float speed;
    
    public void setProperty(String brandName, String modelName, String licenseNumber, String fuelType, float carSpeed) {
        CarBrandName = brandName;
        CarModelName = modelName;
        CarNumber = licenseNumber;
        CarFuleType = fuelType;
        speed = carSpeed;
    }
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

