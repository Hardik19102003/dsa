package com.HardikPatel;

import java.util.Arrays;

public class Maths {
    public static void main(String[] args) {
        int[] arr = {1,2,4,3,6,6};
        System.out.println("mean = "+ mean(arr));
        System.out.println("median ="+ median(arr));
        System.out.println("mode ="+ mode(arr));
    }

    static int mode(int[] array){
        int maxValue = 0, maxCount = 0;

        for (int j = 0; j < array.length; j++) {
            int count = 0;
            for (int i = 0; i < array.length; i++) {
                if (array[j] ==array[i]) {
                    count++;
                }
            }

            if (count > maxCount) {
                maxCount = count;
                maxValue = array[j];
            }
        }
        return maxValue;
    }

    static float median(int[] array){
        Arrays.sort(array);
        int start = 0;
        int end = array.length - 1;
        float mid;
        start = (start + end)/2;
        // When we have even elements in array
        if(array.length%2==0){
            mid = (float)(array[start]+array[start+1])/2;
        }
        else{
            mid = array[start]; // for odd elements in array
        }
        return mid;
    }

    // average of array
    static float mean(int[] array){
        int sum = 0;
        for (int j : array)
            sum = sum + j;

        return (float) sum/(float) array.length;
    }
}
