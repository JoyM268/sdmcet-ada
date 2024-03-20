//Program to find the gcd of two numbers
import java.util.Scanner;

class GCD {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the two numbers: ");
        int m = sc.nextInt(), n = sc.nextInt();
        System.out.println("GCD of " + m + " and " + n + " is " + findGCD(m, n));
    }

    private static int findGCD(int m, int n){
        while(n != 0){
            int temp = m % n;
            m = n;
            n = temp;
        }
        return m;
    }
}