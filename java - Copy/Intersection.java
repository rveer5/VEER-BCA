import java.util.ArrayList;
class Intersection
// finding intersection of 2 sorted array .
// not a good approach .
// time complexity is not efficient .
// good approach in new_logic file.

{
    public static void main(String[] args)
    {
        ArrayList<Integer> new_arr=new ArrayList<>();
        int element=0;
        int arr[]={2,4,6,8};
        int arr2[]={2,4,6,6};
        // System.out.println(arr.length);
        int size=arr.length;

        for(int i=0;i<size;i++)
        {
            element=arr[i];
            {
                for(int j=0;j<size;j++)
                {
                    if(element<arr2[j])
                    {
                        break;
                    }
                    if(element==arr2[j])
                    {
                        new_arr.add(element);
                        arr2[j]=-2;
                        break;
                        


                    }
                }
            }
        }

        System.out.println(new_arr);

    }
}

