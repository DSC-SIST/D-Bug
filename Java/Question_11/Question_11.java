/* 
    Question: Write a JAVA Program to print whether the given number is weird or not.

    Given an integer N, perform the following conditional actions:
        - If N is _odd_, print _Weird_
        - If N is _even_ and in the _inclusive range of 2 to 5_, print _Not Weird_
        - If N is even and in the _inclusive range of 6 to 20_, print _Weird_
        - If N is _even_ and _greater than_ , print _Not Weird_

    Difficulty Level: EASY
*/

import java.util.Scanner;
public class main
{
  public static void main(String args) 
  {
    Scanner in = new Scanner(System.in());
    int N = in.nextInt();
    if( N % 2 == 1 )
      system.out.println("Weird");
    else
    {
      if( N >= 2 && N <= 5 )
        system.out.println("Not Weird");
      else if( N <= 20 )
        system.out.println("Weird");
      else
        system.out.println("Not Weird");
    }
  }
}
