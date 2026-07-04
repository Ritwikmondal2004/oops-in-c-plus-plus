import java.util.*;
public class different_paramitter {
    public static void name(String name){
        System.out.println("name= "+name);
    }
    public static void name(int a){
        System.out.println("a value= "+a);
    }
    public static void main(String[]args){
        name("ritwik");
        name(22);
    }
}
