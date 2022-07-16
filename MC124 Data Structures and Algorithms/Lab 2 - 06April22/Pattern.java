package com.HardikPatel;

import java.util.Scanner;

public class Pattern {
    static Scanner in = new Scanner(System.in);

    public static void main(String[] args) {
        int row = in.nextInt();

        for(int i = row; i>=1; i--)
        {
            // half pattern from left till row
            for(int j=1;j<=row;j++)
            {
                if(j<=i)    // print column equal to max row and decrement column by 1
                    System.out.print(j);
                else
                    System.out.print(" "); // print space when condition is false
            }

            // other half patter of right side
            for(int j=row-1;j>=1;j--)
            {
                if(j<=i)
                    System.out.print(j);
                else
                    System.out.print(" ");
            }
            System.out.println();
        }
    }
}
