//find maximum among three
class TernaryDemo {
    public static void main(String[] args) {
        int x = 26, y=40,z=15;
        int max = x > y ? (x>z ? x : z) : (y>z ? y : z);
        System.out.println("maximum is "+ max);
    }
}
