//Program to count number of binary digits recursively

import java.util.Scanner;

public class BinaryRecursive {
    private static int binDigits(int n){
        if(n == 1){
            return 1;
        }
        return 1 + binDigits(n/2);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the numbers: ");
        int n = sc.nextInt();
        System.out.println("Number of binary digits in " + n + " is " + binDigits(n));
    }
}
