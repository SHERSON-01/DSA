import java.util.Scanner;
public class MatrixMultiplication{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter no. of rows for 1");
        int row1 = scanner.nextInt();
        System.out.println("Enter no. of columns for 1");
        int columns1 = scanner.nextInt();
        System.out.println("Enter no. of rows for 2");
        int row2 = scanner.nextInt();
        System.out.println("Enter no. of columns for 2");
        int columns2 = scanner.nextInt();
             
        if (columns1 != row2) {
            System.out.println("can't be multiplied");
            return;
        }

        int[][] matrix1 = new int[row1][columns1];
        int[][] matrix2 = new int[row2][columns2];
        int[][] resultmatrix = new int[row1][columns2];

        System.out.println("Enter elements for 1");
        for(int i=0;i<row1;i++){
            for(int j=0; j<columns1; j++){
                matrix1[i][j] = scanner.nextInt();
            }
        }
        System.out.println("Enter elements for 2");
        for(int i=0;i<row2;i++){
            for(int j=0; j<columns2; j++){
                matrix2[i][j] = scanner.nextInt();
            }
        }
        for(int i=0;i<row1;i++){
            for(int j=0; j<columns2; j++){
                for(int k = 0;k<columns1;k++){
                    resultmatrix[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }
        System.out.println("The result of matrix is: ");
        for(int i=0;i<row1;i++){
            for(int j=0; j<columns2; j++){
                System.out.println(resultmatrix[i][j] + " ");
            }
        }



    }
}