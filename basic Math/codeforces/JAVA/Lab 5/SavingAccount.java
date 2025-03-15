public class SavingAccount extends BankAccount {
    private String cardNo;
    public SavingAccount(String cardNo, int ID, String name, double balance, double interestRate) {
        super(ID, name, balance, interestRate);
        this.cardNo = cardNo;
    }
    public String getCardNo() {
        return cardNo;
    }

    public void setCardNo(String cardNo) {
        this.cardNo = cardNo;
    }

    @Override
    public String toString() {
        return "SavingAccount [cardNo=" + cardNo + ", " + super.toString() + "]";
    }
}

