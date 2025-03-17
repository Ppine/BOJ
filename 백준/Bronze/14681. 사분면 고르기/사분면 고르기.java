import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int x = scanner.nextInt();

        scanner.nextLine();

        int y = scanner.nextInt();

        scanner.close();

        if((x*y)>0){
            if(x>0){
                System.out.println("1");
            }
            else{
                System.out.println("3");
            }
        }
        else{
            if(x>0){
                System.out.println("4");
            }
            else{
                System.out.println("2");
            }
        }
    }
}
