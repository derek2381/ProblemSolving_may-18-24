// problem link
// https://www.codechef.com/problems/THREEFR

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
		    int a, b, c;
		    a = sc.nextInt();
		    b = sc.nextInt();
		    c = sc.nextInt();

		    if((a + b) == c || (b+c) == a || (a+c) == b){
		        System.out.println("yes");
		    }else{
		        System.out.println("no");
		    }
		}

	}
}
