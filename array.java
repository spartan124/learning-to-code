public class arrayj
public static void main(String []args)
{
    int [] number= new int number[10];
    int i=0;
    
    while (i<10){
        number[i]=i+100;
        i=i+1;
    }
    i=0;
    while (i<10){
        System.out.format("number[%d] =%d\n", i, number[i]);
        i=i+1;
    }
}
