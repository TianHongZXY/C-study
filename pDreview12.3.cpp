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
     *��������quicksort 
     *���ã����������㷨 
     *������ 
     *����ֵ���� 
     ************************************/  
    int quicksort(int random[], int x, int begin, int end)  
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









