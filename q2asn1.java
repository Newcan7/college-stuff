import java.util.Scanner;

class FACTORIAL {
    int factorial(int n) {
        int fact = 1;
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        return fact;
    }
}

public class q2asn1 {
    public static void main(String args[]) {
        double x = 0.1;
        double e = 1.0;
        int i, n;

        Scanner S = new Scanner(System.in);
        FACTORIAL F = new FACTORIAL();

        System.out.print("Enter value of n: ");
        n = S.nextInt();

        for (i = 1; i <= n; i++) {
            e += Math.pow(x, i) / F.factorial(i);  
        }

        System.out.println("Value of e^x : " + e);
       
    }
}
