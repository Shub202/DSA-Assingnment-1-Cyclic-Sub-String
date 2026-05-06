// *******Problem 1: Cyclic Substring Maximum Sum***********

// Solution:


#include<stdio.h>
#include<string.h>

int main(){
char s[100005];

printf("Enter string: ");

if(scanf("%s",s)!=1){
printf("0\n");
return 0;
}

int n=strlen(s);

for(int i=0;i<n;i++){
if(s[i]<'a'||s[i]>'z'){
printf("Invalid Input\n");
return 0;
}
}

char t[200010];

for(int i=0;i<n;i++){
t[i]=s[i];
t[i+n]=s[i];
}

int freq[26]={0},left=0,sum=0,maxSum=0;

for(int right=0;right<2*n;right++){
int ch=t[right]-'a';

while(freq[ch]||(right-left+1>n)){
freq[t[left]-'a']--;
sum-=(t[left]-'a'+1);
left++;
}

freq[ch]++;
sum+=ch+1;

if(sum>maxSum)
maxSum=sum;
}

printf("Maximum Sum: %d\n",maxSum);

return 0;
}

// *****Output********:

//*/ PS E:\Advance Coding 1> gcc main.c -o main
// PS E:\Advance Coding 1> ./main            
// Enter string: abca
// Maximum Sum: 6
// PS E:\Advance Coding 1> ./main
// Enter string: Shivam
// Invalid Input
// PS E:\Advance Coding 1> 