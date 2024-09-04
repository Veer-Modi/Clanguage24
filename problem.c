
 #include <stdio.h>
 #include <string.h>

int main() {
	
//	Question-1;

    printf("Hello World\n");
    
    
//    Question-2;
    
    printf("%d\n",3+8);
    
    
//    Question-3;
    
     int a=2,b=1;
    
     if(a>b){
         printf("%d\n",a);
     }else if(b>a){
          printf("%d\n",b);
     }


//    Question-4;    
    
    int num=7;
   
     if(num%2==0){
         printf("The number %d is even.\n",num);
     }else{
         printf("The number %d is odd.\n",num);
     }


//     Question-5;
    
     int fact=5,ini=1;
     int i;
    
     for(i=1;i<=fact;i++){
         ini=ini*i;
     }
     printf("%d\n",ini);


//     Question-6;
    
    int nu,ree=0,re,orin;
   printf("\nEnter an intger to reverse it: ");
   scanf("%d",&nu);
   orin=nu;
     while(nu!=0){
 	    re=nu%10;
	    ree=ree*10+re;
	    nu/=10;
    }
     printf("%d is reversed.\n",ree);
//
  
//    Question-7;

    int n, reve=0,rem,ori;
    printf("\nEnter an intger to check for palindrome: ");
    scanf("%d",&n);
    ori=n;
    
    while(n!=0){
        rem=n%10;
        reve=reve*10+rem;
        n/=10;
    }
    
    if(ori==reve){
        printf("%d is palindrome\n",ori);
    }else{
        printf("%d is not palindrome\n",ori);
    }
    
    
//    Question-8;

     int dig,sum=0,m;
     printf("\nEnter a digit for sum: ");
     scanf("%d",&dig);

     while(dig>0){
 	     m=dig%10;
	     sum=sum+m;
	     dig/=10;
    }
    printf("Sum is %d\n",sum);


//   Question-9;

    int nue,count=0;
    printf("\nEnter a number for prime number: ");
    scanf("%d",&nue);
    int l;
    for(l=2;l<nue;l++){
        if(nue%l==0){
            count=count+l;
        }
    }
    if(count>0){
        printf("%d is not prime number.\n",nue);
    }else{
        printf("%d is prime number.\n",nue);
    }


//     Question-10;

    int o, h;
    int t1 = 0, t2 = 1;
    int nextTerm = t1 + t2;
    printf("\nEnter the number of terms: ");
    scanf("%d", &h);
    printf("Fibonacci Series: %d, %d, ", t1, t2);
    for (o = 3; o <= h; ++o) {
      printf("%d, ", nextTerm);
      t1 = t2;
      t2 = nextTerm;
      nextTerm = t1 + t2;
    }


//    Question-11;

    int n1, n2;
    printf("\nEnter an intger for gcd: ");
    scanf("%d %d",&n1,&n2);
    while(n1!=n2){
        if(n1>n2){
           n1-=n2;
        }else{
           n2-=n1;
       }
    }
    printf("GCD = %d\n",n1);


//    Question-12;

	int x,y,max,lcm;
	printf("\nEnter an intger for lcm: ");
	scanf("%d %d",&x,&y);
	max=(x>y) ? x:y;
	while(1){
		if(max%x==0 && max%y==0){
			printf("the LCM of %d and %d is %d\n",x,y,max);
			break;
		}
		max++;
	}
	
	
//	Question-13;

	int year;
	printf("\nEnter a year: ");
	scanf("%d",&year);
	if(year%400==0){
		printf("%d is a leap year.\n",year);
	}else if(year%100==0){
		printf("%d is not a leap year.\n",year);
	}else if(year%4==0){
		printf("%d is leap year.\n",year);
	}else{
		printf("%d is not leap year.\n",year);
	}
	
	
//	Question-14;
	
	char op;
	double first, second;
	printf("\nEnter an operator (+,-,*,/): ");
	scanf(" %c ",&op);
	printf("\nEnter an operands: ");
	scanf("%lf %lf",&first,&second);
	
	switch (op){
		case '+':
			printf("%.1lf + %.1lf = %.1lf/n",first,second,first + second);
			break;
		case '-':
			printf("%.1lf - %.1lf = %.1lf\n",first,second,first - second);
			break;
		case '*':
			printf("%.1lf * %.1lf = %.1lf\n",first,second,first * second);
			break;
		case '/':
			printf("%.1lf / %.1lf = %.1lf\n",first,second,first / second);
			break;
		default:
			printf("Error! operator is not correct.\n");
	}


//	Question-15;

	char arr[7]={1,4,2,5,7,5,3};
	int len=sizeof(arr)/sizeof(arr[0]);
	int k,sums=0;
	for(k=0;k<len;k++){
		sums=sums+arr[k];
	}
	printf("%d\n",sums); 


//	Question-16;

	int u;
	double arr1[100];
	int f;
	printf("Enter the number of elements (1 to 100): ");
	scanf("%d",&u);
	
	for(f=0;f<u;f++){
		printf("Enter number %d: ",f+1);
		scanf("%lf",&arr1[f]);
	}
	
	for (f=1;f<u;f++){
		if(arr1[0]<arr1[f]){
			arr1[0]=arr1[f];
		}
	}
	printf("largest element = %.2lf\n",arr1[0]);


//	Question-17;

	char s[]="Hello_World!";
	int g;
	for(g=0;s[g]!='\0';g++);
		printf("Length of string: %d\n",g);
	
	
//	Question-18;

	char str[]="hello_World!";
	int w;
    int length=strlen(str);
    char rev[length+1];
    for (w=length-1;w>=0;w--){
        rev[length-w-1]=str[w];
    }
    printf("%s",rev);


//	Question-19;
	
	int ab,bc;
	printf("Enter the value of ab: ");
	scanf("%d",&ab);
	printf("Enter the value of bc: ");
	scanf("%d",&bc);
	
	ab=ab+bc;
	bc=ab-bc;
	ab=ab-bc;
	
	printf("After swapping: \n");
	printf("ab = %d\n",ab);
	printf("bc = %d\n",bc);


//	Question-20;

	double st,nd,temp;
	printf("Enter first number: ");
	scanf("%lf",&st);
	printf("Enter second number: ");
	scanf("%lf",&nd);
	temp=st;
	st=nd;
	nd=temp;
	printf("\n After swapping, first number= %.2lf\n",st);
	printf("After swapping, second number= %.2lf\n",nd);


//	Question-21;	
	
    char charact;
    printf("Enter a character: ");
    scanf("%c", &charact);
    printf("The ASCII value of '%c' is %d.\n", charact, (int)charact);


//	Question-22;

	double celsius,fahrenheit;
	printf("Enter Temperature in Celsius: ");
	scanf("%lf",&celsius);
	fahrenheit=(celsius*9.0/5.0)+32;
	printf("Temperature in Fahrenheit: %lf\n",fahrenheit);


//	Question-23;

	double fah,cel;
	printf("Enter temperature in fahrenheit: ");
	scanf("%lf",&fah);
	cel=(fah -32)*5.0/9.0;
	printf("Temperature in celsius: %lf\n",cel);


//	Question-24;

	int N,sumes;
	printf("Enter a positive intger N: ");
	scanf("%d",&N);
	sumes=N*(N+1)/2;
	printf("The sum of the first %d natural numbers is %d.\n",N,sumes);


//	Question-25;

	char character;
	printf("Enter a single alphabetic character: ");
	scanf("%c",&character);
	character = tolower(character);
	if(!isalpha(character)){
		printf("The input is not an alphabetic character.\n");
		return 1;
	}
	switch (character){
		case 'a':
			case 'e':
				case 'i':
					case 'o':
						case 'u':
							printf("'%c'is a vowel.\n",character);
							break;
							default:
								printf("'%c'is consonant.\n",character);
	}


//	Question-26;

	char charc;
	printf("Enter a single character: ");
	scanf("%c",&charc);
	if(isalpha(charc)){
		printf("'%c'is alphabetic character.\n",charc);
	}else if(isdigit(charc)){
		printf("'%c'is a digit.\n",charc);
	}else{
		printf("'%c'is special character.\n",charc);
	}


//	Question-27;

	int number;
	int digit_number=0;
	printf("Enter a number: ");
	scanf("%d",&number);
	if(number==0){
		digit_number=1;
	}else{
		number=(number<0)? -number:number;
		while(number>0){
			number/=10;
			digit_number++;
		}
	}
	printf("Number of digits: %d\n",digit_number);


//	Question-28;

	char sti[]="hello_World!";
	int p;
    int leng=strlen(sti);
    char rev1[leng+1];
    for (p=leng-1;p>=0;p--){
        rev1[leng-p-1]=sti[p];
    }
    printf("%s\n",rev1);


//	Question-29;

	char str1[100],str2[100];
	printf("Enter the first string: ");
	fgets(str1,sizeof(str1),stdin);
	str1[strcspn(str1,"\n")]='\0';
	printf("Enter the second string: ");
	fgets(str2,sizeof(str2),stdin);
	str2[strcspn(str2,"\n")]='\0';
	int result=strcmp(str1,str2);
	
	if(result<0){
		printf("\"%s\"is alphabetically before \"%s\".\n",str1,str2);
	}else if (result<0){
		printf("\"%s\"is alphabetically after \"%s\".\n",str1,str2);
	}else {
		printf("\"%s\"is the same as  \"%s\".\n",str1,str2);
	}


//	Question-30;

	int base, expo,q;
	long long result1=1;
	printf("Enter the base number: ");
	scanf("%d",&base);
	printf("Enter the exponent number: ");
	scanf("%d",&expo);
	if(expo<0){
		printf("Exponent should be a non-negative integer.\n");
        return 1; 
    }
    for (q = 0; q < expo; q++) {
        result1 *= base;
    }
    printf("%d^%d = %lld\n", base, expo, result1);


//	Question-31;

	int low, high, v, flag;
	printf("Enter two number: ");
	scanf("%d %d", &low, &high);
	printf("Prime numbers between %d and %d are: \n", low, high);
	while(low<high){
		flag=0;
		if (low<=1){
			low++;
			continue;
		}
		for(v=2;v<=low/2;v++){
			if(low%v==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			printf("%d ",low);
		}
		low++;
	}
	
	
//	Question-32;

//	int num1, originalNum, remainder, result2=0;
//	printf("Enter a three_digit intger: ");
//	scanf("%d", &num1);
//	originalNum=num1;
//	
//	while(originalNum!=0){
//		remainder=originalNum % 10;
//		result2 +=remainder* remainder* remainder;
//		originalNum/=10;
//	}
//	if(result2==num1){
//		printf("%d is armstrong number.",num1);
//	}else{
//		printf("%d is not an armstrong number.",num1);
//	}	


    unsigned long long int nur, originalNum, remainder, Nu = 0;
    unsigned long long int result3 = 0;
    printf("Enter an integer: ");
    scanf("%llu", &nur);
    originalNum = nur;
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }
    originalNum = nur;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        unsigned long long int power = 1,e;
        for (e = 0; e < Nu; e++) {
            power *= remainder;
        }
        result3 += power;
        originalNum /= 10;
    }
    if (result3 == nur)
        printf("%llu is an Armstrong number.\n", nur);
    else
        printf("%llu is not an Armstrong number.\n", nur);


