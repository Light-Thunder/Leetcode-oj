/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    
    int i=0;
    int j=0;
    int* a=malloc(sizeof(int)*2);
    int temp=0;
    for(i=0;i<numsSize;i++)
        {
            temp=0;
            for(j=i+1;j<numsSize;j++)
            {
                temp=*(nums+i)+*(nums+j);
                if(temp==target)
                    {
                        a[0]=i;
                        a[1]=j;
                    }
            }
        }
    return a;
}