import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();        // Read number of elements
        int[] arr = new int[n];
        
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();   // Read array elements
        }
        
        // Sort the array in ascending order
        Arrays.sort(arr);
        
        // Print the sorted array
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}

        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
    
