public class arrayjava{
public static void main(String []args)
{
    int [] number= new int[10];
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
    {
    System.out.println("The End\n");
    
    }
    }
}
