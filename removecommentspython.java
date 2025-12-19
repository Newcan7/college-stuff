import java.io.*;
public class removecommentspython{
    public static void main(String[] args) throws IOException{
        BufferedReader br= new BufferedReader(new FileReader("source.py"));
        PrintWriter pw= new PrintWriter("output.py");
        String line;
        int i;
        while((line=br.readLine()!=null)){
            for(i=0;i<=)
                break;
            else
                pw.println(line+"\n");
        }
        br.close();
        pw.close();
    }
}