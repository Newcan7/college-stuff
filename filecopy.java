import java.io.*;
 public class filecopy{
    public static void main(String[] args) throws IOException {
        FileInputStream fin = new FileInputStream("input.txt");
        FileOutputStream fout = new FileOutputStream("output.txt");
        int ch,count=0;
        while((ch=fin.read())!=-1)
        {
            fout.write(ch);
            count++;
        }
        fin.close();
        fout.close();
        System.out.println("total bytes copied: "+count);
    }
}