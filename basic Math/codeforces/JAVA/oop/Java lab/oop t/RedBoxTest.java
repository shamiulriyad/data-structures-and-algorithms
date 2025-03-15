public class RedBoxTest {
    public static void main(String[] args) {
        Box box1 = new Box(5.0, 4.0, 3.0, "Blue");
        box1.print();
        Box box2 = new Box(6.0, " Green");
        box2.print();
        Box box3 = new Box(box1);
        box3.print();
        RedBox redBox1 = new RedBox(7.0,6.0,50);
        redBox1.print();
      //  RedBox redBox2 = new RedBox(8.0);
       // redBox2.print();
    }
    
}
