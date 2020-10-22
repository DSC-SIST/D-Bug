/* Question - Write a JAVA Program to count the number of characters in a given string.

Difficulty Level : Medium */

import java.util.Scanner;
public class Main    
{    
    public static void main(String[] args)
    {    
        Scanner reader = new Scanner(System.in);
        System.out.print("Enter a String: ");
        String str = reader.nextString(); 
        int count;  
        for(int i = 0; i < str.length(); i++)
        {    
            if(str.charAt(i) != ' ')    
                count++;    
        }     
        System.out.println("Total number of characters in a string: " + count);    
    }    
}   

