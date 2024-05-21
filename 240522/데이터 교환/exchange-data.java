public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        int a=5,b=6,c=7;
        int tempA,tempB;
        
        int temp = a; // temp에 a의 값을 저장합니다.
        a = c;        // a에 c의 값을 할당합니다.
        c = b;        // c에 b의 값을 할당합니다.
        b = temp;

        System.out.println(a); 
        System.out.println(b); 
        System.out.println(c);

    }
}