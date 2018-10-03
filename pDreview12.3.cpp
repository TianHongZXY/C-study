    #include<stdio.h>
	void display(int random[], int m)  
    {  
        int i;  
      
        for(i = 0; i < m; i++)  
        {  
            printf("%d  ", random[i]);  
        }  
        printf("\n");  
      
        return ;  
    }  
	int swap(int *a, int *b)    
    {  
        int temp;  
      
        temp = *a;  
        *a = *b;  
        *b = temp;  
      
        return 0;  
    }  
      
    /************************************ 
     *函数名：quicksort 
     *作用：快速排序算法 
     *参数： 
     *返回值：无 
     ************************************/  
    int quicksort(int random[], int x, int begin, int end)  
    {  
        int i, j;  
      
        if(begin < end)  
        {  
            i = begin + 1;  // 将random[begin]作为基准数，因此从random[begin+1]开始与基准数比较！  
            j = end;        // random[end]是数组的最后一位  
                
            while(i < j)  
            {  
                if(random[i] > random[begin])  // 如果比较的数组元素大于基准数，则交换位置。  
                {  
                    swap(&random[i], &random[j]);  // 交换两个数  
                    j--;  
                }  
                else  
                {  
                    i++;  // 将数组向后移一位，继续与基准数比较。  
                }  
            }
      
            /* 跳出while循环后，i = j。 
             * 此时数组被分割成两个部分  -->  random[begin+1] ~ random[i-1] < random[begin] 
             *                           -->  random[i+1] ~ random[end] > random[begin] 
             * 这个时候将数组random分成两个部分，再将random[i]与random[begin]进行比较，决定random[i]的位置。 
             * 最后将random[i]与random[begin]交换，进行两个分割部分的排序！以此类推，直到最后i = j不满足条件就退出！ 
             */  
      
            if(random[i] >= random[begin])  // 这里必须要取等">="，否则数组元素由相同的值时，会出现错误！  
            {  
                i--;  
            }  
      
            swap(&random[begin], &random[i]);  // 交换random[i]与random[begin]  
              
            quicksort(random, x, begin, i);  
            quicksort(random, x, j, end);  
        }  
        return 0; 
    }
    
    
int main()
{
	int T;
	scanf("%d",&T);
	int num1[3];
	int n,k;
	int i;
	int j;
	int output[5];
	for(i=0;i<T;i++){
		scanf("%d %d %d",&num1[0],&num1[1],&num1[2]);
		scanf("%d %d",&n,&k);
		int random[n];
		for(j=1;j<n;j++){
			random[0]=num1[0];
			random[j]=(random[j-1]*num1[1]+num1[2])%1001;
			}
		//	display(random, n);
			quicksort(random, n, 0, n-1);
			
		//	display(random, n);
			output[i]=random[n-k];
	}
	for(i=0;i<T;i++){
	printf("%d\n",output[i]);
	}
	return 0;
}









