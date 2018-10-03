    /***************************************************** 
    File name��Quicksort 
    Author��Zhengqijun    Version:1.0    Date: 2016/11/04 
    Description: ��������п������� 
    Funcion List: ʵ�ֿ��������㷨 
    *****************************************************/  
      
    #include <stdio.h>  
    #include <stdlib.h>  
      
    #define BUF_SIZE 10  
      
    /************************************************** 
     *��������display 
     *���ã���ӡ����Ԫ�� 
     *������random - ��ӡ�����飬T - ����Ԫ�ظ��� 
     *����ֵ���� 
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
     *��������swap 
     *���ã�������������ֵ 
     *������������������ 
     *����ֵ���� 
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
     *��������quicksort 
     *���ã����������㷨 
     *������ 
     *����ֵ���� 
     ************************************/  
    void quicksort(int random[], int T, int begin, int end)  
    {  
        int i, j;  
      
        if(begin < end)  
        {  
            i = begin + 1;  // ��random[begin]��Ϊ��׼������˴�random[begin+1]��ʼ���׼���Ƚϣ�  
            j = end;        // random[end]����������һλ  
                
            while(i < j)  
            {  
                if(random[i] > random[begin])  // ����Ƚϵ�����Ԫ�ش��ڻ�׼�����򽻻�λ�á�  
                {  
                    swap(&random[i], &random[j]);  // ����������  
                    j--;  
                }  
                else  
                {  
                    i++;  // �����������һλ���������׼���Ƚϡ�  
                }  
            }
      
            /* ����whileѭ����i = j�� 
             * ��ʱ���鱻�ָ����������  -->  random[begin+1] ~ random[i-1] < random[begin] 
             *                           -->  random[i+1] ~ random[end] > random[begin] 
             * ���ʱ������random�ֳ��������֣��ٽ�random[i]��random[begin]���бȽϣ�����random[i]��λ�á� 
             * ���random[i]��random[begin]���������������ָ�ֵ������Դ����ƣ�ֱ�����i = j�������������˳��� 
             */  
      
            if(random[i] >= random[begin])  // �������Ҫȡ��">="����������Ԫ������ͬ��ֵʱ������ִ���  
            {  
                i--;  
            }  
      
            swap(&random[begin], &random[i]);  // ����random[i]��random[begin]  
              
            quicksort(random, T, begin, i);  
            quicksort(random, T, j, end);  
        }  
        return 0; 
    }
      
    // ������  
    int main()  
    {  
        int n;  
        int random[BUF_SIZE] = {12,85,25,16,34,23,49,95,17,61};  
        int T = BUF_SIZE;  
          
        printf("����ǰ������\n");  
        display(random, T);  
          
        quicksort(random, T, 0, T-1);  // ��������  
          
        printf("����������\n");  
        display(random, T);  
          
        return 0;  
    }  

