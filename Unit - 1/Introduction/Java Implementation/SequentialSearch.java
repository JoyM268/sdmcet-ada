//Program to perform sequential search on a array for given key element K
public class SequentialSearch {
    private static int sequentialSearch(int[] A, int K) {
        int i = 0;
        while (i < A.length && A[i] != K) {
            i++;
        }
        if (i < A.length) {
            return i;
        } else {
            return -1;
        }
    }

    public static void main(String[] args) {
        int[] array = {3, 6, 9, 12, 15};
        int key = 9;
        int index = sequentialSearch(array, key);
        if (index != -1) {
            System.out.println("Element found at index: " + index);
        } else {
            System.out.println("Element not found.");
        }
    }
}