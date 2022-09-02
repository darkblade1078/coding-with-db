public class index {

    public static void main(String[] args) {

        int number1 = 10;
        int number2 = 25;

        // can use the result of an equation as an variable
        int result1 = 10 * 5;

        // can use variables as well
        int result2 = number1 + number2;

        // statement is true since number1 is equal too number1
        if (number1 == number1) {
            System.out.println("it works");
        }

        // is true because number1 and number2 is equal to 25
        if (number1 + number2 == 35) {
            System.out.println("it's true");
        }

        // is false because number1 is not equal to 11
        if (number1 == 11) {
            System.out.println("it's not true");
        }

        // is false because result1 does not equal to 49
        if (result1 == 49) {
            System.out.println("this is the if statement");
        }
        // since the first statement did not pass, it will run this one
        else {
            System.out.println("this is the else statement");
        }

        // false because result1 is not equal to 49
        if (result1 == 49) {
            System.out.println("first if");
        }

        // this will run because if statement 1 failed and result1 and result2 are equal to 35 and 50
        if(result1 == 35 && result2 == 50) {
            System.out.println("second if");
        }
        // this statement will not run since if statement 2 is true
        else {
            System.out.println("else statement");
        }
    }
}