public class Account {
    protected int id;
    protected String name;
    protected double balance;
    protected double interestRate;
    public Account() {
    }
    public Account(int id, String name, double balance, double interestRate) {
        this.id = id;
        this.name = name;
        this.balance = balance;
        this.interestRate = interestRate;
    }
    public int getId() {
        return id;
    }
    public String getName() {
        return name;
    }
    public double getBalance() {
        return balance;
    }
    public double getInterestRate() {
        return interestRate;
    }
    public void setId(int id) {
        this.id = id;
    }
    public void setName(String name) {
        this.name = name;
    }
    public void setBalance(double balance) {
        this.balance = balance;
    }
    public void setInterestRate(double interestRate) {
        this.interestRate = interestRate;
    }
    public void withdraw(double amount){
        if(amount >0 && this.balance - amount >=0){
            this.balance -= amount;
            System.out.println("Amount withdrawn successfully!");
        }
        else{
            System.out.println("Inavlid amount!");
        }
    }
    public void deposit(double amount){
        if(amount > 0){
            this.balance += amount;
            System.out.println("Amount deposited successfully!");
        }
    }
    public double getOverdraftLimit() {
        return 0;
    }

    public String toString() {
        return "Account [id=" + id + ", name=" + name + ", balance=" + balance + ", interestRate=" + interestRate + "]";
    }
    
    
}