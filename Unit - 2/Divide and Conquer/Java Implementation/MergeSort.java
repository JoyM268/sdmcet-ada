//Program to sort a array using merge sort
import java.util.Arrays;

public class MergeSort {
    private static void copyArray(int[] srcArr, int[] destArr, int startIndex, int endIndex){
        int  j = 0;
        for(int i = startIndex; i <= endIndex; i++){
            destArr[j++] = srcArr[i];
        }
    }

    private static void merge(int[] arr, int[] arr1, int[] arr2){
        int i = 0, j = 0, k = 0;
        while(i < arr1.length && j < arr2.length){
            if(arr1[i] <= arr2[j]){
                arr[k++] = arr1[i++];
            }else{
                arr[k++] = arr2[j++];
            }
        }

        while(i < arr1.length){
            arr[k++] = arr1[i++];
        }

        while(j < arr2.length){
            arr[k++] = arr2[j++];
        }
    }

    private static void mergeSort(int[] arr){
        if(arr.length == 1){
            return;
        }
        int[] arr1 = new int[(int)Math.floor(arr.length/2.0)];
        int[] arr2 = new int[(int)Math.ceil(arr.length/2.0)];
        copyArray(arr, arr1, 0, arr1.length - 1);
        copyArray(arr, arr2, arr1.length, arr.length - 1);
        mergeSort(arr1);
        mergeSort(arr2);
        merge(arr, arr1, arr2);
    }
    
    public static void main(String[] args) {
        int[] arr = {56, 32, 90, 65, 10, 63};
        System.out.println("Array before sorting:\n" + Arrays.toString(arr));
        mergeSort(arr);
        System.out.println("\nArray after sorting:\n" + Arrays.toString(arr));
    }
}