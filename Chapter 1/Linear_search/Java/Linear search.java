package com.company;
import java.util.Scanner;


public class Temporary {

    public static void main(String[] args) {

        int item;
        int arr[];


        Scanner in = new Scanner(System.in);


        System.out.print("Input a array length: ");
        int length = in.nextInt();

        arr = new int[length];

        for (int i = 0; i < length; i++){

            System.out.print("Input array element: ");
            arr[i] = in.nextInt();

        }

        System.out.print("Input an element tha you want to find: ");
        item = in.nextInt();

        System.out.print(linear_search(arr, length, item));


    }

    static int linear_search(int arr[], int length, int item){

        for (int i = 0; i < length; i++)
        {
            if (arr[i] == item)
            {
                return i;
            }
        }
        return 0;

    }
}