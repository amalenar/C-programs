public class Static1 {

    static int a;
    int b;
    public static void main(String[] args) {

         


        Static1  h2 = new Static1();
        Static1 h1 = new Static1();

        h1.a = 50;
        h2.a = 60;
        h1.b = 65;
        h2.b = 70;

        System.out.println(h1.a);
        System.out.println(h1.b);
        System.out.println(h2.b);
    }
}
