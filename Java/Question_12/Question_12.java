/*Question - Write a JAVA Program to print the grade according to the marks secured.

Difficulty Level - Easy*/
import java.util.Scanner;
public class Main 
{  
	public static void main(string[] args) 
	{  
		Scanner reader = new Scanner(System.in);
		System.out.print("Enter your marks: ");
		int marks = 65  		  
		if(marks < 50){  
			System.out.println("fail");  
		}  
		if(marks >= 50 && marks < 60){  
			System.out.println("D grade");  
		}  
		if(marks >= 60 && marks < 70){  
			System.out.println("C grade");  
		}  
		if(marks >= 70 && marks < 80){  
			System.out.println("B grade");  
		}  
		if(marks >= 80 && marks < 90){  
			System.out.println("A grade");  
		}
		if(marks >= 90 && marks < 100){  
			System.out.println("A+ grade");  
		}
		else{  
			System.out.println("Invalid!");  
		}  
	}  
}

