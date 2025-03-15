public class IceMain {
    public static void main(String[] args) {
        IceCreamMe I1= new IceCreamMe("ve","jij",20);
        IceCreamMe I2 = new IceCreamMe();
        IceCreamMe I3 = new IceCreamMe();

        I1.seticecreamType("Vennela");
        I1.steiceCreamCompany("Igglo");
        I1.seticecreamPrice(155);

        I2.seticecreamType("choklate");
        I2.steiceCreamCompany("jdngj");
        I2.seticecreamPrice(120);

        I3.seticecreamType("kon");
        I3.steiceCreamCompany("ihergh");
        I3.seticecreamPrice(160);

      //  System.out.println(I1.geticeCreamType());
      System.out.println(I1);


    }
}
