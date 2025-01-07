public class MultipleCatchExample {
    public static void main(String[] args) {
        try {
            // Simulating an exception
            int[] arr = {10, 20, 30};
            System.out.println(arr[5]); // ArrayIndexOutOfBoundsException
        } 
        catch (ArithmeticException e) {
            System.out.println("ArithmeticException: Cannot divide by zero.");
        } 
        catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("ArrayIndexOutOfBoundsException: Array index is out of range.");
        } 
        catch (NullPointerException e) {
            System.out.println("NullPointerException: Attempted to access a null object.");
        } 
        catch (Exception e) {
            System.out.println("Generic Exception: Something went wrong!");
        }
    }
}

//using nested try blocks

/*public class NestedTryExample {
    public static void main(String[] args) {
        try {
            // Outer try block
            System.out.println("Outer try block starts.");

            try {
                // Inner try block
                System.out.println("Inner try block starts.");
                int result = 10 / 0;  // ArithmeticException
                System.out.println("Result: " + result);
            } catch (ArithmeticException e) {
                // Handling exception for the inner try block
                System.out.println("Inner catch: ArithmeticException caught.");
            }

            // Code after the inner try-catch
            int[] arr = {1, 2, 3};
            System.out.println(arr[5]);  // ArrayIndexOutOfBoundsException

        } catch (ArrayIndexOutOfBoundsException e) {
            // Handling exception for the outer try block
            System.out.println("Outer catch: ArrayIndexOutOfBoundsException caught.");
        }

        System.out.println("Program continues executing.");
    }
}
*/
