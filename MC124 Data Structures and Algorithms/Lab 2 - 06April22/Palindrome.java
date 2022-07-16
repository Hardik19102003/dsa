package com.HardikPatel;

import java.util.Arrays;

public class Palindrome {
    public static void main(String[] args) {
       int[] arr = {135 , 456 , 2332 , 445566};
        System.out.println("Actual array : ");
        System.out.println(Arrays.toString(arr));
        System.out.println("\nReverse array : ");
        System.out.println(Arrays.toString(reverse(arr)));

        //enhanced for loop
        for (int j : arr) {
            check(j);
        }

    }

    static void check(int num){
       if(num==reverseNum(num)) {
           System.out.println("Number " + num + " is palindrome");
       }
       else {
           System.out.println("Number " + num + " is Not palindrome");
       }
    }

    static int reverseNum(int num) {
        int remainder ,sum=0;
        while(num!=0){
            remainder = num%10;
            sum = (sum * 10) + remainder;  // we are adding remainder in 10 times sum
            num = num/10;
        }
      return sum;
    }

    static void swap(int[] array,int start,int end){
        int temp = array[start]; //simply swap array's last element and first element
        array[start] = array[end]; // after swap increment start and decrement end
        array[end] = temp;
    }

    static int[] reverse(int[] array){
        int start = 0;
        int end = array.length - 1;
        while (start<=end){
            swap(array,start,end);
            start++;
            end--;
        }
        return array;
    }
}
