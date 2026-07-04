import java.util.*;

public class method {
    public static void playMusic(){
        System.out.println("play the music");
    }
    public static void buy(int cost){
        if(cost>20){
            System.out.println("dont buy pen="+cost);
        }
        else{
            System.out.println("Buy pen="+cost);
        }
    }
    public static void main(String[]args){
        method obj=new method();
        Scanner sc=new Scanner(System.in);
        System.out.println("enter cost= ");
        int cost=sc.nextInt();
        obj.playMusic();
        obj.buy(cost);



    }
}
