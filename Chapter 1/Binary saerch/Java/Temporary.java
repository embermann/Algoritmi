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

        System.out.print("Element position: ");
        System.out.print(binary_search(arr, length, item));

    }

    static int binary_search(int arr[], int length, int item){

        int low = 0;
        int high = length - 1;

        while (low <= high)
        {
            int mid = ((low + high) / 2);
            int guess = arr[mid];
            if (guess == item)
            {
                return mid;
            }
            else
            {
                if (guess > item)
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
        }
        return -1;
    }
}