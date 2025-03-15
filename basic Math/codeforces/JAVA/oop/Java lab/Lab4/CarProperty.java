class CarProperty {
    private String companyName;
    private String modelName;
    private String licenseNo;
    private String fuelType;
    private float speed;

    public CarProperty(String name, String model) {
        this.companyName = name;
        this.modelName = model;
    }

    public void setProperty(String fuel, float fSpeed) {
        this.fuelType = fuel;
        this.speed = fSpeed;
    }

    public void setLicense(String license) {
        this.licenseNo = license;
    }
    public static void main(String[] args) {
        CarProperty car = new CarProperty("Toyota", "Supra");
        car.setProperty("Oil", 120.0f);
        car.setLicense("ksfjskdf");
    }
}

   

