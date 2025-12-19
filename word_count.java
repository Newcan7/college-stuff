import java.io.*;
public class word_count {
    public static void main(String[] args) throws IOException {
      BufferedReader br = new BufferedReader(new FileReader("input.txt"));
      String line,total;
      while((line=br.nextLine()!=null)){
        total+=line;
      }
      String[] arr=total.split("");
        PrinWriter pw =new PrinWriter("output.txt");
      for(i=0;i<arr.length;i++){
        pw.println(arr[i]);
          }
          pw.println("TOTAL WORDS = "+ arr.length)
    }
}