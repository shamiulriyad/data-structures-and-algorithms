public class CheckingAccount extends BankAccount {
    private double overdraftLimit;
    public CheckingAccount(double overdraftLimit, int ID, String Name, double Balance, double interestRate) {
        super(ID, Name, Balance, interestRate);
        this.overdraftLimit = overdraftLimit;
    }
    public double getOverdraftLimit() {
        return overdraftLimit;
    }

    public void setOverdraftLimit(double overdraftLimit) {
        this.overdraftLimit = overdraftLimit;
    }
    public void withdraw(double amount) {
        if (amount <= 0) {
            System.err.println("Amount to withdraw must be greater than zero.");
        } else if (amount > (getBalance() + overdraftLimit)) {
            System.err.println("Withdrawal exceeds overdraft limit.");
        } else {
            setBalance(getBalance() - amount);
            System.out.println("Amount withdrawn successfully.");
        }
    }

    @Override
    public String toString() {
        return "CheckingAccount [overdraftLimit=" + overdraftLimit + ", " + super.toString() + "]";
    }
}

