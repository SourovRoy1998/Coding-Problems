//https://practice.geeksforgeeks.org/problems/is-binary-number-multiple-of-3/0

int main() {
	int testcase,even,odd;
	char str[101];
	scanf("%d",&testcase);
	while(testcase--){
	    even=0;
	    odd=0;
	    scanf("%s",&str);
	    for(int i=0;i<101;i++){
	       if(str[i]=='\0'){ 
	           break;
	           
	       }
	       if(i%2==0 && str[i]=='1')
	           even+=1;
	       else if(i%2==1 && str[i]=='1')
	           odd+=1;
	    }
	    if((even-odd)%3==0)
	        printf("1\n");
	    else
	        printf("0\n");
	
	    
	    
