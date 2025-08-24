import java.util.*;

class Question_1{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);


        System.out.print("Enter how many numbers you want to compare: ");
        int n = sc.nextInt();

        int[] a = new int[n];
        System.out.println("Enter " + n + " numbers:");

        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }

        int max = a[0];
        for (int i = 1; i < n; i++) {
            if (a[i] > max) {
                max = a[i];
            }
        }

        System.out.println("Maximum among " + n + " elements: " + max);
    }
}
