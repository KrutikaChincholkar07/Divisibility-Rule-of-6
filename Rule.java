import java.util.Scanner;

public class DivisibleBy6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int num = sc.nextInt();

        boolean div2 = (num % 2 == 0);

        int sum = 0, temp = num;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        boolean div3 = (sum % 3 == 0);

        if (div2 && div3)
            System.out.println(num + " is divisible by 6");
        else
            System.out.println(num + " is not divisible by 6");
    }
}
