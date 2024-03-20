//Program to find max element in a array
public class MaxElement {
    private static int maxElement(int[] A) {
        int maxVal = A[0];
        for (int i = 1; i < A.length; i++) {
            if (A[i] > maxVal) {
                maxVal = A[i];
            }
        }
        return maxVal;
    }

    public static void main(String[] args) {
        int[] array = {3, 1, 15, 2, 9};
        int maxValue = maxElement(array);
        System.out.println("The largest element in the array is: " + maxValue);
    }
}