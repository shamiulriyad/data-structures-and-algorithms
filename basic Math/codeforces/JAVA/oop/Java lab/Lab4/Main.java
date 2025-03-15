public class Main {
    public static void main(String[] args) {
        Icecream I1 = new Icecream("vanilla",
                        "Igloo", 350);
        Icecream I2 = new Icecream("vanilla",
                        "Igloo", 350);
        //I1.setIcecreamCompany("Savoy");
        //System.out.println(I1.getIcecreamType());
        //System.out.println(I1.toString());
        //System.out.println(I2.toString());
        System.out.println(I1.equals(I2));
    }
}
