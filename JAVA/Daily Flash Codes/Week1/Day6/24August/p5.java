/*
0	0	0	0
0	0	0	0
0	0	0	0
0	0	0	0
*/

class Program {
    public static void main(String[] args) {
        for(int i=1; i<=16; i++) {
            System.out.print('0'+"\t");
            if(i%4==0)
              System.out.println();
        }
    }
}
