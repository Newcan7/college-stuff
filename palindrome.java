import java.util.Scanner;
public class palindrome
{
    public static void main(String[] args)
    {
    String str;
    Scanner sc= new Scanner(System.in);
    System.out.println("Enter a Sentence : ");
    str = sc.nextLine();
    String rev = "";
    int i;
    for(i=str.length()-1;i>=0;i--)
    {
        char ch = str.charAt(i);
        rev+= ch;
        }
          System.out.println(str);
    System.out.println(rev);
    if(str.equals(rev))
   System.out.println("PALINDROME");
    }
 
  }
