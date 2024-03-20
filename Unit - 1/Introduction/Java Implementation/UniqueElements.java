//Program to check if all the elements are distinct in a array
public class UniqueElements {

    private static boolean elementsDistinct(int[] A) {
        for (int i = 0; i < A.length - 1; i++) {
            for (int j = i + 1; j < A.length; j++) {
                if (A[i] == A[j]) {
                    return false;
                }
            }
        }
        return true;
    }

    public static void main(String[] args) {
        int[] array = {1, 2, 3, 4, 1, 5};
        if(elementsDistinct(array) == true){
            System.out.println("Elements in the array are distinct");
        } else{
            System.out.println("Elements in the array are not distinct");
        }
    }
}