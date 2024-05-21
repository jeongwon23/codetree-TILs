public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        int a = 1, b = 2, c = 3;
        int sum=0;

        sum=a+b+c;
        a = b = c = sum;
        System.out.println(a + " " + b + " " + c);
    }
}