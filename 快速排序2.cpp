    /***************************************************** 
    File name：Quicksort 
    Author：Zhengqijun    Version:1.0    Date: 2016/11/04 
    Description: 对数组进行快速排序 
    Funcion List: 实现快速排序算法 
    *****************************************************/  
      
    #include <stdio.h>  
    #include <stdlib.h>  
      
    #define BUF_SIZE 10  
      
    /************************************************** 
     *函数名：display 
     *作用：打印数组元素 
     *参数：random - 打印的数组，T - 数组元素个数 
     *返回值：无 
     **************************************************/  
    void display(int random[], int T)  
    {  
        int i;  
      
        for(i = 0; i < T; i++)  
        {  
            printf("%3d", random[i]);  
        }  
        printf("\n");  
      
        return ;  
    }  
      
    /******************************** 
     *函数名：swap 
     *作用：交换两个数的值 
     *参数：交换的两个数 
     *返回值：无 
     ********************************/  
    void swap(int *a, int *b)    
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
    void quicksort(int random[], int T, int begin, int end)  
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
              
            quicksort(random, T, begin, i);  
            quicksort(random, T, j, end);  
        }  
        return 0; 
    }
      
    // 主函数  
    int main()  
    {  
        int n;  
        int random[BUF_SIZE] = {12,85,25,16,34,23,49,95,17,61};  
        int T = BUF_SIZE;  
          
        printf("排序前的数组\n");  
        display(random, T);  
          
        quicksort(random, T, 0, T-1);  // 快速排序  
          
        printf("排序后的数组\n");  
        display(random, T);  
          
        return 0;  
    }  

