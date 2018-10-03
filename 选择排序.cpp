for(int h=0;h<n-1;h++){
			int k=h;
			for(j=k+1;j<n;j++){
			if(random[k]<random[j]){k=j;
			}
			}
			if(k!=h)
			{	int t;
				t=random[h];
				random[h]=random[k];
				random[k]=t;
			}
			}
		//	for(int m=0;m<n;m++){
		//		printf("random[%d]=%d\n",m,random[m]);
		//	}
			output[i]=random[k-1];
