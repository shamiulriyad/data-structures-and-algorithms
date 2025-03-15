public class Main {
    public static void main(String[] args) {
        Account[] accounts = new Account[10];
        Account c1 = new CheckingAccount(121, "Alice", 5000, 5.0, 10000);
        // System.out.println(s.toString());
        // s.deposit(1000);
        // System.out.println(s.toString());
        // s.withdraw(10000);
        // System.out.println(s.toString());
        CheckingAccount c2 = new CheckingAccount(121, "Alice", 5000, 5.0, 10000);
        SavingsAccount s1 = new SavingsAccount(1, "X", 5000, 5, "123545");
        SavingsAccount s2 = new SavingsAccount(1, "X", 5000, 5, "123545");
        accounts[0] = c1;
        accounts[1] = c2;
        accounts[2] = s1;
        accounts[3] = s2;
        System.out.println(accounts[0].getOverdraftLimit());
        CheckingAccount a = new CheckingAccount(0, null, 0, 0, 0);
       
    }
}
