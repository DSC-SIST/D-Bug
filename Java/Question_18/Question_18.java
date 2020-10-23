/* 
    Question - Write a JAVA Program to Transpose a matrix of 3 Rows and 3 Columns. Print the matrix without Transpose and with Transpose. (Both way)

    Difficulty Level: HARD
*/

public class MatrixTranspose 
{  
    public static void main(String args[])
    {  
        int original[][]={{4,5,6},{2,4,3},{3,4,5};    
        int transpose[][]= int[3][3];  
        for(int i=0;i<3;i++)
        {    
            for(int j=0;j<3;j++)
            {    
                Transpose[i][j]=original[i][j];  
            }    
        }    
        system.out.println("Printing Matrix without Transpose:");  
        for(int i=0;i<3;i++)
        {    
            for(int j=0;j<3;j++)
            {    
                system.out.print(original[i][j]+" ");    
            }    
            system.out.println();   
        }    
        system.out.println("Printing Matrix After Transpose:");  
        for(int i=0;i<3;i++)
        {    
            for(int j=0;j<3;j++)
            {    
                system.out.print(Transpose[i][j]+" ");    
            }       
            system.out.println();    
        }    
    }
}
