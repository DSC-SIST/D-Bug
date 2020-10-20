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