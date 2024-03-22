//Program to sort a array using selection sort
import java.util.Arrays;

public class SelectionSort {
    private static void sort(int[] arr){
        for(int i = 0; i < arr.length - 1; i++){
            int min = i;
            for(int j = i + 1;  j < arr.length; j++){
                if(arr[min] > arr[j]){
                    min = j;
                }
            }
            if(i != min){
                swap(arr, i, min);
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