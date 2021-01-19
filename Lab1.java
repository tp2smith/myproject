import java.util.Scanner;

public class Lab1 {

 public static void main(String[] args) {
 
  Scanner scan = new Scanner(System.in); // or use bufferedReaders or Console 
  System.out.print("Please enter the name: ");
  String name = scan.next();

  System.out.print("Please enter the number: ");
  int a = scan.nextInt();

  int b = a * 2;
  int c = a*3; 
  
  System.out.println("Hi ");       
  System.out.printf("");

 }   
}