import java.io.*;
public class reverse_display{
  public static void main(String[] args) throws IOException{
FileInputStream fin =new FileInputStream("input.txt");
FileOutputStream fout =new FileOutputStream("output.txt");
int[] arr;
int ch,i=0;
while ((ch=fin.read())!=-1){
  arr[i]=ch;
  i++;
}
for(i=arr.length;i>=0;i++){
  fout.write(arr[i]);
}
fout.close();
fin.close();
  }
}