import java.io.*;

class Program {
        public static void main(String[] args) throws IOException {
                BufferedReader ip = new BufferedReader(new InputStreamReader(System.in));

                String var1 = new String();
                var1 = var1+ ip.read();
                var1 = var1+(char)ip.read();
                String var2 = ip.readLine();
                System.out.println(var1);
                System.out.println(var2);

                System.out.println("Enter float ");
                float var3 = Integer.parseInt(ip.readLine());
                System.out.println(var3);
        }
}
