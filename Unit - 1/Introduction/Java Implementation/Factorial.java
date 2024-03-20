//Program to find factorial of a number n recursively
import java.util.Scanner;

class Factorial {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the value of n: ");
        int n = sc.nextInt();
        System.out.println(n + "! = " + fact(n));   
    }

    private static int fact(int n){
        if(n == 0){
            return 1;
        }
        return n * fact(n - 1);
    }
}