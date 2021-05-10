#include<stdio.h>
#include<string.h>
int main(int argc,char **argv)
{
    FILE *fp = NULL;
    char buff[255];
    char *p;
    int count=0;
    int i=0;
    /*printf("argc:%d\n",argc);
    for (int i = 0; i < argc; i++)
    {
        printf("argv[i]:%s\n",argv[i]);
    }*/
    if(argc==3){
        if (!strcmp(argv[1],"-w"))
        {
            fp = fopen(argv[2],"r");
            if(!fp){
                printf("this file can't find!\n");
            }
            while (1)
            {
                if(feof(fp))
                {
                   break; 
                }
                fgets(buff,255,fp);
                p = buff;
                while (*p != '\0')
                {
                    if(*p == ' ')
                    {
                        count++;
                    }
                    else if(*p == ',')
                    {
                        count++;
                    }
                    p++;
                }
                memset(buff,0,255);
            }
            printf("该文本单词数：%d\n",++count);
        }
        if (!strcmp(argv[1],"-c"))
        {
            fp = fopen(argv[2],"r");
            if(!fp){
                printf("this file can't find!\n");
            }
            while(1)
            {
                if(feof(fp))
                {
                   break; 
                }
                fgets(buff,255,fp);
                p = buff;
                while (*p != '\0')
                {
                    p++;
                    count++;
                }
                memset(buff,0,255);
            }
            printf("该文本字符数：%d\n",count);
        }
    }
    else{
        printf("Commmend don't conform to the specifications!\n");
    }
}