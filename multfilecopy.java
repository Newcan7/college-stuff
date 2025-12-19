import java.io.*;
public class multfilecopy{
    public static void main(String args[]) throws IOException{
        String outfile= args[args.length-1];
        FileOutputStream fout= new FileOutputStream(outfile);
        int ch;
        for(int i =0;i<args.length-1;i++)
        {
            FileInputStream fis = new FileInputStream(args[i]);
             while ((ch = fis.read()) != -1)
            {
                fout.write(ch);
            }
            fis.close();
        }
        fout.close();
    }
}