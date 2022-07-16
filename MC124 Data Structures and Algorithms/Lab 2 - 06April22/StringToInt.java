package com.HardikPatel;

import java.util.Scanner;

public class StringToInt {
    static Scanner in = new Scanner(System.in);

    public static void main(String[] args) {
        String str = in.nextLine();
        int Num = Integer.valueOf(str); // this methode simply convert string to integer
        System.out.println(Num);
    }
}
