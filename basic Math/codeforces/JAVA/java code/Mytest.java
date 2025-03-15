public class Mytest {
    public static void main(String[] args) {
        MyParent c1, c2;
        c1 = new MyParent.Mychild(2);
        c2 = new MyParent.Mychild(2);

        c2.set_p(2);

        int x = c2.Myfunction();
        double y = ((MyParent.Mychild) c1).myroot();

        System.out.println("x = " + x + ", y = " + y);
    }
}


