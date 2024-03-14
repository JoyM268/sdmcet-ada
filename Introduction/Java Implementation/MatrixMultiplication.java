//Program to multiply two matrix
import java.util.Arrays;

class MatrixMultiplication {
    public static void main(String[] args) {
        int[][] matrix1 = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };

        int [][] matrix2 = {
            {1, 1, 1},
            {2, 2, 2},
            {3, 3, 3}
        };

        int[][] result = multiplyMatrix(matrix1, matrix2);
        for(int[] arr : result){
            System.out.println(Arrays.toString(arr));
        }
    }

    private static int[][] multiplyMatrix(int[][] matrix1, int[][] matrix2){
        int[][] result = new int[matrix1.length][matrix2[0].length];
        for(int i = 0; i < matrix1.length; i++){
            for(int j = 0; j < matrix2[i].length; j++){
                result[i][j] = 0;
                for(int k = 0; k < matrix2.length; k++){
                    result[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }
        return result;
    } 
}