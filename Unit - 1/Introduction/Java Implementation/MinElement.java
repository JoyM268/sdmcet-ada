//Determine minimum value in given array recursively
public class MinElement {
    private static int minElement(int[] A, int n) {
        if(n == 1){
            return A[0];
        }else{
            int temp = minElement(A, n - 1);
            if(temp <= A[n - 1]){
                return temp;
            }else{
                return A[n - 1];
            }
        }
    }

    public static void main(String[] args) {
        int[] array = {3, 1, -15, 2, 9};
        int minValue = minElement(array, array.length);
        System.out.println("The smallest element in the array is: " + minValue);
    }
}