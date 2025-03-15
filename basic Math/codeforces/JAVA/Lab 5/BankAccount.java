//inheritance
//benefits
//1.code reusability
//2.code scalability



public class BankAccount{
    private  int ID;
    private  String Name;
    private  double Balance;
    private  double interstrate;

    public BankAccount(int iD2, String name2, double balance2, double interestRate) {
    }

    public BankAccount(double Balance, String CardNumber, int ID, String Name, double interstrate) {
        this.Balance = Balance;
        this.ID = ID;
        this.Name = Name;
        this.interstrate = interstrate;
    }

    public int getID() {
        return ID;
    }

    public String getName() {
        return Name;
    }

    public double getBalance() {
        return Balance;
    }

    public double getInterstrate() {
        return interstrate;
    }

   

    public void setID(int ID) {
        this.ID = ID;
    }

    public void setName(String Name) {
        this.Name = Name;
    }

   

    public void setBalance(double Balance) {
        this.Balance = Balance;
    }

    public void setInterstrate(double interstrate) {
        this.interstrate = interstrate;
    }

    
    public void withdrow(double amount){
        this.Balance-=amount;
        System.err.println("Amounnt withdrown done");
    }
    public void diposite(double amount){
        this.Balance+=amount;
        System.err.println("amount will diposited");
    }
    @Override
    public String toString() {
        return "BankAccount [ID=" + ID + ", Name=" + Name + ", Balance=" + Balance + ", interstrate=" + interstrate
                + "]";
    }

    void deposit(double amount) {
        throw new UnsupportedOperationException("Not supported yet.");
    }


}