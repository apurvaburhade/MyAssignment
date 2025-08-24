import java.util.*;

class Question_7
{
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number you want the table of: ");
        int a = sc.nextInt();

        System.out.println("Multiplication Table of " + a + ":");
        for (int i = 1; i <= 10; i++) {
            int result = a * i;
            System.out.println(a + " * " + i + " = " + result);
        }
    }
}
