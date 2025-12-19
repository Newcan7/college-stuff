import java.io.*;
 public class imagesplit{
    public static void main(String[] args) throws IOException {
        FileInputStream fin = new FileInputStream("input.jpg");
        FileOutputStream f1out = new FileOutputStream("output1.txt");
        FileOutputStream f2out = new FileOutputStream("output2.txt");
        byte[] temp =new byte[100000];
        float size = File("input.jpg").length();
        temp= fin.ReadAllBytes();
        int i;
        for(i=0;i<0.9*size;i++){
            f1out.write(temp[i]);
        }
        for(;i<size;i++){
            f2out.write(temp[i]);
        }
        fin.close();
        f1out.close();
        f2out.close();
        System.out.println("total bytes copied: "+count);
    }
}