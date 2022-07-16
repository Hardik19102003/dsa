package com.DSA;

import java.util.Scanner;

public class Exercise4 {
    static Scanner in=new Scanner(System.in);

    public static void main(String[] args) {

        System.out.println("Enter two numbers : ");
        int num1= in.nextInt();
        int num2= in.nextInt();

        twoSum(num1,num2);
        calculator(num1,num2);

    }

    static void twoSum(int num1,int num2){
        System.out.println(num1+num2);
    }

    static void calculator(int num1 , int num2){
        System.out.println("Enter the operation number : ");
        int N= in.nextInt();

            switch (N) {
                case 1:
                    N = num1 + num2;
                    break;
                case 2:
                    N = num1 - num2;
                    break;
                case 3:
                    N = num1 * num2;
                    break;
                case 4:
                    if (num2 != 0)
                        N = num1 / num2;
                    break;
                default:
                    System.out.println("Enter valid number");
                    break;
            }
            System.out.println(N);
        }
    }
