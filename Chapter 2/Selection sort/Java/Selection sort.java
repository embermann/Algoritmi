package com.company;
import java.util.Scanner;


public class Temporary {

    public static void main(String[] args) {

        int arr[];


        Scanner in = new Scanner(System.in);


        System.out.print("Input a array length: ");
        int length = in.nextInt();

        arr = new int[length];

        for (int i = 0; i < length; i++) {

            System.out.print("Input array element: ");
            arr[i] = in.nextInt();

        }

        selection_sort(arr, length);
        arrPrint(arr);


    }

    static void selection_sort(int arr[], int length){

        for (int i = 0; i < length ; i++)
        {
            int smallest = arr[i];
            int smallest_index = i;


            for (int a = i; a < length ; a++)
            {
                if (smallest > arr[a])
                {
                    smallest = arr[a];
                    smallest_index = a;
                }
            }

            int temp = arr[i];
            arr[i] = arr[smallest_index];
            arr[smallest_index] = temp;
        }

    }

    static void arrPrint(int arr[]){

        for (int i = 0; i < arr.length; i++){

            System.out.println(arr[i]);

        }

    }

}