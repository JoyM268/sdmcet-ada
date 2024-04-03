//Program to implement binary search
import java.util.Arrays;

public class BinarySearch {
    private static int binarySearch(int[] arr, int k){
        int l = 0, r = arr.length - 1;
        while(l <= r){
            int mid = (l + r)/2;
            if(arr[mid] == k){
                return mid;
            } else if(k < arr[mid]){
                r = mid - 1;
            } else{
                l = mid + 1;
            }
        }
        return -1;
    }
    
    public static void main(String[] args) {
        int[] arr = {12, 26, 37, 58, 82};
        int k = 27;
        int index = binarySearch(arr, k);
        if(index == -1){
            System.out.println("Element " + k + " not found");
        }else{
            System.out.println("Element " + k + " found at index " + index);
        }
    }
}
