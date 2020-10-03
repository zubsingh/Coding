
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static int Nle(int arr[]){
        for (int i = 0; i < arr.length-1; i++) {
            int count=-1;
            for (int j = i+1; j < arr.length; j++) {
                if (arr[i] < arr[j]) {
                     //System.out.printf("%d ",arr[j]); 
                     count = arr[j];
                     break;
                }
                
            }
            System.out.printf("%d ",count);
        }
        return -1;
    }
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner in = new Scanner(System.in);
        int tcases = in.nextInt();
        for (int i = 0; i < tcases; i++) {
            int num = in.nextInt();
            int[] arr = new int[num];
            for (int j = 0; j < num; j++) {
                arr[j] = in.nextInt();
            }
            int x = Nle(arr);
            System.out.println(x);
        }
	}
}
