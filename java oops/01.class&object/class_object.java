import java.util.*;
public class class_object {
    public static int add(int a, int b){
        return a+b;
    }
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        Scanner sc2=new Scanner(System.in);
        int b=sc2.nextInt();
        int result=add(a,b);
        System.out.println(result);

    }
}
