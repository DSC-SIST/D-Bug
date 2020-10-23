/* 
    Question - Java program to print the following sample pattern.

    Difficulty Level: Hard 
*/

public class Main
{  
    public static void main(String []args)
    {  
        int i,j,lines=5; 
        for(i=1; i<=lines; i++)
        {                                                   // this loop is used to print the lines
            for(j=lines; j>=1; j++)
            {                                               // this loop is used to print numbers in a line  
                if(j ==i )
                    System.out.print(j + i);
                else
                    System.out.print("*");    
            }  
            System.out.println(" ");  
        }  
    }
}
