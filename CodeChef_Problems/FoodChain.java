// problem link
// https://www.codechef.com/problems/FODCHAIN

import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);

		int t = sc.nextInt();

		while(t-- > 0){
		    int e, k;
		    e = sc.nextInt();
		    k = sc.nextInt();

		    int count = 1;

		    while(e/k > 0){
		        count++;
		        e /= k;
		    }

		    System.out.println(count);
		}

	}
}
