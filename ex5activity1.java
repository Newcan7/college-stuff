import java.util.Scanner;

class ex5activity1 {
    public static void main(String[] args) {
    Scanner S = new Scanner(System.in);
     int a;
   boolean isPrime = true;

   System.out.print("Enter a number: ");
     a = S.nextInt();

   if (a <= 1) {
       isPrime = false;
        } else {
            for (int i = 2; i <= Math.sqrt(a); i++) {
      if (a % i == 0) {
            isPrime = false;
       break;
           }
        }
        }

        if (isPrime)
         System.out.println("Prime");
        else
       System.out.println("Composite");
    }
}
