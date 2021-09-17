/***************************************
* EECS2031AC 21F – Lab1 *
* Author: Rahman, Mahfuz *
* Email: mafu@my.yorku.ca *
* eecs_username: mafu *
* York Student #: 217847518
****************************************/

import java.util.Scanner;

public class Hello {

 public static void main(String[] args) {
 
  Scanner scan = new Scanner(System.in); // or use bufferedReaders or Console 
  System.out.print("Please enter the name: ");
  String name = scan.next();

  System.out.print("Please enter the number: ");
  int a = scan.nextInt();

  int b = a * 2;
  int c = a * 3; 
  
  System.out.println("Hi "+name+", input is "+a+". Double and triple of "+a+" is "+b+" and "+c+", respectively");       
  System.out.printf("Hi %s, input is %d. Double and triple of %d is %d and %d, respectively" ,name,a,a,b,c);

  scan.close();

 }   
}