//	Question-33;

	int n3,t;
	float nb[100], sm=0.0, avg;
	
	printf("Enter the numbers of elements: ");
	scanf("%d",&n3);
	while(n3>100 || n3<1){
		printf("ERROR! number should in range of (1 to 100).\n");
		printf("Enter the number again: ");
		scanf("%d",&n3);
	}
	for(t=0;t<n3;t++){
		printf("%d. Enter number: ",t+1);
		scanf("%f",&nb[t]);
		sm+= nb[t];
	}
	avg=sm/n3;
	printf("Average = %.2f",avg);


//	Question-34;

	 int arry[10];
    int r;
    int greatest;
    int snd;
    printf("Enter 10 values:");
    for (r = 0; r < 10; r++){
        scanf("\n%d", &arry[r]);
    }
    greatest = arry[0];
    for (r = 1; r < 10; r++){
        if (greatest < arry[r]){
            greatest = arry[r];
        }
    }
    snd = arry[r];
    for (r = 0; r < 10; r++){
        if (arry[r]<greatest && snd>arry[r - 1]){
            snd = arry[r];
        }
    }
    printf("The greatest number is : %d", greatest);
    printf("\nThe second greatest number is: %d", snd);


//	Question-35;

	int nmb,X;
	printf("Enter a number: ");
	scanf("%d",&nmb);
	for(X=1;X<=nmb;X++){
		if((X*X)==nmb){
			printf("%d is a perfect square.",nmb);
			return 0;
		}
	}
	printf("%d is not a perfect square.",nmb);
	
	
    return 0; 
}
problem.c
