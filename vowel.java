import java.util.Scanner;
public class vowel
{
    public static void main(String[] args)
    {
    String str;
    Scanner sc= new Scanner(System.in);
    System.out.println("Enter a Sentence : ");
      str = sc.nextLine();
    int v=0,c=0,a=0,i;
    for(i=0;i<str.length();i++)
    {
        if(str.charAt(i)=='A' || str.charAt(i)=='E' || str.charAt(i)=='I' || str.charAt(i)=='O' || str.charAt(i)=='U' || str.charAt(i)=='a' || str.charAt(i)=='e' || str.charAt(i)=='i' || str.charAt(i)=='o' || str.charAt(i)=='u' )
        v++;
        else
        c++;
    }
    a=v+c;
    System.out.println("Number of vowels are ; "+ v);
    System.out.println("Number of Consonants are : "+ c);
        System.out.println("Number of aplhabets are : "+ a);

}
}