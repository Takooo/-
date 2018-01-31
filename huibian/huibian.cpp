#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void ADD(void);
void SUB(void);
void SLT(void);
void LW(void);
void SW(void);
void BEQ(void);
void J(void);

int main()
{
	int choose = 1;
	while(choose)
	{
		char S[50];
		scanf("%s", S);
		if (!strcmp(S, "ADD"))
			ADD();
		if (!strcmp(S, "SUB"))
			SUB();
		if (!strcmp(S, "SLT"))
			SLT();
		if (!strcmp(S, "LW"))
			LW();
		if (!strcmp(S, "SW"))
			SW();
		if (!strcmp(S, "BEQ"))
			BEQ();
		if (!strcmp(S, "J"))
			J();
		printf("Please choose whether to continue: 1-Yes   0-No\n");
		scanf("%d", &choose);
	}
	return 0;
}
void ADD(void)
{
	char S1[10];
	char S2[10];
	char S3[10];
	printf("000000 ");
	scanf("%s", S1);
	scanf("%s", S2);
	scanf("%s", S3);
	if (!strcmp(S3, "$zero"))
		printf("00000 ");
	if (!strcmp(S3, "$at"))
		printf("00001 ");
	if (!strcmp(S3, "$v0"))
		printf("00010 ");
	if (!strcmp(S3, "$v1"))
		printf("00011 ");
	if (!strcmp(S3, "$a0"))
		printf("00100 ");
	if (!strcmp(S3, "$a1"))
		printf("00101 ");
	if (!strcmp(S3, "$a2"))
		printf("00110 ");
	if (!strcmp(S3, "$a3"))
		printf("00111 ");
	if (!strcmp(S3, "$t0"))
		printf("01000 ");
	if (!strcmp(S3, "$t1"))
		printf("01001 ");
	if (!strcmp(S3, "$t2"))
		printf("01010 ");
	if (!strcmp(S3, "$t3"))
		printf("01011 ");
	if (!strcmp(S3, "$t4"))
		printf("01100 ");
	if (!strcmp(S3, "$t5"))
		printf("01101 ");
	if (!strcmp(S3, "$t6"))
		printf("01110 ");
	if (!strcmp(S3, "$t7"))
		printf("01111 ");
	if (!strcmp(S3, "$s0"))
		printf("10000 ");
	if (!strcmp(S3, "$s1"))
		printf("10001 ");
	if (!strcmp(S3, "$s2"))
		printf("10010 ");
	if (!strcmp(S3, "$s3"))
		printf("10011 ");
	if (!strcmp(S3, "$s4"))
		printf("10100 ");
	if (!strcmp(S3, "$s5"))
		printf("10101 ");
	if (!strcmp(S3, "$s6"))
		printf("10110 ");
	if (!strcmp(S3, "$s7"))
		printf("10111 ");
	if (!strcmp(S3, "$t8"))
		printf("11000 ");
	if (!strcmp(S3, "$t9"))
		printf("11001 ");
	if (!strcmp(S3, "$k0"))
		printf("11010 ");
	if (!strcmp(S3, "$k1"))
		printf("11011 ");
	if (!strcmp(S3, "$gp"))
		printf("11100 ");
	if (!strcmp(S3, "$sp"))
		printf("11101 ");
	if (!strcmp(S3, "$fp"))
		printf("11110 ");
	if (!strcmp(S3, "$ra"))
		printf("11111 ");

	if (!strcmp(S1, "$zero,"))
		printf("00000 ");
	if (!strcmp(S1, "$at,"))
		printf("00001 ");
	if (!strcmp(S1, "$v0,"))
		printf("00010 ");
	if (!strcmp(S1, "$v1,"))
		printf("00011 ");
	if (!strcmp(S1, "$a0,"))
		printf("00100 ");
	if (!strcmp(S1, "$a1,"))
		printf("00101 ");
	if (!strcmp(S1, "$a2,"))
		printf("00110 ");
	if (!strcmp(S1, "$a3,"))
		printf("00111 ");
	if (!strcmp(S1, "$t0,"))
		printf("01000 ");
	if (!strcmp(S1, "$t1,"))
		printf("01001 ");
	if (!strcmp(S1, "$t2,"))
		printf("01010 ");
	if (!strcmp(S1, "$t3,"))
		printf("01011 ");
	if (!strcmp(S1, "$t4,"))
		printf("01100 ");
	if (!strcmp(S1, "$t5,"))
		printf("01101 ");
	if (!strcmp(S1, "$t6,"))
		printf("01110 ");
	if (!strcmp(S1, "$t7,"))
		printf("01111 ");
	if (!strcmp(S1, "$s0,"))
		printf("10000 ");
	if (!strcmp(S1, "$s1,"))
		printf("10001 ");
	if (!strcmp(S1, "$s2,"))
		printf("10010 ");
	if (!strcmp(S1, "$s3,"))
		printf("10011 ");
	if (!strcmp(S1, "$s4,"))
		printf("10100 ");
	if (!strcmp(S1, "$s5,"))
		printf("10101 ");
	if (!strcmp(S1, "$s6,"))
		printf("10110 ");
	if (!strcmp(S1, "$s7,"))
		printf("10111 ");
	if (!strcmp(S1, "$t8,"))
		printf("11000 ");
	if (!strcmp(S1, "$t9,"))
		printf("11001 ");
	if (!strcmp(S1, "$k0,"))
		printf("11010 ");
	if (!strcmp(S1, "$k1,"))
		printf("11011 ");
	if (!strcmp(S1, "$gp,"))
		printf("11100 ");
	if (!strcmp(S1, "$sp,"))
		printf("11101 ");
	if (!strcmp(S1, "$fp,"))
		printf("11110 ");
	if (!strcmp(S1, "$ra,"))
		printf("11111 ");

	if (!strcmp(S2, "$zero,"))
		printf("00000 ");
	if (!strcmp(S2, "$at,"))
		printf("00001 ");
	if (!strcmp(S2, "$v0,"))
		printf("00010 ");
	if (!strcmp(S2, "$v1,"))
		printf("00011 ");
	if (!strcmp(S2, "$a0,"))
		printf("00100 ");
	if (!strcmp(S2, "$a1,"))
		printf("00101 ");
	if (!strcmp(S2, "$a2,"))
		printf("00110 ");
	if (!strcmp(S2, "$a3,"))
		printf("00111 ");
	if (!strcmp(S2, "$t0,"))
		printf("01000 ");
	if (!strcmp(S2, "$t1,"))
		printf("01001 ");
	if (!strcmp(S2, "$t2,"))
		printf("01010 ");
	if (!strcmp(S2, "$t3,"))
		printf("01011 ");
	if (!strcmp(S2, "$t4,"))
		printf("01100 ");
	if (!strcmp(S2, "$t5,"))
		printf("01101 ");
	if (!strcmp(S2, "$t6,"))
		printf("01110 ");
	if (!strcmp(S2, "$t7,"))
		printf("01111 ");
	if (!strcmp(S2, "$s0,"))
		printf("10000 ");
	if (!strcmp(S2, "$s1,"))
		printf("10001 ");
	if (!strcmp(S2, "$s2,"))
		printf("10010 ");
	if (!strcmp(S2, "$s3,"))
		printf("10011 ");
	if (!strcmp(S2, "$s4,"))
		printf("10100 ");
	if (!strcmp(S2, "$s5,"))
		printf("10101 ");
	if (!strcmp(S2, "$s6,"))
		printf("10110 ");
	if (!strcmp(S2, "$s7,"))
		printf("10111 ");
	if (!strcmp(S2, "$t8,"))
		printf("11000 ");
	if (!strcmp(S2, "$t9,"))
		printf("11001 ");
	if (!strcmp(S2, "$k0,"))
		printf("11010 ");
	if (!strcmp(S2, "$k1,"))
		printf("11011 ");
	if (!strcmp(S2, "$gp,"))
		printf("11100 ");
	if (!strcmp(S2, "$sp,"))
		printf("11101 ");
	if (!strcmp(S2, "$fp,"))
		printf("11110 ");
	if (!strcmp(S2, "$ra,"))
		printf("11111 ");

	printf("100000\n");
}
void SUB(void)
{
	char S1[10];
	char S2[10];
	char S3[10];
	printf("000000 ");
	scanf("%s", S1);
	scanf("%s", S2);
	scanf("%s", S3);
	if (!strcmp(S3, "$zero"))
		printf("00000 ");
	if (!strcmp(S3, "$at"))
		printf("00001 ");
	if (!strcmp(S3, "$v0"))
		printf("00010 ");
	if (!strcmp(S3, "$v1"))
		printf("00011 ");
	if (!strcmp(S3, "$a0"))
		printf("00100 ");
	if (!strcmp(S3, "$a1"))
		printf("00101 ");
	if (!strcmp(S3, "$a2"))
		printf("00110 ");
	if (!strcmp(S3, "$a3"))
		printf("00111 ");
	if (!strcmp(S3, "$t0"))
		printf("01000 ");
	if (!strcmp(S3, "$t1"))
		printf("01001 ");
	if (!strcmp(S3, "$t2"))
		printf("01010 ");
	if (!strcmp(S3, "$t3"))
		printf("01011 ");
	if (!strcmp(S3, "$t4"))
		printf("01100 ");
	if (!strcmp(S3, "$t5"))
		printf("01101 ");
	if (!strcmp(S3, "$t6"))
		printf("01110 ");
	if (!strcmp(S3, "$t7"))
		printf("01111 ");
	if (!strcmp(S3, "$s0"))
		printf("10000 ");
	if (!strcmp(S3, "$s1"))
		printf("10001 ");
	if (!strcmp(S3, "$s2"))
		printf("10010 ");
	if (!strcmp(S3, "$s3"))
		printf("10011 ");
	if (!strcmp(S3, "$s4"))
		printf("10100 ");
	if (!strcmp(S3, "$s5"))
		printf("10101 ");
	if (!strcmp(S3, "$s6"))
		printf("10110 ");
	if (!strcmp(S3, "$s7"))
		printf("10111 ");
	if (!strcmp(S3, "$t8"))
		printf("11000 ");
	if (!strcmp(S3, "$t9"))
		printf("11001 ");
	if (!strcmp(S3, "$k0"))
		printf("11010 ");
	if (!strcmp(S3, "$k1"))
		printf("11011 ");
	if (!strcmp(S3, "$gp"))
		printf("11100 ");
	if (!strcmp(S3, "$sp"))
		printf("11101 ");
	if (!strcmp(S3, "$fp"))
		printf("11110 ");
	if (!strcmp(S3, "$ra"))
		printf("11111 ");

	if (!strcmp(S1, "$zero,"))
		printf("00000 ");
	if (!strcmp(S1, "$at,"))
		printf("00001 ");
	if (!strcmp(S1, "$v0,"))
		printf("00010 ");
	if (!strcmp(S1, "$v1,"))
		printf("00011 ");
	if (!strcmp(S1, "$a0,"))
		printf("00100 ");
	if (!strcmp(S1, "$a1,"))
		printf("00101 ");
	if (!strcmp(S1, "$a2,"))
		printf("00110 ");
	if (!strcmp(S1, "$a3,"))
		printf("00111 ");
	if (!strcmp(S1, "$t0,"))
		printf("01000 ");
	if (!strcmp(S1, "$t1,"))
		printf("01001 ");
	if (!strcmp(S1, "$t2,"))
		printf("01010 ");
	if (!strcmp(S1, "$t3,"))
		printf("01011 ");
	if (!strcmp(S1, "$t4,"))
		printf("01100 ");
	if (!strcmp(S1, "$t5,"))
		printf("01101 ");
	if (!strcmp(S1, "$t6,"))
		printf("01110 ");
	if (!strcmp(S1, "$t7,"))
		printf("01111 ");
	if (!strcmp(S1, "$s0,"))
		printf("10000 ");
	if (!strcmp(S1, "$s1,"))
		printf("10001 ");
	if (!strcmp(S1, "$s2,"))
		printf("10010 ");
	if (!strcmp(S1, "$s3,"))
		printf("10011 ");
	if (!strcmp(S1, "$s4,"))
		printf("10100 ");
	if (!strcmp(S1, "$s5,"))
		printf("10101 ");
	if (!strcmp(S1, "$s6,"))
		printf("10110 ");
	if (!strcmp(S1, "$s7,"))
		printf("10111 ");
	if (!strcmp(S1, "$t8,"))
		printf("11000 ");
	if (!strcmp(S1, "$t9,"))
		printf("11001 ");
	if (!strcmp(S1, "$k0,"))
		printf("11010 ");
	if (!strcmp(S1, "$k1,"))
		printf("11011 ");
	if (!strcmp(S1, "$gp,"))
		printf("11100 ");
	if (!strcmp(S1, "$sp,"))
		printf("11101 ");
	if (!strcmp(S1, "$fp,"))
		printf("11110 ");
	if (!strcmp(S1, "$ra,"))
		printf("11111 ");

	if (!strcmp(S2, "$zero,"))
		printf("00000 ");
	if (!strcmp(S2, "$at,"))
		printf("00001 ");
	if (!strcmp(S2, "$v0,"))
		printf("00010 ");
	if (!strcmp(S2, "$v1,"))
		printf("00011 ");
	if (!strcmp(S2, "$a0,"))
		printf("00100 ");
	if (!strcmp(S2, "$a1,"))
		printf("00101 ");
	if (!strcmp(S2, "$a2,"))
		printf("00110 ");
	if (!strcmp(S2, "$a3,"))
		printf("00111 ");
	if (!strcmp(S2, "$t0,"))
		printf("01000 ");
	if (!strcmp(S2, "$t1,"))
		printf("01001 ");
	if (!strcmp(S2, "$t2,"))
		printf("01010 ");
	if (!strcmp(S2, "$t3,"))
		printf("01011 ");
	if (!strcmp(S2, "$t4,"))
		printf("01100 ");
	if (!strcmp(S2, "$t5,"))
		printf("01101 ");
	if (!strcmp(S2, "$t6,"))
		printf("01110 ");
	if (!strcmp(S2, "$t7,"))
		printf("01111 ");
	if (!strcmp(S2, "$s0,"))
		printf("10000 ");
	if (!strcmp(S2, "$s1,"))
		printf("10001 ");
	if (!strcmp(S2, "$s2,"))
		printf("10010 ");
	if (!strcmp(S2, "$s3,"))
		printf("10011 ");
	if (!strcmp(S2, "$s4,"))
		printf("10100 ");
	if (!strcmp(S2, "$s5,"))
		printf("10101 ");
	if (!strcmp(S2, "$s6,"))
		printf("10110 ");
	if (!strcmp(S2, "$s7,"))
		printf("10111 ");
	if (!strcmp(S2, "$t8,"))
		printf("11000 ");
	if (!strcmp(S2, "$t9,"))
		printf("11001 ");
	if (!strcmp(S2, "$k0,"))
		printf("11010 ");
	if (!strcmp(S2, "$k1,"))
		printf("11011 ");
	if (!strcmp(S2, "$gp,"))
		printf("11100 ");
	if (!strcmp(S2, "$sp,"))
		printf("11101 ");
	if (!strcmp(S2, "$fp,"))
		printf("11110 ");
	if (!strcmp(S2, "$ra,"))
		printf("11111 ");

	printf("100010\n");
}
void SLT(void)
{
	char S1[10];
	char S2[10];
	char S3[10];
	printf("000000 ");
	scanf("%s", S1);
	scanf("%s", S2);
	scanf("%s", S3);
	if (!strcmp(S3, "$zero"))
		printf("00000 ");
	if (!strcmp(S3, "$at"))
		printf("00001 ");
	if (!strcmp(S3, "$v0"))
		printf("00010 ");
	if (!strcmp(S3, "$v1"))
		printf("00011 ");
	if (!strcmp(S3, "$a0"))
		printf("00100 ");
	if (!strcmp(S3, "$a1"))
		printf("00101 ");
	if (!strcmp(S3, "$a2"))
		printf("00110 ");
	if (!strcmp(S3, "$a3"))
		printf("00111 ");
	if (!strcmp(S3, "$t0"))
		printf("01000 ");
	if (!strcmp(S3, "$t1"))
		printf("01001 ");
	if (!strcmp(S3, "$t2"))
		printf("01010 ");
	if (!strcmp(S3, "$t3"))
		printf("01011 ");
	if (!strcmp(S3, "$t4"))
		printf("01100 ");
	if (!strcmp(S3, "$t5"))
		printf("01101 ");
	if (!strcmp(S3, "$t6"))
		printf("01110 ");
	if (!strcmp(S3, "$t7"))
		printf("01111 ");
	if (!strcmp(S3, "$s0"))
		printf("10000 ");
	if (!strcmp(S3, "$s1"))
		printf("10001 ");
	if (!strcmp(S3, "$s2"))
		printf("10010 ");
	if (!strcmp(S3, "$s3"))
		printf("10011 ");
	if (!strcmp(S3, "$s4"))
		printf("10100 ");
	if (!strcmp(S3, "$s5"))
		printf("10101 ");
	if (!strcmp(S3, "$s6"))
		printf("10110 ");
	if (!strcmp(S3, "$s7"))
		printf("10111 ");
	if (!strcmp(S3, "$t8"))
		printf("11000 ");
	if (!strcmp(S3, "$t9"))
		printf("11001 ");
	if (!strcmp(S3, "$k0"))
		printf("11010 ");
	if (!strcmp(S3, "$k1"))
		printf("11011 ");
	if (!strcmp(S3, "$gp"))
		printf("11100 ");
	if (!strcmp(S3, "$sp"))
		printf("11101 ");
	if (!strcmp(S3, "$fp"))
		printf("11110 ");
	if (!strcmp(S3, "$ra"))
		printf("11111 ");

	if (!strcmp(S1, "$zero,"))
		printf("00000 ");
	if (!strcmp(S1, "$at,"))
		printf("00001 ");
	if (!strcmp(S1, "$v0,"))
		printf("00010 ");
	if (!strcmp(S1, "$v1,"))
		printf("00011 ");
	if (!strcmp(S1, "$a0,"))
		printf("00100 ");
	if (!strcmp(S1, "$a1,"))
		printf("00101 ");
	if (!strcmp(S1, "$a2,"))
		printf("00110 ");
	if (!strcmp(S1, "$a3,"))
		printf("00111 ");
	if (!strcmp(S1, "$t0,"))
		printf("01000 ");
	if (!strcmp(S1, "$t1,"))
		printf("01001 ");
	if (!strcmp(S1, "$t2,"))
		printf("01010 ");
	if (!strcmp(S1, "$t3,"))
		printf("01011 ");
	if (!strcmp(S1, "$t4,"))
		printf("01100 ");
	if (!strcmp(S1, "$t5,"))
		printf("01101 ");
	if (!strcmp(S1, "$t6,"))
		printf("01110 ");
	if (!strcmp(S1, "$t7,"))
		printf("01111 ");
	if (!strcmp(S1, "$s0,"))
		printf("10000 ");
	if (!strcmp(S1, "$s1,"))
		printf("10001 ");
	if (!strcmp(S1, "$s2,"))
		printf("10010 ");
	if (!strcmp(S1, "$s3,"))
		printf("10011 ");
	if (!strcmp(S1, "$s4,"))
		printf("10100 ");
	if (!strcmp(S1, "$s5,"))
		printf("10101 ");
	if (!strcmp(S1, "$s6,"))
		printf("10110 ");
	if (!strcmp(S1, "$s7,"))
		printf("10111 ");
	if (!strcmp(S1, "$t8,"))
		printf("11000 ");
	if (!strcmp(S1, "$t9,"))
		printf("11001 ");
	if (!strcmp(S1, "$k0,"))
		printf("11010 ");
	if (!strcmp(S1, "$k1,"))
		printf("11011 ");
	if (!strcmp(S1, "$gp,"))
		printf("11100 ");
	if (!strcmp(S1, "$sp,"))
		printf("11101 ");
	if (!strcmp(S1, "$fp,"))
		printf("11110 ");
	if (!strcmp(S1, "$ra,"))
		printf("11111 ");

	if (!strcmp(S2, "$zero,"))
		printf("00000 ");
	if (!strcmp(S2, "$at,"))
		printf("00001 ");
	if (!strcmp(S2, "$v0,"))
		printf("00010 ");
	if (!strcmp(S2, "$v1,"))
		printf("00011 ");
	if (!strcmp(S2, "$a0,"))
		printf("00100 ");
	if (!strcmp(S2, "$a1,"))
		printf("00101 ");
	if (!strcmp(S2, "$a2,"))
		printf("00110 ");
	if (!strcmp(S2, "$a3,"))
		printf("00111 ");
	if (!strcmp(S2, "$t0,"))
		printf("01000 ");
	if (!strcmp(S2, "$t1,"))
		printf("01001 ");
	if (!strcmp(S2, "$t2,"))
		printf("01010 ");
	if (!strcmp(S2, "$t3,"))
		printf("01011 ");
	if (!strcmp(S2, "$t4,"))
		printf("01100 ");
	if (!strcmp(S2, "$t5,"))
		printf("01101 ");
	if (!strcmp(S2, "$t6,"))
		printf("01110 ");
	if (!strcmp(S2, "$t7,"))
		printf("01111 ");
	if (!strcmp(S2, "$s0,"))
		printf("10000 ");
	if (!strcmp(S2, "$s1,"))
		printf("10001 ");
	if (!strcmp(S2, "$s2,"))
		printf("10010 ");
	if (!strcmp(S2, "$s3,"))
		printf("10011 ");
	if (!strcmp(S2, "$s4,"))
		printf("10100 ");
	if (!strcmp(S2, "$s5,"))
		printf("10101 ");
	if (!strcmp(S2, "$s6,"))
		printf("10110 ");
	if (!strcmp(S2, "$s7,"))
		printf("10111 ");
	if (!strcmp(S2, "$t8,"))
		printf("11000 ");
	if (!strcmp(S2, "$t9,"))
		printf("11001 ");
	if (!strcmp(S2, "$k0,"))
		printf("11010 ");
	if (!strcmp(S2, "$k1,"))
		printf("11011 ");
	if (!strcmp(S2, "$gp,"))
		printf("11100 ");
	if (!strcmp(S2, "$sp,"))
		printf("11101 ");
	if (!strcmp(S2, "$fp,"))
		printf("11110 ");
	if (!strcmp(S2, "$ra,"))
		printf("11111 ");

	printf("101010\n");
}
void LW(void)
{
	printf("100011 ");
	char RT[10];
	char S[50];
	char RS[10];
	char O1[20];
	char O2[20];
	char O;
	scanf("%s", RT);
	scanf("%s", S);
	int i = 0, j = 0;
	int OO1 = 0, OO2 = 0, OO = 0;
	while (S[i] != '*'&&S[i] != '/'&&S[i] != '(')
		O1[i] = S[i++];
	O1[i] = NULL;
	if(S[i]=='*')
	{
		O = S[i++];
		j = 0;
		while(S[i]!='(')
		{
			O2[j++] = S[i++];
		}
		O2[j] = NULL;
		j = 0;
		i++;
		while (S[i] != ')')
			RS[j++] = S[i++];
		RS[j] = NULL;
		
		j = 0;
		while (O1[j])
			OO1 = (OO1 + (O1[j++] - '0')) * 10;
		OO1 /= 10;
		j = 0;
		while (O2[j])
			OO2 = (OO2 + (O2[j++] - '0')) * 10;
		OO2 /= 10;
		OO = OO1*OO2;
		O1[16] = NULL;
		for(j=15;j>=0;j--)
		{
			if (OO)
			{
				O1[j] = (OO % 2) + '0';
				OO /= 2;
			}
			else
				O1[j] = '0';
		}
	}
	else if (S[i] == '/')
	{
		O = S[i++];
		j = 0;
		while (S[i] != '(')
		{
			O2[j++] = S[i++];
		}
		O2[j] = NULL;
		j = 0;
		i++;
		while (S[i] != ')')
			RS[j++] = S[i++];
		RS[j] = NULL;
		
		j = 0;
		while (O1[j])
			OO1 = (OO1 + (O1[j++] - '0')) * 10;
		OO1 /= 10;
		j = 0;
		while (O2[j])
			OO2 = (OO2 + (O2[j++] - '0')) * 10;
		OO2 /= 10;
		OO = OO1/OO2;
		O1[16] = NULL;
		for (j = 15; j >= 0; j--)
		{
			if (OO)
			{
				O1[j] = (OO % 2) + '0';
				OO /= 2;
			}
			else
				O1[j] = '0';
		}
	}
	else if(S[i]=='(')
	{
		i++;
		j = 0;
		while (S[i] != ')')
			RS[j++] = S[i++];
		RS[j] = NULL;
		
		j = 0;
		while (O1[j])
			OO = (OO + (O1[j++] - '0')) * 10;
		OO /= 10;
		O1[16] = NULL;
		for (j = 15; j >= 0; j--)
		{
			if (OO)
			{
				O1[j] = (OO % 2) + '0';
				OO /= 2;
			}
			else
				O1[j] = '0';
		}
	}
	if (!strcmp(RS, "$zero"))
		printf("00000 ");
	if (!strcmp(RS, "$at"))
		printf("00001 ");
	if (!strcmp(RS, "$v0"))
		printf("00010 ");
	if (!strcmp(RS, "$v1"))
		printf("00011 ");
	if (!strcmp(RS, "$a0"))
		printf("00100 ");
	if (!strcmp(RS, "$a1"))
		printf("00101 ");
	if (!strcmp(RS, "$a2"))
		printf("00110 ");
	if (!strcmp(RS, "$a3"))
		printf("00111 ");
	if (!strcmp(RS, "$t0"))
		printf("01000 ");
	if (!strcmp(RS, "$t1"))
		printf("01001 ");
	if (!strcmp(RS, "$t2"))
		printf("01010 ");
	if (!strcmp(RS, "$t3"))
		printf("01011 ");
	if (!strcmp(RS, "$t4"))
		printf("01100 ");
	if (!strcmp(RS, "$t5"))
		printf("01101 ");
	if (!strcmp(RS, "$t6"))
		printf("01110 ");
	if (!strcmp(RS, "$t7"))
		printf("01111 ");
	if (!strcmp(RS, "$s0"))
		printf("10000 ");
	if (!strcmp(RS, "$s1"))
		printf("10001 ");
	if (!strcmp(RS, "$s2"))
		printf("10010 ");
	if (!strcmp(RS, "$s3"))
		printf("10011 ");
	if (!strcmp(RS, "$s4"))
		printf("10100 ");
	if (!strcmp(RS, "$s5"))
		printf("10101 ");
	if (!strcmp(RS, "$s6"))
		printf("10110 ");
	if (!strcmp(RS, "$s7"))
		printf("10111 ");
	if (!strcmp(RS, "$t8"))
		printf("11000 ");
	if (!strcmp(RS, "$t9"))
		printf("11001 ");
	if (!strcmp(RS, "$k0"))
		printf("11010 ");
	if (!strcmp(RS, "$k1"))
		printf("11011 ");
	if (!strcmp(RS, "$gp"))
		printf("11100 ");
	if (!strcmp(RS, "$sp"))
		printf("11101 ");
	if (!strcmp(RS, "$fp"))
		printf("11110 ");
	if (!strcmp(RS, "$ra"))
		printf("11111 ");

	if (!strcmp(RT, "$zero,"))
		printf("00000 ");
	if (!strcmp(RT, "$at,"))
		printf("00001 ");
	if (!strcmp(RT, "$v0,"))
		printf("00010 ");
	if (!strcmp(RT, "$v1,"))
		printf("00011 ");
	if (!strcmp(RT, "$a0,"))
		printf("00100 ");
	if (!strcmp(RT, "$a1,"))
		printf("00101 ");
	if (!strcmp(RT, "$a2,"))
		printf("00110 ");
	if (!strcmp(RT, "$a3,"))
		printf("00111 ");
	if (!strcmp(RT, "$t0,"))
		printf("01000 ");
	if (!strcmp(RT, "$t1,"))
		printf("01001 ");
	if (!strcmp(RT, "$t2,"))
		printf("01010 ");
	if (!strcmp(RT, "$t3,"))
		printf("01011 ");
	if (!strcmp(RT, "$t4,"))
		printf("01100 ");
	if (!strcmp(RT, "$t5,"))
		printf("01101 ");
	if (!strcmp(RT, "$t6,"))
		printf("01110 ");
	if (!strcmp(RT, "$t7,"))
		printf("01111 ");
	if (!strcmp(RT, "$s0,"))
		printf("10000 ");
	if (!strcmp(RT, "$s1,"))
		printf("10001 ");
	if (!strcmp(RT, "$s2,"))
		printf("10010 ");
	if (!strcmp(RT, "$s3,"))
		printf("10011 ");
	if (!strcmp(RT, "$s4,"))
		printf("10100 ");
	if (!strcmp(RT, "$s5,"))
		printf("10101 ");
	if (!strcmp(RT, "$s6,"))
		printf("10110 ");
	if (!strcmp(RT, "$s7,"))
		printf("10111 ");
	if (!strcmp(RT, "$t8,"))
		printf("11000 ");
	if (!strcmp(RT, "$t9,"))
		printf("11001 ");
	if (!strcmp(RT, "$k0,"))
		printf("11010 ");
	if (!strcmp(RT, "$k1,"))
		printf("11011 ");
	if (!strcmp(RT, "$gp,"))
		printf("11100 ");
	if (!strcmp(RT, "$sp,"))
		printf("11101 ");
	if (!strcmp(RT, "$fp,"))
		printf("11110 ");
	if (!strcmp(RT, "$ra,"))
		printf("11111 ");
	printf("%s\n", O1);
}
void SW(void)

