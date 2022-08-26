//this is the folder your file is stored, do not change it.
package lesson1;

//your main class
public class index {

	//the main function that will run when you start the file
	public static void main(String[] args) {
		
	    //whole number
	    int number = 1;

	    //can have decimals
	    float fancy_number1 = 2.6f;

	    //like floats, but doesn't need the f
	    double fancy_number2 = 2.5;

	    //use for really big numbers
	    long long_number = 294206942;
	    
	    //use for single letters
	    char letter = 'K';

	    //can be equal to true or false
	    boolean check = true;

	    //use for text
	    String name = "Bobby J";
		
		//System.println() is your output, every time you want to output something, you use that
		System.out.println("Hello, my name is " + name + "!!!!!");
		
		System.out.println(number);
		System.out.println(fancy_number1);
		System.out.println(fancy_number2);
		System.out.println(long_number);
		System.out.println(letter);
		System.out.println(check);
		System.out.println(name);
		
		//alternative if you don't want to go to a new line 
		System.out.print("hello");
		System.out.print("hello");
	}
}
