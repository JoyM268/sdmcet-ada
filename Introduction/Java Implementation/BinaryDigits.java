//Program to count number of binary digits
import java.util.Scanner;

class BinaryDigits {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the numbers: ");
        int n = sc.nextInt();
        System.out.println("Number of binary digits in " + n + " is " + binDigits(n));        
    }

    private static int binDigits(int n){
        int count = 1;
        while(n > 1){
            count += 1;
            n /= 2;
        }
        return count;
    }
}
