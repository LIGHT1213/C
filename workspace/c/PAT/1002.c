#include<stdio.h>
#include<string.h>
int main()
{
char strtmp[9] = {0};
int a,n,i;
int arr[9];
scanf("%d", &a);
sprintf(strtmp, "%d", a);
n=strlen(strtmp);
for(i=1;i<=9;i++)
{
#include <stdio.h>
#include <string.h>

	void myOutput(int num);
	void myPrint(int ch);

	int main()
	{
		  char strInput[100] = {0};
		    char chTmp;
		      char strOut[3];
		        int sum, strLenth;

			  int i = 0;
			    while (chTmp = getchar())
				      {
					          if (chTmp >= '0' && chTmp <= '9')
							      {
								            strInput[i++] = chTmp;
									        }
						      else
							          {
									        break;
										    }
						        }
			      strLenth = i;

			        for (i = 0, sum = 0; i < strLenth; i++)
					  {
						      sum += (strInput[i] - '0');
						        }

				  myOutput(sum);

				    return 0;
	}

	void myOutput(int num)
	{

		  if(num == 0) return;
		    else 
			      {
				          myOutput(num/10);
					      if(num / 10) printf(" ");
					        }

		      myPrint(num%10);
	}

	void myPrint(int ch)
	{
		  switch (ch)
			    {
				      case 0:
					          printf("ling");
						      break;
						        case 1:
						          printf("yi");
							      break;
							        case 2:
							          printf("er");
								      break;
								        case 3:
								          printf("san");
									      break;
									        case 4:
									          printf("si");
										      break;
										        case 5:
										          printf("wu");
											      break;
											        case 6:
											          printf("liu");
												      break;
												        case 7:
												          printf("qi");
													      break;
													        case 8:
													          printf("ba");
														      break;
														        case 9:
														          printf("jiu");
															      break;
															        default:
															          break;
																    }
	}


}




return 0;






}
