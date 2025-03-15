public class Box {
    private double length;
    private double width;
    private double height;
    private String color;

    public Box(double l, double w, double h, String c) {
        length = l;
        width = w;
        height = h;
        color = c;
    }

    public Box(double side, String color) {
        this(side, side, side, color);
    }

    public Box(Box other) {
        this(other.length, other.width, other.height, other.color);
    }

    public void print() {
        System.out.println("Box [Length: " + length + ", Width: " + width + ", Height: " + height + ", Color: " + color + "]");
    }
}
