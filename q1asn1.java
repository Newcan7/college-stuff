import java.io.*;
import java.util.Scanner;

class IS_PRIME {
    int is_prime(int n) {
        if (n <= 1) {
            return 0;
        }
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                return 0;
            }
        }
        return 1;
    }
}

public class q1asn1 {
    public static void main(String args[]) throws IOException {
        int i, n, ncount = 0, flag;

        Scanner S = new Scanner(System.in);
        IS_PRIME ip = new IS_PRIME();

        System.out.print("Enter n (2 - 2000): ");
        n = S.nextInt();

        if (n < 2 || n > 2000) {
            System.out.println("Invalid input! n must be between 2 and 2000.");
            return;
        }

        System.out.println("Prime numbers <= " + n + " --->");

        for (i = 2; i <= n; i++) {
            flag = ip.is_prime(i);
            if (flag == 1) {
                System.out.println(i + " ");
                ncount++;
            }
        }

        System.out.println("\nTotal prime numbers found: " + ncount);
    }
}
