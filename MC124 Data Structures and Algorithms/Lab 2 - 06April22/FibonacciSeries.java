package com.HardikPatel;

import java.util.Scanner;

import static java.lang.System.out;

public class FibonacciSeries {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        System.out.println("Enter positive number: ");
        int num = in.nextInt();

        int num1 = 0, num2 = 1, nextNum;
        
        // first two numbers will be 0 and 1
        System.out.print("Fibonacci Series : " + num1 + " "+ num2 + " ");
        nextNum = num1 + num2;

        // we are adding previous two number to get next number
        while (nextNum <= num) {
            out.print(nextNum + " ");
            num1 = num2;
            num2 = nextNum;
            nextNum = num1 + num2;
        }
    }

}
