import java.util.Scanner;

public class Income_Tax {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of employees: ");
        int employee_count = scanner.nextInt();
        scanner.nextLine(); 

        for (int i = 1; i <= employee_count; i++) {
            System.out.println("\nEnter details for Employee " + i + ":");
            calculate_employee_tax(scanner);
        }

        scanner.close();
    }

    public static void calculate_employee_tax(Scanner scanner) {
        System.out.println(".------------------------------------------------------------------.");

        System.out.print("Enter the Employee name: ");
        String name = scanner.nextLine();

        System.out.print("Enter the Designation: ");
        String designation = scanner.nextLine();

        System.out.print("Enter the Department: ");
        String department = scanner.nextLine();

        System.out.print("Enter the BASIC SALARY: ");
        double basic_salary = scanner.nextDouble();
        scanner.nextLine(); 

        double da = 0.12 * basic_salary;
        double hra = 0.15 * basic_salary;
        System.out.println(".------------------------------------------------------------------.");
        System.out.println("\nEmployee name: " + name);
        System.out.println("Designation: " + designation);
        System.out.println("Department: " + department);
        System.out.printf("BASIC SALARY: %.2f\n", basic_salary);
        System.out.printf("Daily allowance: %.2f\n", da);
        System.out.printf("HOUSE RENT : %.2f\n", hra);

        double gross_salary = basic_salary + da + hra;
        System.out.printf("TOTAL SALARY PER MONTH: %.2f\n", gross_salary);

        double annual_income = gross_salary * 12;
        System.out.printf("ANNUAL INCOME: %.2f\n", annual_income);

        double tax = calculate_tax(annual_income);
        System.out.printf("TOTAL TAX : %.2f\n", tax);

        double monthly_tax = tax / 12; 
        System.out.printf("MONTHLY TAX : %.2f\n", monthly_tax);

        double net_salary = gross_salary - monthly_tax;
        System.out.printf("NET SALARY: %.2f\n", net_salary);
        System.out.println(".------------------------------------------------------------------.");
    }

    public static double calculate_tax(double annual_income) {
        double tax = 0;

        if (annual_income < 300000) {
            tax = 0;
        } else if (annual_income >= 300001 && annual_income <= 600000) {
            tax = annual_income * 0.05;
        } else if (annual_income >= 600001 && annual_income <= 900000) {
            tax = annual_income * 0.10;
        } else if (annual_income >= 900001 && annual_income <= 1200000) {
            tax = annual_income * 0.15;
        } else if (annual_income >= 1200001 && annual_income <= 1500000) {
            tax = annual_income * 0.20;
        } else {
            tax = annual_income * 0.30;
        }
        return tax;
    }
}