{
	printf("101011 ");
	char RT[10];
	char S[50];
	char RS[10];
	char O1[20];
	char O2[20];
	char O;
	scanf("%s", RT);
	scanf("%s", S);
	int i = 0, j = 0;
	int OO1 = 0, OO2 = 0, OO = 0;
	while (S[i] != '*'&&S[i] != '/'&&S[i] != '(')
		O1[i] = S[i++];
	O1[i] = NULL;
	if (S[i] == '*')
	{
		O = S[i++];
		j = 0;
		while (S[i] != '(')
		{
			O2[j++] = S[i++];
		}
		O2[j] = NULL;
		j = 0;
		i++;
		while (S[i] != ')')
			RS[j++] = S[i++];
		RS[j] = NULL;

		j = 0;
		while (O1[j])
			OO1 = (OO1 + (O1[j++] - '0')) * 10;
		OO1 /= 10;
		j = 0;
		while (O2[j])
			OO2 = (OO2 + (O2[j++] - '0')) * 10;
		OO2 /= 10;
		OO = OO1*OO2;
		O1[16] = NULL;
		for (j = 15; j >= 0; j--)
		{
			if (OO)
			{
				O1[j] = (OO % 2) + '0';
				OO /= 2;
			}
			else
				O1[j] = '0';
		}
	}
	else if (S[i] == '/')
	{
		O = S[i++];
		j = 0;
		while (S[i] != '(')
		{
			O2[j++] = S[i++];
		}
		O2[j] = NULL;
		j = 0;
		i++;
		while (S[i] != ')')
			RS[j++] = S[i++];
		RS[j] = NULL;

		j = 0;
		while (O1[j])
			OO1 = (OO1 + (O1[j++] - '0')) * 10;
		OO1 /= 10;
		j = 0;
		while (O2[j])
			OO2 = (OO2 + (O2[j++] - '0')) * 10;
		OO2 /= 10;
		OO = OO1 / OO2;
		O1[16] = NULL;
		for (j = 15; j >= 0; j--)
		{
			if (OO)
			{
				O1[j] = (OO % 2) + '0';
				OO /= 2;
			}
			else
				O1[j] = '0';
		}
	}
	else if (S[i] == '(')
	{
		i++;
		j = 0;
		while (S[i] != ')')
			RS[j++] = S[i++];
		RS[j] = NULL;

		j = 0;
		while (O1[j])
			OO = (OO + (O1[j++] - '0')) * 10;
		OO /= 10;
		O1[16] = NULL;
		for (j = 15; j >= 0; j--)
		{
			if (OO)
			{
				O1[j] = (OO % 2) + '0';
				OO /= 2;
			}
			else
				O1[j] = '0';
		}
	}
	if (!strcmp(RS, "$zero"))
		printf("00000 ");
	if (!strcmp(RS, "$at"))
		printf("00001 ");
	if (!strcmp(RS, "$v0"))
		printf("00010 ");
	if (!strcmp(RS, "$v1"))
		printf("00011 ");
	if (!strcmp(RS, "$a0"))
		printf("00100 ");
	if (!strcmp(RS, "$a1"))
		printf("00101 ");
	if (!strcmp(RS, "$a2"))
		printf("00110 ");
	if (!strcmp(RS, "$a3"))
		printf("00111 ");
	if (!strcmp(RS, "$t0"))
		printf("01000 ");
	if (!strcmp(RS, "$t1"))
		printf("01001 ");
	if (!strcmp(RS, "$t2"))
		printf("01010 ");
	if (!strcmp(RS, "$t3"))
		printf("01011 ");
	if (!strcmp(RS, "$t4"))
		printf("01100 ");
	if (!strcmp(RS, "$t5"))
		printf("01101 ");
	if (!strcmp(RS, "$t6"))
		printf("01110 ");
	if (!strcmp(RS, "$t7"))
		printf("01111 ");
	if (!strcmp(RS, "$s0"))
		printf("10000 ");
	if (!strcmp(RS, "$s1"))
		printf("10001 ");
	if (!strcmp(RS, "$s2"))
		printf("10010 ");
	if (!strcmp(RS, "$s3"))
		printf("10011 ");
	if (!strcmp(RS, "$s4"))
		printf("10100 ");
	if (!strcmp(RS, "$s5"))
		printf("10101 ");
	if (!strcmp(RS, "$s6"))
		printf("10110 ");
	if (!strcmp(RS, "$s7"))
		printf("10111 ");
	if (!strcmp(RS, "$t8"))
		printf("11000 ");
	if (!strcmp(RS, "$t9"))
		printf("11001 ");
	if (!strcmp(RS, "$k0"))
		printf("11010 ");
	if (!strcmp(RS, "$k1"))
		printf("11011 ");
	if (!strcmp(RS, "$gp"))
		printf("11100 ");
	if (!strcmp(RS, "$sp"))
		printf("11101 ");
	if (!strcmp(RS, "$fp"))
		printf("11110 ");
	if (!strcmp(RS, "$ra"))
		printf("11111 ");

	if (!strcmp(RT, "$zero,"))
		printf("00000 ");
	if (!strcmp(RT, "$at,"))
		printf("00001 ");
	if (!strcmp(RT, "$v0,"))
		printf("00010 ");
	if (!strcmp(RT, "$v1,"))
		printf("00011 ");
	if (!strcmp(RT, "$a0,"))
		printf("00100 ");
	if (!strcmp(RT, "$a1,"))
		printf("00101 ");
	if (!strcmp(RT, "$a2,"))
		printf("00110 ");
	if (!strcmp(RT, "$a3,"))
		printf("00111 ");
	if (!strcmp(RT, "$t0,"))
		printf("01000 ");
	if (!strcmp(RT, "$t1,"))
		printf("01001 ");
	if (!strcmp(RT, "$t2,"))
		printf("01010 ");
	if (!strcmp(RT, "$t3,"))
		printf("01011 ");
	if (!strcmp(RT, "$t4,"))
		printf("01100 ");
	if (!strcmp(RT, "$t5,"))
		printf("01101 ");
	if (!strcmp(RT, "$t6,"))
		printf("01110 ");
	if (!strcmp(RT, "$t7,"))
		printf("01111 ");
	if (!strcmp(RT, "$s0,"))
		printf("10000 ");
	if (!strcmp(RT, "$s1,"))
		printf("10001 ");
	if (!strcmp(RT, "$s2,"))
		printf("10010 ");
	if (!strcmp(RT, "$s3,"))
		printf("10011 ");
	if (!strcmp(RT, "$s4,"))
		printf("10100 ");
	if (!strcmp(RT, "$s5,"))
		printf("10101 ");
	if (!strcmp(RT, "$s6,"))
		printf("10110 ");
	if (!strcmp(RT, "$s7,"))
		printf("10111 ");
	if (!strcmp(RT, "$t8,"))
		printf("11000 ");
	if (!strcmp(RT, "$t9,"))
		printf("11001 ");
	if (!strcmp(RT, "$k0,"))
		printf("11010 ");
	if (!strcmp(RT, "$k1,"))
		printf("11011 ");
	if (!strcmp(RT, "$gp,"))
		printf("11100 ");
	if (!strcmp(RT, "$sp,"))
		printf("11101 ");
	if (!strcmp(RT, "$fp,"))
		printf("11110 ");
	if (!strcmp(RT, "$ra,"))
		printf("11111 ");
	printf("%s\n", O1);
}
void BEQ(void)
{
	char S1[10];
	char S2[10];
	char S3[20];
	printf("000000 ");
	scanf("%s", S1);
	scanf("%s", S2);
	scanf("%s", S3);
	char O[20];
	int i = 0;
	int M = 0;
	while (S3[i])
		M = (M + (S3[i++] - '0')) * 10;
	M /= 10;
	S3[16] = NULL;
	for(i=15;i>=0;i--)
	{
		if (M)
		{
			S3[i] = (M % 2) + '0';
			M /= 2;
		}
		else
			S3[i] = '0';
	}
	if (!strcmp(S1, "$zero,"))
		printf("00000 ");
	if (!strcmp(S1, "$at,"))
		printf("00001 ");
	if (!strcmp(S1, "$v0,"))
		printf("00010 ");
	if (!strcmp(S1, "$v1,"))
		printf("00011 ");
	if (!strcmp(S1, "$a0,"))
		printf("00100 ");
	if (!strcmp(S1, "$a1,"))
		printf("00101 ");
	if (!strcmp(S1, "$a2,"))
		printf("00110 ");
	if (!strcmp(S1, "$a3,"))
		printf("00111 ");
	if (!strcmp(S1, "$t0,"))
		printf("01000 ");
	if (!strcmp(S1, "$t1,"))
		printf("01001 ");
	if (!strcmp(S1, "$t2,"))
		printf("01010 ");
	if (!strcmp(S1, "$t3,"))
		printf("01011 ");
	if (!strcmp(S1, "$t4,"))
		printf("01100 ");
	if (!strcmp(S1, "$t5,"))
		printf("01101 ");
	if (!strcmp(S1, "$t6,"))
		printf("01110 ");
	if (!strcmp(S1, "$t7,"))
		printf("01111 ");
	if (!strcmp(S1, "$s0,"))
		printf("10000 ");
	if (!strcmp(S1, "$s1,"))
		printf("10001 ");
	if (!strcmp(S1, "$s2,"))
		printf("10010 ");
	if (!strcmp(S1, "$s3,"))
		printf("10011 ");
	if (!strcmp(S1, "$s4,"))
		printf("10100 ");
	if (!strcmp(S1, "$s5,"))
		printf("10101 ");
	if (!strcmp(S1, "$s6,"))
		printf("10110 ");
	if (!strcmp(S1, "$s7,"))
		printf("10111 ");
	if (!strcmp(S1, "$t8,"))
		printf("11000 ");
	if (!strcmp(S1, "$t9,"))
		printf("11001 ");
	if (!strcmp(S1, "$k0,"))
		printf("11010 ");
	if (!strcmp(S1, "$k1,"))
		printf("11011 ");
	if (!strcmp(S1, "$gp,"))
		printf("11100 ");
	if (!strcmp(S1, "$sp,"))
		printf("11101 ");
	if (!strcmp(S1, "$fp,"))
		printf("11110 ");
	if (!strcmp(S1, "$ra,"))
		printf("11111 ");

	if (!strcmp(S2, "$zero,"))
		printf("00000 ");
	if (!strcmp(S2, "$at,"))
		printf("00001 ");
	if (!strcmp(S2, "$v0,"))
		printf("00010 ");
	if (!strcmp(S2, "$v1,"))
		printf("00011 ");
	if (!strcmp(S2, "$a0,"))
		printf("00100 ");
	if (!strcmp(S2, "$a1,"))
		printf("00101 ");
	if (!strcmp(S2, "$a2,"))
		printf("00110 ");
	if (!strcmp(S2, "$a3,"))
		printf("00111 ");
	if (!strcmp(S2, "$t0,"))
		printf("01000 ");
	if (!strcmp(S2, "$t1,"))
		printf("01001 ");
	if (!strcmp(S2, "$t2,"))
		printf("01010 ");
	if (!strcmp(S2, "$t3,"))
		printf("01011 ");
	if (!strcmp(S2, "$t4,"))
		printf("01100 ");
	if (!strcmp(S2, "$t5,"))
		printf("01101 ");
	if (!strcmp(S2, "$t6,"))
		printf("01110 ");
	if (!strcmp(S2, "$t7,"))
		printf("01111 ");
	if (!strcmp(S2, "$s0,"))
		printf("10000 ");
	if (!strcmp(S2, "$s1,"))
		printf("10001 ");
	if (!strcmp(S2, "$s2,"))
		printf("10010 ");
	if (!strcmp(S2, "$s3,"))
		printf("10011 ");
	if (!strcmp(S2, "$s4,"))
		printf("10100 ");
	if (!strcmp(S2, "$s5,"))
		printf("10101 ");
	if (!strcmp(S2, "$s6,"))
		printf("10110 ");
	if (!strcmp(S2, "$s7,"))
		printf("10111 ");
	if (!strcmp(S2, "$t8,"))
		printf("11000 ");
	if (!strcmp(S2, "$t9,"))
		printf("11001 ");
	if (!strcmp(S2, "$k0,"))
		printf("11010 ");
	if (!strcmp(S2, "$k1,"))
		printf("11011 ");
	if (!strcmp(S2, "$gp,"))
		printf("11100 ");
	if (!strcmp(S2, "$sp,"))
		printf("11101 ");
	if (!strcmp(S2, "$fp,"))
		printf("11110 ");
	if (!strcmp(S2, "$ra,"))
		printf("11111 ");
	printf("%s\n", S3);
}
void J(void)
{
	printf("000010 ");
	char S[30];
	scanf("%s", S);
	int i = 0;
	int M = 0;
	while (S[i])
		M = (M + (S[i++] - '0')) * 10;
	M /= 10;
	S[26] = NULL;
	for (i = 25; i >= 0; i--)
	{
		if (M)
		{
			S[i] = M % 2 + '0';
			M /= 2;
		}
		else
			S[i] = '0';
	}
	printf("%s\n", S);
}