import java.util.ArrayList;
class Veer
// finding intersection  element of 2 sorted array 
// best  approach with minimum time complexity 
{
    public static void main(String[] args)
    {
        ArrayList<Integer> arr = new ArrayList<>();
        int i=0;
        int j=0;
        int element=0;
        int arr1[]={2,4,6,8};
        int arr2[]={2,4,6,6};
        int n =arr1.length;
        int m =arr2.length;
        while(i<n && j<m )
        {
            if(arr1[i]==arr2[j])
            {

                arr.add(arr1[i]);
                i++;
                j++;



            }
            else if(arr1[i]<arr2[j])
            {
                i++;

            }
            else
            {
                j++;
            }
        }
        System.out.println(arr);



    }
}
