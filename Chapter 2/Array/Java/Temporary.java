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

        arrPrint(arr);


    }

    static void arrPrint(int arr[]){

        System.out.print("");
        System.out.print("Tiek izvaditi masiva elementi: ");
        for (int i = 0; i < arr.length; i++)
        {
            System.out.print(arr[i]);
            System.out.print(" ");

        }
    }

}