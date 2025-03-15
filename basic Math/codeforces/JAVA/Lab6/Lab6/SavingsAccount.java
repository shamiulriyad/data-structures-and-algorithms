public class SavingsAccount extends Account{
    private String cardNo;

    public SavingsAccount(int id, String name, double balance, double interestRate, String cardNo) {
        super(id, name, balance, interestRate);
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
        return  super.toString() + "SavingsAccount [cardNo=" + cardNo + "]";
    }
}
