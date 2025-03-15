public class CopyConst {
    public int id;
    public String name;
    public CopyConst(int i, String n){
        id= i;
        name = n;
    }
    CopyConst(CopyConst s){
        id = s.id;
        name = s.name;
    }
    void display(){
        System.err.println(id+" "+name);
    }
    public static void main(String[] args) {
        CopyConst cp1 = new CopyConst(5551, "nusrat");
        CopyConst cp2 = new CopyConst(cp1);
        cp1.display();
        cp2.display();
    }
    
}
