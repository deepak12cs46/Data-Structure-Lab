#include<cstdlib>
#include<iostream>
#include<cstdio>
#include<fstream>
using namespace std;
int main()
{
   FILE *fp;
    fp = fopen("prime.txt", "w+");
    while(!EOF)
    fprintf(fp,",");
    return 0;
}
