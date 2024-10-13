

import java.util.Scanner;

public class Even_Odds {

	public static void print_arrays(long[] arr1, long[] arr2) {
		System.out.printf("num_even: ");
		for (int i = 0; i < arr1.length; i++) System.out.printf("%d ", arr1[i]);
		System.out.println("");
		
		System.out.printf("num_odd: ");
		for (int i = 0; i < arr2.length; i++) System.out.printf("%d ", arr2[i]);
		System.out.println("");
	}

	public static void main(String[] args) {
		long k, n;
		Scanner in = new Scanner(System.in);		
		n = in.nextLong(); k = in.nextLong();
		// System.out.printf("n = %d & k = %d%n", n, k);
		
		long num_even = n / 2;
		long num_odd = n - num_even;
		long[] even_nums = new long[(int) num_even];
		long[] odd_nums = new long[(int) num_odd];
		
		int count = 0;
		for (int i = 1; i < n + 1; i++) {
			if (i % 2 == 0) {
				even_nums[count] = i; count++;
			}
		}
		count = 0;
		for (int i = 1; i < n + 1; i++) {
			if (i % 2 != 0) {
				odd_nums[count] = i; count++;
			}
		}
		
		// print the arrays
		// print_arrays(even_nums, odd_nums);
		
		// get the result
		if (k - num_odd <= 0) System.out.printf("%d%n", odd_nums[(int)k - 1]);
		else System.out.printf("%d%n", even_nums[(int)(k - num_odd - 1)]);
		
	}
}













