public class Constructor {
    int x;
    public Constructor(){
        x=5;
    }
    public static void main(String[] args) {
        Constructor myobj = new Constructor();
        System.out.println(myobj.x);
    }
}
