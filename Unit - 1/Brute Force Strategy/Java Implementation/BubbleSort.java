//Program to sort a array using bubble sort
import java.util.Arrays;

public class BubbleSort {
    private static void sort(int[] arr){
        for(int i = 0; i < arr.length - 1; i++){
            for(int j = 0; j < arr.length - i - 1; j++){
                if(arr[j] > arr[j + 1]){
                    swap(arr, j, j + 1);
                }
            }
        }
    }  

    private static void swap(int[] arr, int index1, int index2){
        int temp = arr[index1];
        arr[index1] = arr[index2];
        arr[index2] = temp;
    }

    public static void main(String[] args) {
        int[] arr = {56, 32, 90, 65, 10, 34};
        System.out.println("Array before sorting:\n" + Arrays.toString(arr));
        sort(arr);
        System.out.println("\nArray after sorting:\n" + Arrays.toString(arr));
    }
}