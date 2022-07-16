package com.DSA;

import java.util.Scanner;

public class Exercise1 {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter the Number : ");
        int N=in.nextInt();

        for (int row = 0; row < N; row++) {
            for (int col = row; col <N ; col++) {
                System.out.print((char)('A' + col) );
            }
            System.out.println();
        }
        
    }
}
