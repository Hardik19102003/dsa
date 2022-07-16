package com.DSA;

import java.util.Scanner;

public class Exercise5 {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str=in.nextLine();

        String[] arr=str.split(" ");
        reverseString(arr);
    }

    static void reverseString(String[] array){
        for (int i = array.length - 1; i >= 0; i--) {
            System.out.print(array[i] + " ");
        }
    }
}
