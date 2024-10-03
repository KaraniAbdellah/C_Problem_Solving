
import java.util.Scanner;
import java.util.ArrayList;


public class Keyboard {
	
	static int find_char(char[] letters, char c) {
		int index = 0;
		for (int i = 0; i < letters.length; i++) {
			if (letters[i] == c) {
				index = i; 
			}
		}
		return index;
	}
	

	public static void main(String args[]) {
		
		// get the variables
		Scanner in = new Scanner(System.in);
		char c = in.next().charAt(0);
		String str = in.next();
		in.close();
		
		// define the keyboard
		int size = str.length();
		char[] re = new char[size];
		int part_s = -1;
		if (c == 'L') part_s = 1;
		char[] letters = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 
                  'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';',
                  'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'};
        
        // find the right message
        for (int i = 0; i < size; i++) {
        	int index = find_char(letters, str.charAt(i));
        	re[i] = letters[index + part_s];
        }
		String res_str = new String(re);
		System.out.println(res_str);
		
	}
}










