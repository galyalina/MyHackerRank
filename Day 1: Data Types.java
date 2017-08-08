import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
	
    public static void main(String[] args) {
        int i = 4;
        double d = 4.0;
        String s = "HackerRank ";
		
        Scanner scan = new Scanner(System.in);
        int inputInt = scan.nextInt();
        scan.nextLine();  // Consume newline left-over
        double inputFloat = scan.nextDouble();
        scan.nextLine();  // Consume newline left-over
        String inputString = scan.nextLine();

        System.out.println(i + inputInt);
        System.out.println(d + inputFloat);
        System.out.println(s + inputString);        
        scan.close();
    }
    
}
