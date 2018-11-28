void StringCount( char *s ){
	  int let = 0,let1 = 0, bla = 0, dig = 0, oth = 0,i=0;
	  char arr[MAXS];
	 while(s[i]!='\0'){
	 	arr[i]=s[i];
	 	i++;
	 }
	 arr[i]=0;
   
    for(i=0;arr[i]!='\0';i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            let++;
        }
        else if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            let1++;
        }
        else if (arr[i] == ' ' )
        {
            bla++;
        }
        else if (arr[i] >= '0' && arr[i] <= '9')
        {
            dig++;
        }
        else
        {
            oth++;
        }
       
    }
            printf("%d %d %d %d %d",let1,let,bla,dig,oth);
}
