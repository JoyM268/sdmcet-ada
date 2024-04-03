//Program to sort a array using quick sort
import java.util.Arrays;

public class QuickSort {
    private static void quickSort(int[] arr, int l, int r){
        if(l < r){
            int s = partition(arr, l, r);
            quickSort(arr, l, s - 1);
            quickSort(arr, s + 1, r);
        }
    }

    private static int partition(int[] arr, int l, int r){
        int p = arr[l], i = l, j = r + 1;
        do{
            do{
                i++;
            }while(arr[i] < p);

            do{
                j--;
            }while(arr[j] > p);
            
            swap(arr, i, j);
        }while(i < j);
        swap(arr, i, j);
        swap(arr, l, j);
        return j;
    }

    private static void swap(int[] arr, int index1, int index2){
        int temp = arr[index1];
        arr[index1] = arr[index2];
        arr[index2] = temp;
    }

    public static void main(String[] args) {
        int[] arr = {56, 32, 90, 65, 10, 63, 45};
        System.out.println("Array before sorting:\n" + Arrays.toString(arr));
        quickSort(arr, 0, arr.length - 1);
        System.out.println("\nArray after sorting:\n" + Arrays.toString(arr));
    }
}
