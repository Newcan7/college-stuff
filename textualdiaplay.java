import java.io.*;
public class textualdiaplay {
    public static void main(String[] args) throws IOException {
      FileInputStream fin= new FileInputStream("source.txt");
      FileOutputStream fout = new FileOutputStream("target.txt");
      int ch;
      while((ch=fin.read())!= -1){
        if(32<=ch && ch>=126){
            fout.write(ch);
        }
      }
      fin.close();
      fout.close();

    }
}