import java.util.Scanner;
public class armstrong
{
    public static void main(String[] args)
    {
    int number;
    Scanner sc= new Scanner(System.in);
    while(true)
    {
    System.out.println("Enter number :");
    number = sc.nextInt();
    if(armstrong(number))
        System.out.println("Armstrong number detected");
    else
        System.out.println("NOOO Armstrong number detected");
    }
    }
    public static boolean armstrong(int n)
    {
        int nd=0,nc=n,rev=0,nnn=n;;
        double sum=0;
        while(nc>0)
        {
            nd++;
            rev= rev*10 +nc%10;
            nc/=10;
        }
        while(n>0)
        {
         sum= sum + Math.pow((n%10),nd);
         n/=10;
        }
        if(nnn==sum)
        return true;
        else
        return false;
    }
}
