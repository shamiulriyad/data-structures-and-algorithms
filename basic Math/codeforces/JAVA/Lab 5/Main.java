import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Welcome to the Bank Management System!");
        System.out.println("Choose an account type:");
        System.out.println("1. Bank Account");
        System.out.println("2. Saving Account");
        System.out.println("3. Checking Account");
        int choice = scanner.nextInt();

        switch (choice) {
            case 1 -> {
                System.out.println("Creating a Bank Account...");
                System.out.print("Enter Account ID: ");
                int id = scanner.nextInt();
                System.out.print("Enter Name: ");
                scanner.nextLine();
                String name = scanner.nextLine();
                System.out.print("Enter Initial Balance: ");
                double balance = scanner.nextDouble();
                System.out.print("Enter Interest Rate: ");
                double interestRate = scanner.nextDouble();

                BankAccount bankAccount = new BankAccount(id, name, balance, interestRate);
                System.out.println("Account created: " + bankAccount);
                performActions(scanner, bankAccount);
            }
            case 2 -> {
                System.out.println("Creating a Saving Account...");
                System.out.print("Enter Account ID: ");
                int id = scanner.nextInt();
                System.out.print("Enter Name: ");
                scanner.nextLine();
                String name = scanner.nextLine();
                System.out.print("Enter Initial Balance: ");
                double balance = scanner.nextDouble();
                System.out.print("Enter Interest Rate: ");
                double interestRate = scanner.nextDouble();
                System.out.print("Enter Card Number: ");
                scanner.nextLine();
                String cardNumber = scanner.nextLine();

                SavingAccount savingAccount = new SavingAccount(cardNumber, id, name, balance, interestRate);
                System.out.println("Account created: " + savingAccount);
                performActions(scanner, savingAccount);
            }
            case 3 -> {
                System.out.println("Creating a Checking Account...");
                System.out.print("Enter Account ID: ");
                int id = scanner.nextInt();
                System.out.print("Enter Name: ");
                scanner.nextLine();
                String name = scanner.nextLine();
                System.out.print("Enter Initial Balance: ");
                double balance = scanner.nextDouble();
                System.out.print("Enter Interest Rate: ");
                double interestRate = scanner.nextDouble();
                System.out.print("Enter Overdraft Limit: ");
                double overdraftLimit = scanner.nextDouble();

                CheckingAccount checkingAccount = new CheckingAccount(overdraftLimit, id, name, balance, interestRate);
                System.out.println("Account created: " + checkingAccount);
                performActions(scanner, checkingAccount);
            }
            default -> System.out.println("Invalid choice. Exiting program.");
        }

        scanner.close();
    }

    private static void performActions(Scanner scanner, BankAccount account) {
        while (true) {
            System.out.println("\nChoose an action:");
            System.out.println("1. Deposit");
            System.out.println("2. Withdraw");
            System.out.println("3. Display Account Details");
            System.out.println("4. Exit");
            int action = scanner.nextInt();

            switch (action) {
                case 1 -> {
                    System.out.print("Enter amount to deposit: ");
                    double amount = scanner.nextDouble();
                    account.deposit(amount);
                }
                case 2 -> {
                    System.out.print("Enter amount to withdraw: ");
                    double amount = scanner.nextDouble();
                    account.withdrow(amount);
                }
                case 3 -> System.out.println("Account Details: " + account);
                case 4 -> {
                    System.out.println("Exiting actions menu.");
                    return;
                }
                default -> System.out.println("Invalid choice. Please try again.");
            }
        }
    }
}
