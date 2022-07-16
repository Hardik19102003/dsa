package com.DSA;

import java.util.Scanner;

public class Exercise2 {
    static int rNum=3;
    static int cNum=3;



    static void rSum(int[][] array){

        int sum=0;
        System.out.println("Sum of Each rows\n");
        for (int i = 0; i < rNum; i++) {
            for (int j = 0; j < cNum; j++) {
                sum=sum+array[i][j];

            }
            System.out.println("Sum of row "+ i +" : "+sum);
            sum=0;
        }
    }

    static void cSum(int[][] array){

        int sum=0;
        System.out.println("\nSum of Each columns\n");
        for (int i = 0; i < rNum; i++) {
            for (int j = 0; j < cNum; j++) {
                sum=sum+array[j][i];

            }
            System.out.println("Sum of col "+ i +" : "+sum);
            sum=0;
        }
    }

    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);

        int[][] array = new int[rNum][cNum];

        System.out.println("Enter array Elements : ");
        for (int i = 0; i < rNum; i++) {
            for (int j = 0; j < cNum; j++) {
                array[i][j]=in.nextInt();
            }
        }

        rSum(array);
        cSum(array);

    }


}
