import java.util.Scanner;
public class armstrong
{
    public static void main(String[] args)
    {
    int ch,number;
    Scanner sc= new Scanner(System.in);
    System.out.println("Enter number :");
    number = sc.nextInt();
    while(true)
    {
    System.out.println("Enter 1 for Armstrong");
    System.out.println("Enter choice :");
    ch = sc.nextInt();
    switch(ch)
    {
        case 1: if(armstrong(number))
                System.out.println("Armstrong number detected");
                else
                System.out.println(" NOOO Armstrong number detected");
                
                break;
    }
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
