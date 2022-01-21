import java.util.Scanner;
public class Exercise1_4 {
    public static void main(String args[]){
        Scanner sc =  new Scanner(System.in);
        int n = sc.nextInt();
        int result = 0;

        //Use while loop check the number is Armstrong or not.
        //store the output(1 or 0) in result variable.
        int input_number=n;
        int length = 0;
        long temp = 1;
        while (temp <= n) {
        length++;
        temp *= 10;
        }
        int a[] = new int[length];
        for(int i=0;i<length;i++){
            a[i]=(int) (n/Math.pow(10,length-(i+1)));
            n=(int) (n%Math.pow(10, length-(i+1)));
        }

        int sum=0;
        for(int i=0;i<length;i++){
            sum+=Math.pow(a[i],length);
        }

        if(input_number==sum){
            result=1;
            System.out.println(result);
        }
        else{
            System.out.println(result);
        }

    }
}
