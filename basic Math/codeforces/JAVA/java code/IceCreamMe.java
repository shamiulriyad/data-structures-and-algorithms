public class IceCreamMe {
    private String iceCreamType;
    private String iceCreamCompany;
    private double iceCreamPrice;

    // Default constructor
    public IceCreamMe() {
        this.iceCreamType = null;
        this.iceCreamCompany = null;
        this.iceCreamPrice = 0.0;
    }

    // Parameterized constructor
    public IceCreamMe(String iceCreamType, String iceCreamCompany, double iceCreamPrice) {
        this.iceCreamType = iceCreamType;
        this.iceCreamCompany = iceCreamCompany;
        this.iceCreamPrice = iceCreamPrice;
    }

    // Getters
    public String getIceCreamType() {
        return this.iceCreamType;
    }

    public String getIceCreamCompany() {
        return this.iceCreamCompany;
    }

    public double getIceCreamPrice() {
        return this.iceCreamPrice;
    }

    // Setters
    public void setIceCreamType(String iceCreamType) {
        this.iceCreamType = iceCreamType;
    }

    public void setIceCreamCompany(String iceCreamCompany) {
        this.iceCreamCompany = iceCreamCompany;
    }

    public void setIceCreamPrice(double iceCreamPrice) {
        this.iceCreamPrice = iceCreamPrice;
    }

    // Equals method to compare IceCreamMe objects
    public boolean equals(IceCreamMe I1) {
        if (this.iceCreamType.equals(I1.iceCreamType) &&
            this.iceCreamCompany.equals(I1.iceCreamCompany) &&
            this.iceCreamPrice == I1.iceCreamPrice) {
            return true;
        } else {
            return false;
        }
    }

    // toString method to print IceCreamMe details
    @Override
    public String toString() {
        return this.iceCreamType + " " + this.iceCreamCompany + " " + this.iceCreamPrice;
    }
}


