/* Question - Write a JAVA Program to take two inputs and print Quotient, Remainder.

Difficulty Level :Easy */

import java.util.Scanner;
public class main
{
    public static void main(String args[])
    {
        scanner in = new scanner(system.in);
        system.out.print("Enter an integer:");
        double num1 = in.nextDouble();
        System.out.print("Enter second integer:");
        double num2 = in.nextDouble();
        double quotient = num1 % num2;
        double remainder = num1 / num2;
        system.out.println("Quotient: "+quotient);
        system.out.println("Reaminder: "+remainder);
    }    
}

