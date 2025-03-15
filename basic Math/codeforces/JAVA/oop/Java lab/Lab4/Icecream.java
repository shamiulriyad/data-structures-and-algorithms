public class Icecream {
    private String icecreamType;
    private String icecreamCompany;
    private double icecreamPrice;
    public Icecream(){
        icecreamType = null;
        icecreamCompany = null;
        icecreamPrice = 0.0;
    }
    public Icecream(String icecreamType, String icecreamCompany, double icecreamPrice){
        this.icecreamType = icecreamType;
        this.icecreamCompany = icecreamCompany;
        this.icecreamPrice = icecreamPrice;
    }
    public String getIcecreamType(){
        return this.icecreamType;
    }
    public String getIcecreamCompany(){
        return this.icecreamCompany;
    }
    public double getIcecreamPrice(){
        return this.icecreamPrice;
    }
    public void setIcecreamType(String icecreamType){
        this.icecreamType = icecreamType;
    }
    public void setIcecreamCompany(String icecreamCompany){
        this.icecreamCompany = icecreamCompany;
    }
    public void setIcecreamPrice(double icecreamPrice){
        this.icecreamPrice = icecreamPrice;
    }
    public boolean equals(Icecream I){
        return this.icecreamType.equals(I.icecreamType)
                && this.icecreamCompany.equals(I.icecreamCompany)
                && this.icecreamPrice == I.icecreamPrice;
    }
    @SuppressWarnings("override")
    public String toString(){
        return this.icecreamType + " " + this.icecreamCompany 
                                    + " " + this.icecreamPrice;
    }
}