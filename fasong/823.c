bool palindrome(char *s)  
{  
    int n=strlen(s);  
    int i, j,count=0;  
    for (i = 0,j=n-1; i < n,j>=0; i++,j--)  
    {  
       
        if (*(s + i) == *(s + j))  
        {  
            count++;  
        }  
      
    }
    if (count == n)  
        return true;  
  
}  
