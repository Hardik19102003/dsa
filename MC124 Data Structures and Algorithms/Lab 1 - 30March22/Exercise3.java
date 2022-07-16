package com.DSA;

public class Exercise3 {
    public static void main(String[] args) {
        int[][] arr={
                {1,2,3},
                {4,5,6},
                {7,8,9}
        };
        int row=arr.length;
        int col=arr[0].length;

        if(col!=0 && row==col){
            System.out.println(diagonalSum(arr));
            System.out.println(offSum(arr));
        }
    }

    static int offSum(int[][] matrix){
        int sum=0;
        System.out.println("Sum of off-diagonal elements : ");
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[0].length; j++) {
                if (i != j) {
                    sum = sum + matrix[i][j];
                }
            }
        }
        return sum;
    }

    static int diagonalSum(int[][] matrix){
        int sum=0;
        System.out.println("Sum of the diagonal elements : ");
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[0].length; j++) {
                if (i == j) {
                    sum = sum + matrix[i][j];
                }
            }
        }
        return sum;
    }
}
