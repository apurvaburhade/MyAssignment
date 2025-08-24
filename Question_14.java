import java.util.*;

class Question_14 {

    // Method to check if a string is palindrome
    public static void palindrome(String s) {
        int j = s.length() - 1;

        for (int i = 0; i < s.length() / 2; i++) {
            if (s.charAt(i) != s.charAt(j)) {
                System.out.println("String is not palindrome");
                return;
            }
            j--;
        }
        System.out.println("String is palindrome");
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String s1 = sc.nextLine();  // take input from user

        palindrome(s1);
    }
}
