public class MyParent {
    private int p;

    public MyParent(int p) {
        this.p = p;
    }

    public final int Myfunction() {
        return p * p;
    }

    public void set_p(int Q) {
        p = Q;
    }

    public int get_p() {
        return p;
    }
    public static class Mychild extends MyParent {
        public Mychild(int k) {
            super(k);
        }

        public int MychildFunction() {
            int p = get_p();
            return p * p + 1;
        }

        public double myroot() {
            int p = get_p();
            return Math.sqrt(p);
        }
    }
}
