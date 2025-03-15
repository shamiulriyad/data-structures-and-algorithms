public class BankAccount {
    public static void main(String[] args) {
        
    
    public String name;
    public String id;
    public double balance;

    public void deposit(double  amount){
        balance = balance + amount;
    }
    public void withdrow(double amount){
        if(amount < balance)
        balance -=amount;
    }

}
}