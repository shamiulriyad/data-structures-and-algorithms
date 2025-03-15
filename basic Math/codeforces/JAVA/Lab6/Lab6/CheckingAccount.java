public class CheckingAccount extends Account{
    private double overdraftLimit;

    public CheckingAccount(int id, String name, double balance, double interestRate, double overdraftLimit) {
        super(id, name, balance, interestRate);
        this.overdraftLimit = overdraftLimit;
    }
    @Override
    public double getOverdraftLimit() {
        return overdraftLimit;
    }
    public void setOverdraftLimit(double overdraftLimit) {
        this.overdraftLimit = overdraftLimit;
    }
    public void withdraw(double amount){
        if(amount >0 && this.balance - amount >=-overdraftLimit){
            this.balance -= amount;
            System.out.println("Amount withdrawn successfully!");
        }
        else{
            System.out.println("Inavlid amount!");
        }
    }
    @Override
    public String toString() {
        return super.toString() + "CheckingAccount [overdraftLimit=" + overdraftLimit + "]";
    }

}
